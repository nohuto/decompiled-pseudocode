/*
 * XREFs of WPP_IFR_SF_dDqq @ 0x1C0076BFC
 * Callers:
 *     ?CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z @ 0x1C0071EBC (-CommitUsageNotification@FxPkgPnp@@IEAAXW4_DEVICE_USAGE_NOTIFICATION_TYPE@@K@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_dDqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        int globals_0,
        unsigned int level,
        const void *flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      (_GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      0x47u,
      &globals_0,
      4LL,
      &level,
      4LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  FxIFR(
    globals,
    5u,
    0xCu,
    (_GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
    0x47u,
    &globals_0,
    4LL,
    &level,
    4LL,
    &flags,
    8LL,
    &id,
    8LL,
    0LL);
}
