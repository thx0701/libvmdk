/*
 * Library extent_table type test program
 *
 * Copyright (C) 2009-2017, Joachim Metz <joachim.metz@gmail.com>
 *
 * Refer to AUTHORS for acknowledgements.
 *
 * This software is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This software is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this software.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <common.h>
#include <file_stream.h>
#include <types.h>

#if defined( HAVE_STDLIB_H ) || defined( WINAPI )
#include <stdlib.h>
#endif

#include "vmdk_test_libcerror.h"
#include "vmdk_test_libvmdk.h"
#include "vmdk_test_macros.h"
#include "vmdk_test_memory.h"
#include "vmdk_test_unused.h"

#include "../libvmdk/libvmdk_extent_table.h"

#if defined( __GNUC__ )

/* Tests the libvmdk_extent_table_free function
 * Returns 1 if successful or 0 if not
 */
int vmdk_test_extent_table_free(
     void )
{
	libcerror_error_t *error = NULL;
	int result               = 0;

	/* Test error cases
	 */
	result = libvmdk_extent_table_free(
	          NULL,
	          &error );

	VMDK_TEST_ASSERT_EQUAL_INT(
	 "result",
	 result,
	 -1 );

        VMDK_TEST_ASSERT_IS_NOT_NULL(
         "error",
         error );

	libcerror_error_free(
	 &error );

	return( 1 );

on_error:
	if( error != NULL )
	{
		libcerror_error_free(
		 &error );
	}
	return( 0 );
}

#endif /* defined( __GNUC__ ) */

/* The main program
 */
#if defined( HAVE_WIDE_SYSTEM_CHARACTER )
int wmain(
     int argc VMDK_TEST_ATTRIBUTE_UNUSED,
     wchar_t * const argv[] VMDK_TEST_ATTRIBUTE_UNUSED )
#else
int main(
     int argc VMDK_TEST_ATTRIBUTE_UNUSED,
     char * const argv[] VMDK_TEST_ATTRIBUTE_UNUSED )
#endif
{
	VMDK_TEST_UNREFERENCED_PARAMETER( argc )
	VMDK_TEST_UNREFERENCED_PARAMETER( argv )

#if defined( __GNUC__ )

	/* TODO: add tests for libvmdk_extent_table_initialize */

	VMDK_TEST_RUN(
	 "libvmdk_extent_table_free",
	 vmdk_test_extent_table_free );

	/* TODO: add tests for libvmdk_extent_table_clear */

	/* TODO: add tests for libvmdk_extent_table_clone */

	/* TODO: add tests for libvmdk_extent_table_get_basename_size */

	/* TODO: add tests for libvmdk_extent_table_get_basename */

	/* TODO: add tests for libvmdk_extent_table_set_basename */

	/* TODO: add tests for libvmdk_extent_table_get_basename_size_wide */

	/* TODO: add tests for libvmdk_extent_table_get_basename_wide */

	/* TODO: add tests for libvmdk_extent_table_set_basename_wide */

	/* TODO: add tests for libvmdk_extent_table_initialize_extents */

	/* TODO: add tests for libvmdk_extent_table_get_number_of_extents */

	/* TODO: add tests for libvmdk_extent_table_get_extent_by_index */

	/* TODO: add tests for libvmdk_extent_table_get_extent_at_offset */

	/* TODO: add tests for libvmdk_extent_table_set_extent_storage_media_size_by_index */

	/* TODO: add tests for libvmdk_extent_table_get_extent_file_by_index */

	/* TODO: add tests for libvmdk_extent_table_get_extent_file_at_offset */

	/* TODO: add tests for libvmdk_extent_table_set_extent_file_by_index */

	/* TODO: add tests for libvmdk_extent_table_set_extent_by_extent_descriptor */

#endif /* defined( __GNUC__ ) */

	return( EXIT_SUCCESS );

on_error:
	return( EXIT_FAILURE );
}

