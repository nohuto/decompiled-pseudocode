/*
 * XREFs of ___scrt_is_ucrt_dll_in_use @ 0x10004B7E
 * Callers:
 *     ___scrt_acquire_startup_lock @ 0x100043A6 (___scrt_acquire_startup_lock.c)
 *     ___scrt_dllmain_after_initialize_c @ 0x100043DA (___scrt_dllmain_after_initialize_c.c)
 *     ___scrt_dllmain_exception_filter @ 0x1000443F (___scrt_dllmain_exception_filter.c)
 *     ___scrt_dllmain_uninitialize_c @ 0x10004475 (___scrt_dllmain_uninitialize_c.c)
 *     ___scrt_initialize_onexit_tables @ 0x100044E0 (___scrt_initialize_onexit_tables.c)
 *     ___scrt_release_startup_lock @ 0x10004612 (___scrt_release_startup_lock.c)
 * Callees:
 *     <none>
 */

BOOL __scrt_is_ucrt_dll_in_use()
{
  return __scrt_ucrt_dll_is_in_use != 0;
}
