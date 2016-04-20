<?php
/**
 * @file
 * my_variables.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function my_variables_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'site_name';
  $strongarm->value = 'Mary Warrington\'s Portfolio';
  $export['site_name'] = $strongarm;

  return $export;
}
