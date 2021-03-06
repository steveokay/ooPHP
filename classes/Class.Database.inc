<?php

/**
 * Only one connection is allowed
 */
class Database{
    private $_connection;
    //store the single instance.
    private static $_instance;
    
    /**
     * Get an instance of the Database.
     * @return Database
     */
    public static function getInstance(){
        if(!self::$_instance){
            self::$_instance = new self();
        }
        return self::$_instance;
    }
    
    /**
     * constructor for the database object
     */
    public function __construct() {
        //new msqli(host,username,password, database);
        $this->_connection = new mysqli('localhost', 'root', '', 'sandbox');
        //Error Handling
        if(mysqli_connect_error()){
            trigger_error('Failed to Connect to MySQL: ' . mysqli_connect_error(), E_USER_ERROR);
        }
    }
/**
 * Empty clone magic method to prevent duplication.
 */
private function __clone() {}

/**
 * get the mysqli connection
 */
    public function getConnection(){
        return $this->_connection;
    }
}
?>