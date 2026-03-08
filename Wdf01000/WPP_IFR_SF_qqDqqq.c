/*
 * XREFs of WPP_IFR_SF_qqDqqq @ 0x1C0050DAC
 * Callers:
 *     imp_WdfIoTargetFormatRequestForInternalIoctlOthers @ 0x1C0051260 (imp_WdfIoTargetFormatRequestForInternalIoctlOthers.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0051A00 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqDqqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const void *_a4,
        const void *_a5,
        unsigned int _a6,
        const void *globals_0,
        const void *level,
        const void *flags)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxIoTargetAPI_cpp_Traceguids,
      _a2,
      &_a4,
      8LL,
      &_a5,
      8LL,
      &_a6,
      4LL,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      8LL,
      0LL);
  FxIFR(
    globals,
    5u,
    0xEu,
    WPP_FxIoTargetAPI_cpp_Traceguids,
    _a2,
    &_a4,
    8LL,
    &_a5,
    8LL,
    &_a6,
    4LL,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    8LL,
    0LL);
}
