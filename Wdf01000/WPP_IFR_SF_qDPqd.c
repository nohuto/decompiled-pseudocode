/*
 * XREFs of WPP_IFR_SF_qDPqd @ 0x1C001FF60
 * Callers:
 *     ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x1C001FAE0 (-PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qDPqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *globals_0,
        unsigned int level,
        unsigned __int64 flags,
        const void *id)
{
  int _a5[4]; // [rsp+80h] [rbp-18h] BYREF

  _a5[0] = -1073741670;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxDmaTransactionBase_cpp_Traceguids,
      0x13u,
      &globals_0,
      8LL,
      &level,
      4LL,
      &flags,
      8LL,
      &id,
      8LL,
      _a5,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xFu,
    WPP_FxDmaTransactionBase_cpp_Traceguids,
    0x13u,
    &globals_0,
    8LL,
    &level,
    4LL,
    &flags,
    8LL,
    &id,
    8LL,
    _a5,
    4LL,
    0LL);
}
