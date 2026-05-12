/*
 * XREFs of WPP_SF_dddd @ 0x1C003D894
 * Callers:
 *     StorPortDeviceBusy @ 0x1C0039180 (StorPortDeviceBusy.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020250 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_dddd(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_8537d3e98fbc352c94324671ced0aca0_Traceguids);
}
