<?php
/**
 * @file
 * library_citation_guide.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function library_citation_guide_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function library_citation_guide_node_info() {
  $items = array(
    'library_citation_guide' => array(
      'name' => t('Citation Guide'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
