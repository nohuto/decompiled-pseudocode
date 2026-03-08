/*
 * XREFs of WPP_IFR_SF_qqDLd @ 0x1C00580BC
 * Callers:
 *     imp_WdfUsbTargetDeviceSelectConfig @ 0x1C0058FF0 (imp_WdfUsbTargetDeviceSelectConfig.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqDLd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *globals_0,
        const void *level,
        unsigned int flags,
        unsigned int id)
{
  int _a5[4]; // [rsp+80h] [rbp-18h] BYREF

  _a5[0] = -1073741811;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxUsbDeviceAPI_cpp_Traceguids,
      0x14u,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      4LL,
      &id,
      4LL,
      _a5,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xEu,
    WPP_FxUsbDeviceAPI_cpp_Traceguids,
    0x14u,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    4LL,
    &id,
    4LL,
    _a5,
    4LL,
    0LL);
}
