/*
 * XREFs of DefaultOverflowHandler @ 0x14050CA30
 * Callers:
 *     HalpTimerProfileInterrupt @ 0x14051EBC0 (HalpTimerProfileInterrupt.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 *     KeProfileInterruptWithSource @ 0x140573F30 (KeProfileInterruptWithSource.c)
 */

__int64 __fastcall DefaultOverflowHandler(__int64 a1)
{
  if ( HalpTimerProfilingCallback )
    return HalpTimerProfilingCallback();
  else
    return KeProfileInterruptWithSource(a1, 0LL);
}
