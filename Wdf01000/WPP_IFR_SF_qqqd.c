/*
 * XREFs of WPP_IFR_SF_qqqD @ 0x1C001E080
 * Callers:
 *     ?StageTransfer@FxDmaPacketTransaction@@UEAAJXZ @ 0x1C001CDA0 (-StageTransfer@FxDmaPacketTransaction@@UEAAJXZ.c)
 *     ?_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA_COMPLETION_STATUS@@@Z @ 0x1C001F160 (-_SystemDmaCompletion@FxDmaSystemTransaction@@KAXPEAU_DMA_ADAPTER@@PEAU_DEVICE_OBJECT@@PEAXW4DMA.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqqD(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int traceGuid,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *_a3,
        const void *_a4,
        const void *globals_0,
        unsigned int level)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      _a2,
      _a1,
      &_a3,
      8LL,
      &_a4,
      8LL,
      &globals_0,
      8LL,
      &level,
      4LL,
      0LL);
  FxIFR(globals, 5u, 0xFu, _a2, _a1, &_a3, 8LL, &_a4, 8LL, &globals_0, 8LL, &level, 4LL, 0LL);
}
