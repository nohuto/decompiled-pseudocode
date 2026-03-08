/*
 * XREFs of WPP_IFR_SF_qqcDq @ 0x1C0031830
 * Callers:
 *     ?Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z @ 0x1C0004270 (-Dispatch@FxPkgIo@@UEAAJPEAU_IRP@@@Z.c)
 *     Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue @ 0x1C00B9D10 (Vf_VerifyWdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqcDq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int traceGuid,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *_a3,
        const void *_a4,
        char _a5,
        unsigned int globals_0,
        const void *level)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      _a2,
      _a1,
      &_a3,
      8LL,
      &_a4,
      8LL,
      &_a5,
      1LL,
      &globals_0,
      4LL,
      &level,
      8LL,
      0LL);
  FxIFR(globals, 5u, 0xDu, _a2, _a1, &_a3, 8LL, &_a4, 8LL, &_a5, 1LL, &globals_0, 4LL, &level, 8LL, 0LL);
}
