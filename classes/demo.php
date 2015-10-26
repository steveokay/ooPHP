<?php

require 'class.Address.inc';
require 'class.Database.inc';

echo '<h2>Instantiating Address</h2>';
$address = new Address();

echo '<h2> Setting Properties...</h2>';
$address->city_name = 'Townsville';
$address->street_address_1 = '555 Fake Street';
$address->subdivision_name = 'State';
$address->country_name = 'America';
$address->address_type_id = 1;
echo $address;


echo '<h2>Testing Address __construct with an array</h2>';
$address_2 = new Address(array(
    'street_address_1' => '123 Phony Ave',
    'city_name' => 'Villageland',
    'subdivision_name' => 'Region',
    'country_name' => 'Canada',
));
echo $address_2->display();

echo '<h2>Address __toString</h2>';
echo $address_2;

?>