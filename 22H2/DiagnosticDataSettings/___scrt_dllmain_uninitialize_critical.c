/*
 * XREFs of ___scrt_dllmain_uninitialize_critical @ 0x10004498
 * Callers:
 *     dllmain_crt_process_detach @ 0x1000408C (dllmain_crt_process_detach.c)
 * Callees:
 *     ___scrt_stub_for_acrt_initialize @ 0x10004C47 (___scrt_stub_for_acrt_initialize.c)
 */

int __cdecl __scrt_dllmain_uninitialize_critical(int a1)
{
  __scrt_stub_for_acrt_initialize(0);
  return __scrt_stub_for_acrt_initialize(a1);
}
