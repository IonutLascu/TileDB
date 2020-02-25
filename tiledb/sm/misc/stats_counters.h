/**
 * @file   stats_all.h
 *
 * @section LICENSE
 *
 * The MIT License
 *
 * @copyright Copyright (c) 2018-2020 TileDB, Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 * @section DESCRIPTION
 *
 * This file contains declarations of statistics variables.
 */

#ifdef STATS_DEFINE_FUNC_STAT
// Compressors
STATS_DEFINE_FUNC_STAT(compressor_bzip_compress)
STATS_DEFINE_FUNC_STAT(compressor_bzip_decompress)
STATS_DEFINE_FUNC_STAT(compressor_dd_compress)
STATS_DEFINE_FUNC_STAT(compressor_dd_decompress)
STATS_DEFINE_FUNC_STAT(compressor_gzip_compress)
STATS_DEFINE_FUNC_STAT(compressor_gzip_decompress)
STATS_DEFINE_FUNC_STAT(compressor_lz4_compress)
STATS_DEFINE_FUNC_STAT(compressor_lz4_decompress)
STATS_DEFINE_FUNC_STAT(compressor_rle_compress)
STATS_DEFINE_FUNC_STAT(compressor_rle_decompress)
STATS_DEFINE_FUNC_STAT(compressor_zstd_compress)
STATS_DEFINE_FUNC_STAT(compressor_zstd_decompress)
// Crypto
STATS_DEFINE_FUNC_STAT(crypto_encrypt_aes256gcm)
STATS_DEFINE_FUNC_STAT(crypto_decrypt_aes256gcm)
STATS_DEFINE_FUNC_STAT(crypto_md5)
STATS_DEFINE_FUNC_STAT(crypto_sha256)
// Filters
STATS_DEFINE_FUNC_STAT(filter_pipeline_run_forward)
STATS_DEFINE_FUNC_STAT(filter_pipeline_run_reverse)
// Tile cache
STATS_DEFINE_FUNC_STAT(cache_lru_evict)
STATS_DEFINE_FUNC_STAT(cache_lru_insert)
STATS_DEFINE_FUNC_STAT(cache_lru_invalidate)
STATS_DEFINE_FUNC_STAT(cache_lru_read)
STATS_DEFINE_FUNC_STAT(cache_lru_read_partial)
// Reader
STATS_DEFINE_FUNC_STAT(reader_compute_cell_ranges)
STATS_DEFINE_FUNC_STAT(reader_compute_dense_cell_ranges)
STATS_DEFINE_FUNC_STAT(reader_compute_dense_overlapping_tiles_and_cell_ranges)
STATS_DEFINE_FUNC_STAT(reader_compute_overlapping_coords)
STATS_DEFINE_FUNC_STAT(reader_compute_overlapping_tiles)
STATS_DEFINE_FUNC_STAT(reader_compute_tile_coords)
STATS_DEFINE_FUNC_STAT(reader_copy_fixed_cells)
STATS_DEFINE_FUNC_STAT(reader_copy_var_cells)
STATS_DEFINE_FUNC_STAT(reader_dedup_coords)
STATS_DEFINE_FUNC_STAT(reader_dense_read)
STATS_DEFINE_FUNC_STAT(reader_fill_coords)
STATS_DEFINE_FUNC_STAT(reader_init_tile_fragment_dense_cell_range_iters)
STATS_DEFINE_FUNC_STAT(reader_next_subarray_partition)
STATS_DEFINE_FUNC_STAT(reader_read)
STATS_DEFINE_FUNC_STAT(reader_read_all_tiles)
STATS_DEFINE_FUNC_STAT(reader_sort_coords)
STATS_DEFINE_FUNC_STAT(reader_sparse_read)
STATS_DEFINE_FUNC_STAT(reader_unfilter_tiles)
// Writer
STATS_DEFINE_FUNC_STAT(writer_check_coord_dups)
STATS_DEFINE_FUNC_STAT(writer_check_coord_dups_global)
STATS_DEFINE_FUNC_STAT(writer_check_global_order)
STATS_DEFINE_FUNC_STAT(writer_compute_coord_dups)
STATS_DEFINE_FUNC_STAT(writer_compute_coord_dups_global)
STATS_DEFINE_FUNC_STAT(writer_compute_coords_metadata)
STATS_DEFINE_FUNC_STAT(writer_compute_write_cell_ranges)
STATS_DEFINE_FUNC_STAT(writer_create_fragment)
STATS_DEFINE_FUNC_STAT(writer_filter_tiles)
STATS_DEFINE_FUNC_STAT(writer_global_write)
STATS_DEFINE_FUNC_STAT(writer_init_global_write_state)
STATS_DEFINE_FUNC_STAT(writer_init_tile_dense_cell_range_iters)
STATS_DEFINE_FUNC_STAT(writer_ordered_write)
STATS_DEFINE_FUNC_STAT(writer_prepare_full_tiles_fixed)
STATS_DEFINE_FUNC_STAT(writer_prepare_full_tiles_var)
STATS_DEFINE_FUNC_STAT(writer_prepare_tiles_fixed)
STATS_DEFINE_FUNC_STAT(writer_prepare_tiles_ordered)
STATS_DEFINE_FUNC_STAT(writer_prepare_tiles_var)
STATS_DEFINE_FUNC_STAT(writer_sort_coords)
STATS_DEFINE_FUNC_STAT(writer_unordered_write)
STATS_DEFINE_FUNC_STAT(writer_write)
STATS_DEFINE_FUNC_STAT(writer_write_all_tiles)
// StorageManager
STATS_DEFINE_FUNC_STAT(sm_array_close_for_reads)
STATS_DEFINE_FUNC_STAT(sm_array_close_for_writes)
STATS_DEFINE_FUNC_STAT(sm_array_open_for_reads)
STATS_DEFINE_FUNC_STAT(sm_array_open_for_writes)
STATS_DEFINE_FUNC_STAT(sm_array_reopen)
STATS_DEFINE_FUNC_STAT(sm_read_from_cache)
STATS_DEFINE_FUNC_STAT(sm_write_to_cache)
STATS_DEFINE_FUNC_STAT(sm_query_submit)
// TileIO
STATS_DEFINE_FUNC_STAT(tileio_is_generic_tile)
STATS_DEFINE_FUNC_STAT(tileio_read_generic)
STATS_DEFINE_FUNC_STAT(tileio_write_generic)
// VFS
STATS_DEFINE_FUNC_STAT(vfs_abs_path)
STATS_DEFINE_FUNC_STAT(vfs_close_file)
STATS_DEFINE_FUNC_STAT(vfs_constructor)
STATS_DEFINE_FUNC_STAT(vfs_create_bucket)
STATS_DEFINE_FUNC_STAT(vfs_create_dir)
STATS_DEFINE_FUNC_STAT(vfs_create_file)
STATS_DEFINE_FUNC_STAT(vfs_dir_size)
STATS_DEFINE_FUNC_STAT(vfs_empty_bucket)
STATS_DEFINE_FUNC_STAT(vfs_file_size)
STATS_DEFINE_FUNC_STAT(vfs_filelock_lock)
STATS_DEFINE_FUNC_STAT(vfs_filelock_unlock)
STATS_DEFINE_FUNC_STAT(vfs_init)
STATS_DEFINE_FUNC_STAT(vfs_is_bucket)
STATS_DEFINE_FUNC_STAT(vfs_is_dir)
STATS_DEFINE_FUNC_STAT(vfs_is_empty_bucket)
STATS_DEFINE_FUNC_STAT(vfs_is_file)
STATS_DEFINE_FUNC_STAT(vfs_ls)
STATS_DEFINE_FUNC_STAT(vfs_move_dir)
STATS_DEFINE_FUNC_STAT(vfs_move_file)
STATS_DEFINE_FUNC_STAT(vfs_open_file)
STATS_DEFINE_FUNC_STAT(vfs_read)
STATS_DEFINE_FUNC_STAT(vfs_read_all)
STATS_DEFINE_FUNC_STAT(vfs_remove_bucket)
STATS_DEFINE_FUNC_STAT(vfs_remove_dir)
STATS_DEFINE_FUNC_STAT(vfs_remove_file)
STATS_DEFINE_FUNC_STAT(vfs_s3_fill_file_buffer)
STATS_DEFINE_FUNC_STAT(vfs_s3_write_multipart)
STATS_DEFINE_FUNC_STAT(vfs_supports_fs)
STATS_DEFINE_FUNC_STAT(vfs_sync)
STATS_DEFINE_FUNC_STAT(vfs_terminate)
STATS_DEFINE_FUNC_STAT(vfs_write)
// Serialization
STATS_DEFINE_FUNC_STAT(serialization_array_schema_serialize)
STATS_DEFINE_FUNC_STAT(serialization_array_schema_deserialize)
STATS_DEFINE_FUNC_STAT(serialization_query_serialize)
STATS_DEFINE_FUNC_STAT(serialization_query_deserialize)
// REST
STATS_DEFINE_FUNC_STAT(rest_array_create)
STATS_DEFINE_FUNC_STAT(rest_array_get_schema)
STATS_DEFINE_FUNC_STAT(rest_query_submit)
STATS_DEFINE_FUNC_STAT(rest_curl_get)
STATS_DEFINE_FUNC_STAT(rest_curl_post)
STATS_DEFINE_FUNC_STAT(rest_curl_delete)
#endif

#ifdef STATS_INIT_FUNC_STAT
// Compressors
STATS_INIT_FUNC_STAT(compressor_bzip_compress)
STATS_INIT_FUNC_STAT(compressor_bzip_decompress)
STATS_INIT_FUNC_STAT(compressor_dd_compress)
STATS_INIT_FUNC_STAT(compressor_dd_decompress)
STATS_INIT_FUNC_STAT(compressor_gzip_compress)
STATS_INIT_FUNC_STAT(compressor_gzip_decompress)
STATS_INIT_FUNC_STAT(compressor_lz4_compress)
STATS_INIT_FUNC_STAT(compressor_lz4_decompress)
STATS_INIT_FUNC_STAT(compressor_rle_compress)
STATS_INIT_FUNC_STAT(compressor_rle_decompress)
STATS_INIT_FUNC_STAT(compressor_zstd_compress)
STATS_INIT_FUNC_STAT(compressor_zstd_decompress)
// Crypto
STATS_INIT_FUNC_STAT(crypto_encrypt_aes256gcm)
STATS_INIT_FUNC_STAT(crypto_decrypt_aes256gcm)
STATS_INIT_FUNC_STAT(crypto_md5)
STATS_INIT_FUNC_STAT(crypto_sha256)
// Filters
STATS_INIT_FUNC_STAT(filter_pipeline_run_forward)
STATS_INIT_FUNC_STAT(filter_pipeline_run_reverse)
// Tile cache
STATS_INIT_FUNC_STAT(cache_lru_evict)
STATS_INIT_FUNC_STAT(cache_lru_insert)
STATS_INIT_FUNC_STAT(cache_lru_invalidate)
STATS_INIT_FUNC_STAT(cache_lru_read)
STATS_INIT_FUNC_STAT(cache_lru_read_partial)
// Reader
STATS_INIT_FUNC_STAT(reader_compute_cell_ranges)
STATS_INIT_FUNC_STAT(reader_compute_dense_cell_ranges)
STATS_INIT_FUNC_STAT(reader_compute_dense_overlapping_tiles_and_cell_ranges)
STATS_INIT_FUNC_STAT(reader_compute_overlapping_coords)
STATS_INIT_FUNC_STAT(reader_compute_overlapping_tiles)
STATS_INIT_FUNC_STAT(reader_compute_tile_coords)
STATS_INIT_FUNC_STAT(reader_copy_fixed_cells)
STATS_INIT_FUNC_STAT(reader_copy_var_cells)
STATS_INIT_FUNC_STAT(reader_dedup_coords)
STATS_INIT_FUNC_STAT(reader_dense_read)
STATS_INIT_FUNC_STAT(reader_fill_coords)
STATS_INIT_FUNC_STAT(reader_init_tile_fragment_dense_cell_range_iters)
STATS_INIT_FUNC_STAT(reader_next_subarray_partition)
STATS_INIT_FUNC_STAT(reader_read)
STATS_INIT_FUNC_STAT(reader_read_all_tiles)
STATS_INIT_FUNC_STAT(reader_sort_coords)
STATS_INIT_FUNC_STAT(reader_sparse_read)
STATS_INIT_FUNC_STAT(reader_unfilter_tiles)
// Writer
STATS_INIT_FUNC_STAT(writer_check_coord_dups)
STATS_INIT_FUNC_STAT(writer_check_coord_dups_global)
STATS_INIT_FUNC_STAT(writer_check_global_order)
STATS_INIT_FUNC_STAT(writer_compute_coord_dups)
STATS_INIT_FUNC_STAT(writer_compute_coord_dups_global)
STATS_INIT_FUNC_STAT(writer_compute_coords_metadata)
STATS_INIT_FUNC_STAT(writer_compute_write_cell_ranges)
STATS_INIT_FUNC_STAT(writer_create_fragment)
STATS_INIT_FUNC_STAT(writer_filter_tiles)
STATS_INIT_FUNC_STAT(writer_global_write)
STATS_INIT_FUNC_STAT(writer_init_global_write_state)
STATS_INIT_FUNC_STAT(writer_init_tile_dense_cell_range_iters)
STATS_INIT_FUNC_STAT(writer_ordered_write)
STATS_INIT_FUNC_STAT(writer_prepare_full_tiles_fixed)
STATS_INIT_FUNC_STAT(writer_prepare_full_tiles_var)
STATS_INIT_FUNC_STAT(writer_prepare_tiles_fixed)
STATS_INIT_FUNC_STAT(writer_prepare_tiles_ordered)
STATS_INIT_FUNC_STAT(writer_prepare_tiles_var)
STATS_INIT_FUNC_STAT(writer_sort_coords)
STATS_INIT_FUNC_STAT(writer_unordered_write)
STATS_INIT_FUNC_STAT(writer_write)
STATS_INIT_FUNC_STAT(writer_write_all_tiles)
// StorageManager
STATS_INIT_FUNC_STAT(sm_array_close_for_reads)
STATS_INIT_FUNC_STAT(sm_array_close_for_writes)
STATS_INIT_FUNC_STAT(sm_array_open_for_reads)
STATS_INIT_FUNC_STAT(sm_array_open_for_writes)
STATS_INIT_FUNC_STAT(sm_array_reopen)
STATS_INIT_FUNC_STAT(sm_read_from_cache)
STATS_INIT_FUNC_STAT(sm_write_to_cache)
STATS_INIT_FUNC_STAT(sm_query_submit)
// TileIO
STATS_INIT_FUNC_STAT(tileio_is_generic_tile)
STATS_INIT_FUNC_STAT(tileio_read_generic)
STATS_INIT_FUNC_STAT(tileio_write_generic)
// VFS
STATS_INIT_FUNC_STAT(vfs_abs_path)
STATS_INIT_FUNC_STAT(vfs_close_file)
STATS_INIT_FUNC_STAT(vfs_constructor)
STATS_INIT_FUNC_STAT(vfs_create_bucket)
STATS_INIT_FUNC_STAT(vfs_create_dir)
STATS_INIT_FUNC_STAT(vfs_create_file)
STATS_INIT_FUNC_STAT(vfs_dir_size)
STATS_INIT_FUNC_STAT(vfs_empty_bucket)
STATS_INIT_FUNC_STAT(vfs_file_size)
STATS_INIT_FUNC_STAT(vfs_filelock_lock)
STATS_INIT_FUNC_STAT(vfs_filelock_unlock)
STATS_INIT_FUNC_STAT(vfs_init)
STATS_INIT_FUNC_STAT(vfs_is_bucket)
STATS_INIT_FUNC_STAT(vfs_is_dir)
STATS_INIT_FUNC_STAT(vfs_is_empty_bucket)
STATS_INIT_FUNC_STAT(vfs_is_file)
STATS_INIT_FUNC_STAT(vfs_ls)
STATS_INIT_FUNC_STAT(vfs_move_file)
STATS_INIT_FUNC_STAT(vfs_move_dir)
STATS_INIT_FUNC_STAT(vfs_open_file)
STATS_INIT_FUNC_STAT(vfs_read)
STATS_INIT_FUNC_STAT(vfs_read_all)
STATS_INIT_FUNC_STAT(vfs_remove_bucket)
STATS_INIT_FUNC_STAT(vfs_remove_file)
STATS_INIT_FUNC_STAT(vfs_remove_dir)
STATS_INIT_FUNC_STAT(vfs_supports_fs)
STATS_INIT_FUNC_STAT(vfs_sync)
STATS_INIT_FUNC_STAT(vfs_terminate)
STATS_INIT_FUNC_STAT(vfs_write)
STATS_INIT_FUNC_STAT(vfs_s3_fill_file_buffer)
STATS_INIT_FUNC_STAT(vfs_s3_write_multipart)
// Serialization
STATS_INIT_FUNC_STAT(serialization_array_schema_serialize)
STATS_INIT_FUNC_STAT(serialization_array_schema_deserialize)
STATS_INIT_FUNC_STAT(serialization_query_serialize)
STATS_INIT_FUNC_STAT(serialization_query_deserialize)
// REST
STATS_INIT_FUNC_STAT(rest_array_create)
STATS_INIT_FUNC_STAT(rest_array_get_schema)
STATS_INIT_FUNC_STAT(rest_query_submit)
STATS_INIT_FUNC_STAT(rest_curl_get)
STATS_INIT_FUNC_STAT(rest_curl_post)
STATS_INIT_FUNC_STAT(rest_curl_delete)
#endif

#ifdef STATS_REPORT_FUNC_STAT
// Compressors
STATS_REPORT_FUNC_STAT(compressor_bzip_compress)
STATS_REPORT_FUNC_STAT(compressor_bzip_decompress)
STATS_REPORT_FUNC_STAT(compressor_dd_compress)
STATS_REPORT_FUNC_STAT(compressor_dd_decompress)
STATS_REPORT_FUNC_STAT(compressor_gzip_compress)
STATS_REPORT_FUNC_STAT(compressor_gzip_decompress)
STATS_REPORT_FUNC_STAT(compressor_lz4_compress)
STATS_REPORT_FUNC_STAT(compressor_lz4_decompress)
STATS_REPORT_FUNC_STAT(compressor_rle_compress)
STATS_REPORT_FUNC_STAT(compressor_rle_decompress)
STATS_REPORT_FUNC_STAT(compressor_zstd_compress)
STATS_REPORT_FUNC_STAT(compressor_zstd_decompress)
// Crypto
STATS_REPORT_FUNC_STAT(crypto_encrypt_aes256gcm)
STATS_REPORT_FUNC_STAT(crypto_decrypt_aes256gcm)
STATS_REPORT_FUNC_STAT(crypto_md5)
STATS_REPORT_FUNC_STAT(crypto_sha256)
// Filters
STATS_REPORT_FUNC_STAT(filter_pipeline_run_forward)
STATS_REPORT_FUNC_STAT(filter_pipeline_run_reverse)
// Tile cache
STATS_REPORT_FUNC_STAT(cache_lru_evict)
STATS_REPORT_FUNC_STAT(cache_lru_insert)
STATS_REPORT_FUNC_STAT(cache_lru_invalidate)
STATS_REPORT_FUNC_STAT(cache_lru_read)
STATS_REPORT_FUNC_STAT(cache_lru_read_partial)
// Reader
STATS_REPORT_FUNC_STAT(reader_compute_cell_ranges)
STATS_REPORT_FUNC_STAT(reader_compute_dense_cell_ranges)
STATS_REPORT_FUNC_STAT(reader_compute_dense_overlapping_tiles_and_cell_ranges)
STATS_REPORT_FUNC_STAT(reader_compute_overlapping_coords)
STATS_REPORT_FUNC_STAT(reader_compute_overlapping_tiles)
STATS_REPORT_FUNC_STAT(reader_compute_tile_coords)
STATS_REPORT_FUNC_STAT(reader_copy_fixed_cells)
STATS_REPORT_FUNC_STAT(reader_copy_var_cells)
STATS_REPORT_FUNC_STAT(reader_dedup_coords)
STATS_REPORT_FUNC_STAT(reader_dense_read)
STATS_REPORT_FUNC_STAT(reader_fill_coords)
STATS_REPORT_FUNC_STAT(reader_init_tile_fragment_dense_cell_range_iters)
STATS_REPORT_FUNC_STAT(reader_next_subarray_partition)
STATS_REPORT_FUNC_STAT(reader_read)
STATS_REPORT_FUNC_STAT(reader_read_all_tiles)
STATS_REPORT_FUNC_STAT(reader_sort_coords)
STATS_REPORT_FUNC_STAT(reader_sparse_read)
STATS_REPORT_FUNC_STAT(reader_unfilter_tiles)
// Writer
STATS_REPORT_FUNC_STAT(writer_check_coord_dups)
STATS_REPORT_FUNC_STAT(writer_check_coord_dups_global)
STATS_REPORT_FUNC_STAT(writer_check_global_order)
STATS_REPORT_FUNC_STAT(writer_compute_coord_dups)
STATS_REPORT_FUNC_STAT(writer_compute_coord_dups_global)
STATS_REPORT_FUNC_STAT(writer_compute_coords_metadata)
STATS_REPORT_FUNC_STAT(writer_compute_write_cell_ranges)
STATS_REPORT_FUNC_STAT(writer_create_fragment)
STATS_REPORT_FUNC_STAT(writer_filter_tiles)
STATS_REPORT_FUNC_STAT(writer_global_write)
STATS_REPORT_FUNC_STAT(writer_init_global_write_state)
STATS_REPORT_FUNC_STAT(writer_init_tile_dense_cell_range_iters)
STATS_REPORT_FUNC_STAT(writer_ordered_write)
STATS_REPORT_FUNC_STAT(writer_prepare_full_tiles_fixed)
STATS_REPORT_FUNC_STAT(writer_prepare_full_tiles_var)
STATS_REPORT_FUNC_STAT(writer_prepare_tiles_fixed)
STATS_REPORT_FUNC_STAT(writer_prepare_tiles_ordered)
STATS_REPORT_FUNC_STAT(writer_prepare_tiles_var)
STATS_REPORT_FUNC_STAT(writer_sort_coords)
STATS_REPORT_FUNC_STAT(writer_unordered_write)
STATS_REPORT_FUNC_STAT(writer_write)
STATS_REPORT_FUNC_STAT(writer_write_all_tiles)
// StorageManager
STATS_REPORT_FUNC_STAT(sm_array_close_for_reads)
STATS_REPORT_FUNC_STAT(sm_array_close_for_writes)
STATS_REPORT_FUNC_STAT(sm_array_open_for_reads)
STATS_REPORT_FUNC_STAT(sm_array_open_for_writes)
STATS_REPORT_FUNC_STAT(sm_array_reopen)
STATS_REPORT_FUNC_STAT(sm_read_from_cache)
STATS_REPORT_FUNC_STAT(sm_write_to_cache)
STATS_REPORT_FUNC_STAT(sm_query_submit)
// TileIO
STATS_REPORT_FUNC_STAT(tileio_is_generic_tile)
STATS_REPORT_FUNC_STAT(tileio_read_generic)
STATS_REPORT_FUNC_STAT(tileio_write_generic)
// VFS
STATS_REPORT_FUNC_STAT(vfs_abs_path)
STATS_REPORT_FUNC_STAT(vfs_close_file)
STATS_REPORT_FUNC_STAT(vfs_constructor)
STATS_REPORT_FUNC_STAT(vfs_create_bucket)
STATS_REPORT_FUNC_STAT(vfs_create_dir)
STATS_REPORT_FUNC_STAT(vfs_create_file)
STATS_REPORT_FUNC_STAT(vfs_dir_size)
STATS_REPORT_FUNC_STAT(vfs_empty_bucket)
STATS_REPORT_FUNC_STAT(vfs_file_size)
STATS_REPORT_FUNC_STAT(vfs_filelock_lock)
STATS_REPORT_FUNC_STAT(vfs_filelock_unlock)
STATS_REPORT_FUNC_STAT(vfs_init)
STATS_REPORT_FUNC_STAT(vfs_is_bucket)
STATS_REPORT_FUNC_STAT(vfs_is_dir)
STATS_REPORT_FUNC_STAT(vfs_is_empty_bucket)
STATS_REPORT_FUNC_STAT(vfs_is_file)
STATS_REPORT_FUNC_STAT(vfs_ls)
STATS_REPORT_FUNC_STAT(vfs_move_file)
STATS_REPORT_FUNC_STAT(vfs_move_dir)
STATS_REPORT_FUNC_STAT(vfs_open_file)
STATS_REPORT_FUNC_STAT(vfs_read)
STATS_REPORT_FUNC_STAT(vfs_read_all)
STATS_REPORT_FUNC_STAT(vfs_remove_bucket)
STATS_REPORT_FUNC_STAT(vfs_remove_file)
STATS_REPORT_FUNC_STAT(vfs_remove_dir)
STATS_REPORT_FUNC_STAT(vfs_supports_fs)
STATS_REPORT_FUNC_STAT(vfs_sync)
STATS_REPORT_FUNC_STAT(vfs_terminate)
STATS_REPORT_FUNC_STAT(vfs_write)
STATS_REPORT_FUNC_STAT(vfs_s3_fill_file_buffer)
STATS_REPORT_FUNC_STAT(vfs_s3_write_multipart)
// Serialization
STATS_REPORT_FUNC_STAT(serialization_array_schema_serialize)
STATS_REPORT_FUNC_STAT(serialization_array_schema_deserialize)
STATS_REPORT_FUNC_STAT(serialization_query_serialize)
STATS_REPORT_FUNC_STAT(serialization_query_deserialize)
// REST
STATS_REPORT_FUNC_STAT(rest_array_create)
STATS_REPORT_FUNC_STAT(rest_array_get_schema)
STATS_REPORT_FUNC_STAT(rest_query_submit)
STATS_REPORT_FUNC_STAT(rest_curl_get)
STATS_REPORT_FUNC_STAT(rest_curl_post)
STATS_REPORT_FUNC_STAT(rest_curl_delete)
#endif

#ifdef STATS_DEFINE_COUNTER_STAT
// Cache
STATS_DEFINE_COUNTER_STAT(cache_lru_inserts)
STATS_DEFINE_COUNTER_STAT(cache_lru_read_hits)
STATS_DEFINE_COUNTER_STAT(cache_lru_read_misses)
// Fragment Metadata
STATS_DEFINE_COUNTER_STAT(fragment_metadata_num_fragments)
STATS_DEFINE_COUNTER_STAT(fragment_metadata_bytes)
STATS_DEFINE_COUNTER_STAT(fragment_metadata_bytes_read)
STATS_DEFINE_COUNTER_STAT(fragment_metadata_cached_bytes_copied)
STATS_DEFINE_COUNTER_STAT(fragment_metadata_cache_inserts)
STATS_DEFINE_COUNTER_STAT(fragment_metadata_cache_read_hits)
STATS_DEFINE_COUNTER_STAT(fragment_metadata_cache_read_misses)
// Reader
STATS_DEFINE_COUNTER_STAT(reader_attr_tile_cache_hits)
STATS_DEFINE_COUNTER_STAT(reader_num_attr_tiles_touched)
STATS_DEFINE_COUNTER_STAT(reader_num_bytes_after_unfiltering)
STATS_DEFINE_COUNTER_STAT(reader_num_fixed_cell_bytes_copied)
STATS_DEFINE_COUNTER_STAT(reader_num_fixed_cell_bytes_read)
STATS_DEFINE_COUNTER_STAT(reader_num_tile_bytes_read)
STATS_DEFINE_COUNTER_STAT(reader_num_var_cell_bytes_copied)
STATS_DEFINE_COUNTER_STAT(reader_num_var_cell_bytes_read)
// Writer
STATS_DEFINE_COUNTER_STAT(writer_num_attr_tiles_written)
STATS_DEFINE_COUNTER_STAT(writer_num_bytes_before_filtering)
STATS_DEFINE_COUNTER_STAT(writer_num_bytes_written)
// StorageManager
STATS_DEFINE_COUNTER_STAT(sm_contexts_created)
STATS_DEFINE_COUNTER_STAT(sm_query_submit_layout_col_major)
STATS_DEFINE_COUNTER_STAT(sm_query_submit_layout_row_major)
STATS_DEFINE_COUNTER_STAT(sm_query_submit_layout_global_order)
STATS_DEFINE_COUNTER_STAT(sm_query_submit_layout_unordered)
STATS_DEFINE_COUNTER_STAT(sm_query_submit_read)
STATS_DEFINE_COUNTER_STAT(sm_query_submit_write)
// TileIO
STATS_DEFINE_COUNTER_STAT(tileio_read_num_bytes_read)
STATS_DEFINE_COUNTER_STAT(tileio_read_num_resulting_bytes)
STATS_DEFINE_COUNTER_STAT(tileio_write_num_bytes_written)
STATS_DEFINE_COUNTER_STAT(tileio_write_num_input_bytes)
// VFS
STATS_DEFINE_COUNTER_STAT(vfs_read_total_bytes)
STATS_DEFINE_COUNTER_STAT(vfs_write_total_bytes)
STATS_DEFINE_COUNTER_STAT(vfs_read_num_parallelized)
STATS_DEFINE_COUNTER_STAT(vfs_read_all_total_regions)
STATS_DEFINE_COUNTER_STAT(vfs_posix_write_num_parallelized)
STATS_DEFINE_COUNTER_STAT(vfs_win32_write_num_parallelized)
STATS_DEFINE_COUNTER_STAT(vfs_s3_num_parts_written)
STATS_DEFINE_COUNTER_STAT(vfs_s3_write_num_parallelized)
#endif

#ifdef STATS_INIT_COUNTER_STAT
// Cache
STATS_INIT_COUNTER_STAT(cache_lru_inserts)
STATS_INIT_COUNTER_STAT(cache_lru_read_hits)
STATS_INIT_COUNTER_STAT(cache_lru_read_misses)
// Fragment Metadata
STATS_INIT_COUNTER_STAT(fragment_metadata_num_fragments)
STATS_INIT_COUNTER_STAT(fragment_metadata_bytes)
STATS_INIT_COUNTER_STAT(fragment_metadata_bytes_read)
STATS_INIT_COUNTER_STAT(fragment_metadata_cached_bytes_copied)
STATS_INIT_COUNTER_STAT(fragment_metadata_cache_inserts)
STATS_INIT_COUNTER_STAT(fragment_metadata_cache_read_hits)
STATS_INIT_COUNTER_STAT(fragment_metadata_cache_read_misses)
// Reader
STATS_INIT_COUNTER_STAT(reader_attr_tile_cache_hits)
STATS_INIT_COUNTER_STAT(reader_num_attr_tiles_touched)
STATS_INIT_COUNTER_STAT(reader_num_bytes_after_unfiltering)
STATS_INIT_COUNTER_STAT(reader_num_fixed_cell_bytes_copied)
STATS_INIT_COUNTER_STAT(reader_num_fixed_cell_bytes_read)
STATS_INIT_COUNTER_STAT(reader_num_tile_bytes_read)
STATS_INIT_COUNTER_STAT(reader_num_var_cell_bytes_copied)
STATS_INIT_COUNTER_STAT(reader_num_var_cell_bytes_read)
// Writer
STATS_INIT_COUNTER_STAT(writer_num_attr_tiles_written)
STATS_INIT_COUNTER_STAT(writer_num_bytes_before_filtering)
STATS_INIT_COUNTER_STAT(writer_num_bytes_written)
// StorageManager
STATS_INIT_COUNTER_STAT(sm_contexts_created)
STATS_INIT_COUNTER_STAT(sm_query_submit_layout_col_major)
STATS_INIT_COUNTER_STAT(sm_query_submit_layout_row_major)
STATS_INIT_COUNTER_STAT(sm_query_submit_layout_global_order)
STATS_INIT_COUNTER_STAT(sm_query_submit_layout_unordered)
STATS_INIT_COUNTER_STAT(sm_query_submit_read)
STATS_INIT_COUNTER_STAT(sm_query_submit_write)
// TileIO
STATS_INIT_COUNTER_STAT(tileio_read_num_bytes_read)
STATS_INIT_COUNTER_STAT(tileio_read_num_resulting_bytes)
STATS_INIT_COUNTER_STAT(tileio_write_num_bytes_written)
STATS_INIT_COUNTER_STAT(tileio_write_num_input_bytes)
// VFS
STATS_INIT_COUNTER_STAT(vfs_read_total_bytes)
STATS_INIT_COUNTER_STAT(vfs_write_total_bytes)
STATS_INIT_COUNTER_STAT(vfs_read_num_parallelized)
STATS_INIT_COUNTER_STAT(vfs_read_all_total_regions)
STATS_INIT_COUNTER_STAT(vfs_posix_write_num_parallelized)
STATS_INIT_COUNTER_STAT(vfs_win32_write_num_parallelized)
STATS_INIT_COUNTER_STAT(vfs_s3_num_parts_written)
STATS_INIT_COUNTER_STAT(vfs_s3_write_num_parallelized)
#endif

#ifdef STATS_REPORT_COUNTER_STAT
// Cache
STATS_REPORT_COUNTER_STAT(cache_lru_inserts)
STATS_REPORT_COUNTER_STAT(cache_lru_read_hits)
STATS_REPORT_COUNTER_STAT(cache_lru_read_misses)
// Fragment Metadata
STATS_REPORT_COUNTER_STAT(fragment_metadata_num_fragments)
STATS_REPORT_COUNTER_STAT(fragment_metadata_bytes)
STATS_REPORT_COUNTER_STAT(fragment_metadata_bytes_read)
STATS_REPORT_COUNTER_STAT(fragment_metadata_cached_bytes_copied)
STATS_REPORT_COUNTER_STAT(fragment_metadata_cache_inserts)
STATS_REPORT_COUNTER_STAT(fragment_metadata_cache_read_hits)
STATS_REPORT_COUNTER_STAT(fragment_metadata_cache_read_misses)
// Reader
STATS_REPORT_COUNTER_STAT(reader_attr_tile_cache_hits)
STATS_REPORT_COUNTER_STAT(reader_num_attr_tiles_touched)
STATS_REPORT_COUNTER_STAT(reader_num_bytes_after_unfiltering)
STATS_REPORT_COUNTER_STAT(reader_num_fixed_cell_bytes_copied)
STATS_REPORT_COUNTER_STAT(reader_num_fixed_cell_bytes_read)
STATS_REPORT_COUNTER_STAT(reader_num_tile_bytes_read)
STATS_REPORT_COUNTER_STAT(reader_num_var_cell_bytes_copied)
STATS_REPORT_COUNTER_STAT(reader_num_var_cell_bytes_read)
// Writer
STATS_REPORT_COUNTER_STAT(writer_num_attr_tiles_written)
STATS_REPORT_COUNTER_STAT(writer_num_bytes_before_filtering)
STATS_REPORT_COUNTER_STAT(writer_num_bytes_written)
// StorageManager
STATS_REPORT_COUNTER_STAT(sm_contexts_created)
STATS_REPORT_COUNTER_STAT(sm_query_submit_layout_col_major)
STATS_REPORT_COUNTER_STAT(sm_query_submit_layout_row_major)
STATS_REPORT_COUNTER_STAT(sm_query_submit_layout_global_order)
STATS_REPORT_COUNTER_STAT(sm_query_submit_layout_unordered)
STATS_REPORT_COUNTER_STAT(sm_query_submit_read)
STATS_REPORT_COUNTER_STAT(sm_query_submit_write)
// TileIO
STATS_REPORT_COUNTER_STAT(tileio_read_num_bytes_read)
STATS_REPORT_COUNTER_STAT(tileio_read_num_resulting_bytes)
STATS_REPORT_COUNTER_STAT(tileio_write_num_bytes_written)
STATS_REPORT_COUNTER_STAT(tileio_write_num_input_bytes)
// VFS
STATS_REPORT_COUNTER_STAT(vfs_read_total_bytes)
STATS_REPORT_COUNTER_STAT(vfs_write_total_bytes)
STATS_REPORT_COUNTER_STAT(vfs_read_num_parallelized)
STATS_REPORT_COUNTER_STAT(vfs_read_all_total_regions)
STATS_REPORT_COUNTER_STAT(vfs_posix_write_num_parallelized)
STATS_REPORT_COUNTER_STAT(vfs_win32_write_num_parallelized)
STATS_REPORT_COUNTER_STAT(vfs_s3_num_parts_written)
STATS_REPORT_COUNTER_STAT(vfs_s3_write_num_parallelized)
#endif
