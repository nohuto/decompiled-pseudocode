/*
 * XREFs of ___scrt_dllmain_crt_thread_detach @ 0x10004432
 * Callers:
 *     dllmain_crt_dispatch @ 0x10003F30 (dllmain_crt_dispatch.c)
 * Callees:
 *     ___scrt_stub_for_acrt_initialize @ 0x10004C47 (___scrt_stub_for_acrt_initialize.c)
 */

char __scrt_dllmain_crt_thread_detach()
{
  __scrt_stub_for_acrt_initialize();
  __scrt_stub_for_acrt_initialize();
  return 1;
}
