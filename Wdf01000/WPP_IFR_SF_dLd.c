/*
 * XREFs of WPP_IFR_SF_dLd @ 0x1C001BD28
 * Callers:
 *     ?Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z @ 0x1C001B2B0 (-Initialize@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_ENABLER_CONFIG@@PEAVFxDeviceBase@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_dLd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *globals_0,
        int level,
        unsigned int flags)
{
  int _a3[4]; // [rsp+60h] [rbp-18h] BYREF

  _a3[0] = -1073741811;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxDmaEnabler_cpp_Traceguids,
      _a2,
      &level,
      4LL,
      &flags,
      4LL,
      _a3,
      4LL,
      0LL);
  FxIFR(globals, 2u, 0xFu, WPP_FxDmaEnabler_cpp_Traceguids, _a2, &level, 4LL, &flags, 4LL, _a3, 4LL, 0LL);
}
