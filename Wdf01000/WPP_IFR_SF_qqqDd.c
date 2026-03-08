/*
 * XREFs of WPP_IFR_SF_qqqdD @ 0x1C005835C
 * Callers:
 *     imp_WdfUsbTargetDeviceFormatRequestForString @ 0x1C00589D0 (imp_WdfUsbTargetDeviceFormatRequestForString.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqqdD(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        const void *globals_0,
        const void *level,
        int flags,
        unsigned int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxUsbDeviceAPI_cpp_Traceguids,
      0xCu,
      &_a5,
      8LL,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      4LL,
      &id,
      4LL,
      0LL);
  FxIFR(
    globals,
    5u,
    0xEu,
    WPP_FxUsbDeviceAPI_cpp_Traceguids,
    0xCu,
    &_a5,
    8LL,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    4LL,
    &id,
    4LL,
    0LL);
}
