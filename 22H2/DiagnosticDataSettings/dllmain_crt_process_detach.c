/*
 * XREFs of dllmain_crt_process_detach @ 0x1000408C
 * Callers:
 *     dllmain_crt_dispatch @ 0x10003F30 (dllmain_crt_dispatch.c)
 * Callees:
 *     dllmain_crt_process_detach @ 0x1000408C (dllmain_crt_process_detach.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x10004337 (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     ___scrt_acquire_startup_lock @ 0x100043A6 (___scrt_acquire_startup_lock.c)
 *     ___scrt_dllmain_uninitialize_c @ 0x10004475 (___scrt_dllmain_uninitialize_c.c)
 *     ___scrt_dllmain_uninitialize_critical @ 0x10004498 (___scrt_dllmain_uninitialize_critical.c)
 *     ___scrt_release_startup_lock @ 0x10004612 (___scrt_release_startup_lock.c)
 *     ___scrt_uninitialize_crt @ 0x10004631 (___scrt_uninitialize_crt.c)
 *     ___scrt_fastfail @ 0x10004661 (___scrt_fastfail.c)
 *     __RTC_Terminate @ 0x100047B4 (__RTC_Terminate.c)
 *     __SEH_prolog4 @ 0x100047F0 (__SEH_prolog4.c)
 */

BOOL __cdecl dllmain_crt_process_detach(int a1)
{
  int v2; // [esp+0h] [ebp-2Ch]
  int v3; // [esp+4h] [ebp-28h]
  int v4; // [esp+8h] [ebp-24h]
  int v5; // [esp+Ch] [ebp-20h]
  int v6; // [esp+10h] [ebp-1Ch]
  char v7; // [esp+10h] [ebp-1Ch]
  int ms_exc; // [esp+14h] [ebp-18h]
  int ms_exc_4; // [esp+18h] [ebp-14h]
  int ms_exc_8; // [esp+1Ch] [ebp-10h]
  int ms_exc_12; // [esp+20h] [ebp-Ch]
  int ms_exc_16; // [esp+24h] [ebp-8h]

  if ( dword_10005090 <= 0 )
    return 0;
  --dword_10005090;
  LOBYTE(v6) = __scrt_acquire_startup_lock();
  if ( __scrt_current_native_startup_state != 2 )
  {
    __scrt_fastfail(7);
    __debugbreak();
  }
  __scrt_dllmain_uninitialize_c();
  __scrt_uninitialize_type_info();
  _RTC_Terminate();
  __scrt_current_native_startup_state = 0;
  __scrt_dllmain_uninitialize_critical(
    268452062,
    v2,
    v3,
    v4,
    v5,
    v6,
    ms_exc,
    ms_exc_4,
    ms_exc_8,
    ms_exc_12,
    ms_exc_16,
    -2);
  __scrt_release_startup_lock(v7);
  return (unsigned __int8)__scrt_uninitialize_crt(a1, 0) != 0;
}
