/*
 * XREFs of WPP_IFR_SF_qPPd @ 0x1C002009C
 * Callers:
 *     ?DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z @ 0x1C001F684 (-DmaCompleted@FxDmaTransactionBase@@QEAAE_KPEAJW4FxDmaCompletionType@@@Z.c)
 *     ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x1C001FAE0 (-PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qPPd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const void *globals_0,
        unsigned __int64 level,
        unsigned __int64 flags)
{
  int _a4[4]; // [rsp+70h] [rbp-18h] BYREF

  _a4[0] = -1071644141;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxDmaTransactionBase_cpp_Traceguids,
      _a2,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      8LL,
      _a4,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xFu,
    WPP_FxDmaTransactionBase_cpp_Traceguids,
    _a2,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    8LL,
    _a4,
    4LL,
    0LL);
}
