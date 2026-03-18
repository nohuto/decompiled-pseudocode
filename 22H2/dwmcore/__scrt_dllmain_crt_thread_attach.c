/*
 * XREFs of __scrt_dllmain_crt_thread_attach @ 0x18010F168
 * Callers:
 *     dllmain_crt_dispatch @ 0x18010F4D0 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_stub_for_acrt_thread_attach @ 0x1801113B0 (__scrt_stub_for_acrt_thread_attach.c)
 */

char _scrt_dllmain_crt_thread_attach()
{
  if ( !(unsigned __int8)_scrt_stub_for_acrt_thread_attach() )
    return 0;
  if ( !(unsigned __int8)_scrt_stub_for_acrt_thread_attach() )
  {
    _scrt_stub_for_acrt_thread_attach();
    return 0;
  }
  return 1;
}
