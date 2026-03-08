/*
 * XREFs of WPP_IFR_SF_qqqqi @ 0x1C00559EC
 * Callers:
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0054BC8 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqqqi(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        const void *globals_0,
        const void *level,
        const void *flags,
        __int64 id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxIoTargetRemote_cpp_Traceguids,
      0x1Cu,
      &_a5,
      8LL,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  FxIFR(
    globals,
    5u,
    0xEu,
    WPP_FxIoTargetRemote_cpp_Traceguids,
    0x1Cu,
    &_a5,
    8LL,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    8LL,
    &id,
    8LL,
    0LL);
}
