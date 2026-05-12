/*
 * XREFs of WPP_SF_qdd @ 0x1C0033718
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000B910 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_c14902a3c76b3c1f0b09f862a5aedd9e_Traceguids);
}
