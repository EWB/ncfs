<?php
/**
 * @file
 * base_instructor_profile.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function base_instructor_profile_ctools_plugin_api() {
  return array("version" => "1");
}

/**
 * Implements hook_node_info().
 */
function base_instructor_profile_node_info() {
  $items = array(
    'intructor_profile' => array(
      'name' => t('Intsructor Profile'),
      'base' => 'node_content',
      'description' => t('Descriptions of workshop instructor'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
