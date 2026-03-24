/*
 * XREFs of DefaultOverflowHandler @ 0x1404BE680
 * Callers:
 *     HalpTimerProfileInterrupt @ 0x1404D48D0 (HalpTimerProfileInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     KeProfileInterruptWithSource @ 0x14051BAC0 (KeProfileInterruptWithSource.c)
 */

__int64 __fastcall DefaultOverflowHandler(__int64 a1)
{
  if ( HalpTimerProfilingCallback )
    return HalpTimerProfilingCallback();
  else
    return KeProfileInterruptWithSource(a1, 0LL);
}
