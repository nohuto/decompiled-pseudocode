/*
 * XREFs of _RTC_Terminate @ 0x18003BE74
 * Callers:
 *     dllmain_crt_process_detach @ 0x18003B564 (dllmain_crt_process_detach.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

void __cdecl RTC_Terminate()
{
  void (**i)(void); // rbx

  for ( i = _rtc_tzz; i < _rtc_tzz; ++i )
  {
    if ( *i )
      (*i)();
  }
}
