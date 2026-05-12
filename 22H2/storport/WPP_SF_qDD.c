/*
 * XREFs of WPP_SF_qdd @ 0x1C00336F8
 * Callers:
 *     RaidpAdapterTimerDpcRoutine @ 0x1C000B8A0 (RaidpAdapterTimerDpcRoutine.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_1af4e391bf1d3e2526011607efd76594_Traceguids);
}
