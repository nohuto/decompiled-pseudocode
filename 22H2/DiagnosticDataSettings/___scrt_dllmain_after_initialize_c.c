/*
 * XREFs of ___scrt_dllmain_after_initialize_c @ 0x100043DA
 * Callers:
 *     dllmain_crt_process_attach @ 0x10003F85 (dllmain_crt_process_attach.c)
 * Callees:
 *     ___isa_available_init @ 0x100049DD (___isa_available_init.c)
 *     __get_startup_argv_mode @ 0x10004B7A (__get_startup_argv_mode.c)
 *     ___scrt_is_ucrt_dll_in_use @ 0x10004B7E (___scrt_is_ucrt_dll_in_use.c)
 *     __o__configure_narrow_argv @ 0x10004BA8 (__o__configure_narrow_argv.c)
 *     __o__initialize_narrow_environment @ 0x10004BB4 (__o__initialize_narrow_environment.c)
 */

char __scrt_dllmain_after_initialize_c()
{
  _crt_argv_mode startup_argv_mode; // eax

  if ( __scrt_is_ucrt_dll_in_use() )
  {
    __isa_available_init();
  }
  else
  {
    startup_argv_mode = _get_startup_argv_mode();
    if ( _o__configure_narrow_argv(startup_argv_mode) )
      return 0;
    _o__initialize_narrow_environment();
  }
  return 1;
}
