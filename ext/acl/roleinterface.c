
/*
  +------------------------------------------------------------------------+
  | Phalcon Framework                                                      |
  +------------------------------------------------------------------------+
  | Copyright (c) 2011-2012 Phalcon Team (http://www.phalconphp.com)       |
  +------------------------------------------------------------------------+
  | This source file is subject to the New BSD License that is bundled     |
  | with this package in the file docs/LICENSE.txt.                        |
  |                                                                        |
  | If you did not receive a copy of the license and are unable to         |
  | obtain it through the world-wide-web, please send an email             |
  | to license@phalconphp.com so we can send you a copy immediately.       |
  +------------------------------------------------------------------------+
  | Authors: Andres Gutierrez <andres@phalconphp.com>                      |
  |          Eduar Carvajal <eduar@phalconphp.com>                         |
  +------------------------------------------------------------------------+
*/

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "php.h"
#include "php_phalcon.h"
#include "phalcon.h"

#include "kernel/main.h"

/**
 * Phalcon\Acl\RoleInterface initializer
 */
PHALCON_INIT_CLASS(Phalcon_Acl_RoleInterface){

	PHALCON_REGISTER_INTERFACE(Phalcon\\Acl, RoleInterface, acl_roleinterface, phalcon_acl_roleinterface_method_entry);

	return SUCCESS;
}

/**
 * Phalcon\Acl\Role constructor
 *
 * @param string $name
 * @param string $description
 */
PHALCON_DOC_METHOD(Phalcon_Acl_RoleInterface, __construct);

/**
 * Returns the role name
 *
 * @return string
 */
PHALCON_DOC_METHOD(Phalcon_Acl_RoleInterface, getName);

/**
 * Returns role description
 *
 * @return string
 */
PHALCON_DOC_METHOD(Phalcon_Acl_RoleInterface, getDescription);

/**
 * Magic method __toString
 *
 * @return string
 */
PHALCON_DOC_METHOD(Phalcon_Acl_RoleInterface, __toString);

