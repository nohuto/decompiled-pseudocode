/*
 * XREFs of WPP_SF_qqqD @ 0x1C00427B8
 * Callers:
 *     RaidPowerPassToMiniPort @ 0x1C0014B48 (RaidPowerPassToMiniPort.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0020190 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_SF_qqqD(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_e79642d899e13d0104d95ec0ec72addd_Traceguids);
}
