/*
 * Input/Output (IO) handle
 *
 * Copyright (c) 2009-2012, Joachim Metz <joachim.metz@gmail.com>
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

#if !defined( _LIBVMDK_IO_HANDLE_H )
#define _LIBVMDK_IO_HANDLE_H

#include <common.h>
#include <types.h>

#include "libvmdk_libbfio.h"
#include "libvmdk_libcerror.h"
#include "libvmdk_offset_table.h"

#if defined( __cplusplus )
extern "C" {
#endif

typedef struct libvmdk_io_handle libvmdk_io_handle_t;

struct libvmdk_io_handle
{
	/* The flags
	 */
	uint8_t flags;

	/* The file type
	 */
	uint8_t file_type;

	/* The format version
	 */
	uint32_t format_version;

	/* The maximum data size
	 */
	size64_t maximum_data_size;

	/* The compression method
	 */
	uint16_t compression_method;
};

int libvmdk_io_handle_initialize(
     libvmdk_io_handle_t **io_handle,
     libcerror_error_t **error );

int libvmdk_io_handle_free(
     libvmdk_io_handle_t **io_handle,
     libcerror_error_t **error );

int libvmdk_io_handle_read_file_header(
     libvmdk_io_handle_t *io_handle,
     libbfio_handle_t *file_io_handle,
     off64_t *descriptor_offset,
     size64_t *descriptor_size,
     off64_t *grain_directory_offset,
     off64_t *secondary_grain_directory_offset,
     uint32_t *amount_of_grain_directory_entries,
     uint32_t *amount_of_grain_table_entries,
     size64_t *grain_size,
     libcerror_error_t **error );

int libvmdk_io_handle_read_grain_directory(
     libvmdk_io_handle_t *io_handle,
     libbfio_handle_t *file_io_handle,
     libvmdk_offset_table_t *offset_table,
     off64_t grain_directory_offset,
     uint32_t amount_of_grain_directory_entries,
     uint32_t amount_of_grain_table_entries,
     size64_t grain_size,
     uint8_t is_secondary_grain_directory,
     libcerror_error_t **error );

int libvmdk_io_handle_read_grain_table(
     libvmdk_io_handle_t *io_handle,
     libbfio_handle_t *file_io_handle,
     libvmdk_offset_table_t *offset_table,
     off64_t grain_table_offset,
     uint32_t amount_of_grain_table_entries,
     size64_t grain_size,
     uint8_t is_secondary_grain_directory,
     libcerror_error_t **error );

#if defined( __cplusplus )
}
#endif

#endif

