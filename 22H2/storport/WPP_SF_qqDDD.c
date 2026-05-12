/*
 * XREFs of WPP_SF_qqDDD @ 0x1C004C518
 * Callers:
 *     RaidUnitHandleSpecialErrorConditions @ 0x1C0007250 (RaidUnitHandleSpecialErrorConditions.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqDDD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_c0fbeaa32f6432859fb1821fd44520a7_Traceguids);
}
