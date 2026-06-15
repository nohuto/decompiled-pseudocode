/*
 * XREFs of _RTC_Initialize @ 0x14001DB00
 * Callers:
 *     pre_c_initialization @ 0x14001CD50 (pre_c_initialization.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x140029D80 (_guard_dispatch_icall_nop.c)
 */

void __cdecl RTC_Initialize()
{
  void (**i)(void); // rbx

  for ( i = &_rtc_izz; i < &_rtc_izz; ++i )
  {
    if ( *i )
      (*i)();
  }
}
