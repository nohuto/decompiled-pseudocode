/*
 * XREFs of __scrt_dllmain_uninitialize_c @ 0x18010E6E4
 * Callers:
 *     dllmain_crt_process_detach @ 0x18010EB10 (dllmain_crt_process_detach.c)
 * Callees:
 *     __scrt_is_ucrt_dll_in_use @ 0x18010F1E0 (__scrt_is_ucrt_dll_in_use.c)
 *     _cexit_0 @ 0x18010F56A (_cexit_0.c)
 *     __scrt_stub_for_is_c_termination_complete @ 0x180110888 (__scrt_stub_for_is_c_termination_complete.c)
 */

void _scrt_dllmain_uninitialize_c()
{
  if ( (unsigned int)_scrt_is_ucrt_dll_in_use() )
  {
    execute_onexit_table_0(&Table);
  }
  else if ( !(unsigned int)_scrt_stub_for_is_c_termination_complete() )
  {
    cexit_0();
  }
}
