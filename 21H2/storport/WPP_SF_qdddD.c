/*
 * XREFs of WPP_SF_qdddD @ 0x1C0033B2C
 * Callers:
 *     RaidBusEnumeratorIssueSynchronousRequest @ 0x1C0018098 (RaidBusEnumeratorIssueSynchronousRequest.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qdddD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_1d6032c9664a36275945883370c93be0_Traceguids);
}
