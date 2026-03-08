/*
 * XREFs of WPP_IFR_SF_qqcDqd @ 0x1C003196C
 * Callers:
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00B9D10 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqcDqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const void *_a4,
        const void *_a5,
        char globals_0,
        unsigned int level,
        const void *flags)
{
  _DWORD v12[4]; // [rsp+98h] [rbp+Fh] BYREF

  v12[0] = -1073741811;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDeviceApi_cpp_Traceguids,
      _a2,
      &_a4,
      8LL,
      &_a5,
      8LL,
      &globals_0,
      1LL,
      &level,
      4LL,
      &flags,
      8LL,
      v12,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xDu,
    WPP_FxDeviceApi_cpp_Traceguids,
    _a2,
    &_a4,
    8LL,
    &_a5,
    8LL,
    &globals_0,
    1LL,
    &level,
    4LL,
    &flags,
    8LL,
    v12,
    4LL,
    0LL);
}
