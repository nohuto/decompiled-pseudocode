/*
 * XREFs of WPP_IFR_SF_qLLd @ 0x1C001BE14
 * Callers:
 *     ?ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECTION@@@Z @ 0x1C001AF70 (-ConfigureSystemAdapter@FxDmaEnabler@@QEAAJPEAU_WDF_DMA_SYSTEM_PROFILE_CONFIG@@W4_WDF_DMA_DIRECT.c)
 *     ?PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ @ 0x1C001FAE0 (-PrepareForSingleTransfer@FxDmaTransactionBase@@AEAAJXZ.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qLLd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const void *_a2,
        unsigned int _a3,
        unsigned int _a4,
        int globals_0)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      _a1,
      traceGuid,
      &_a2,
      8LL,
      &_a3,
      4LL,
      &_a4,
      4LL,
      &globals_0,
      4LL,
      0LL);
  FxIFR(globals, level, 0xFu, _a1, traceGuid, &_a2, 8LL, &_a3, 4LL, &_a4, 4LL, &globals_0, 4LL, 0LL);
}
