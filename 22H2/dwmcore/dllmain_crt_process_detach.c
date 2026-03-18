/*
 * XREFs of dllmain_crt_process_detach @ 0x18010F650
 * Callers:
 *     dllmain_crt_dispatch @ 0x18010F4D0 (dllmain_crt_dispatch.c)
 * Callees:
 *     __scrt_acquire_startup_lock @ 0x18010F0D0 (__scrt_acquire_startup_lock.c)
 *     __scrt_dllmain_uninitialize_c @ 0x18010F224 (__scrt_dllmain_uninitialize_c.c)
 *     __scrt_dllmain_uninitialize_critical @ 0x18010F25C (__scrt_dllmain_uninitialize_critical.c)
 *     __scrt_release_startup_lock @ 0x18010F3FC (__scrt_release_startup_lock.c)
 *     __scrt_uninitialize_crt @ 0x18010F428 (__scrt_uninitialize_crt.c)
 *     __scrt_fastfail @ 0x18010FD44 (__scrt_fastfail.c)
 *     ?__scrt_uninitialize_type_info@@YAXXZ @ 0x18010FF74 (-__scrt_uninitialize_type_info@@YAXXZ.c)
 *     _RTC_Terminate @ 0x180110008 (_RTC_Terminate.c)
 */

_BOOL8 __fastcall dllmain_crt_process_detach(char a1)
{
  char v3; // bl
  __int64 v4; // rcx
  BOOL v5; // ebx

  if ( dword_1803E5684 <= 0 )
    return 0LL;
  --dword_1803E5684;
  v3 = _scrt_acquire_startup_lock();
  if ( _scrt_current_native_startup_state != 2 )
  {
    _scrt_fastfail(7LL);
    __debugbreak();
    JUMPOUT(0x18010F6D4LL);
  }
  _scrt_dllmain_uninitialize_c();
  __scrt_uninitialize_type_info();
  RTC_Terminate();
  _scrt_current_native_startup_state = 0;
  _scrt_release_startup_lock(v3);
  LOBYTE(v4) = a1;
  v5 = _scrt_uninitialize_crt(v4, 0) != 0;
  _scrt_dllmain_uninitialize_critical();
  return v5;
}
