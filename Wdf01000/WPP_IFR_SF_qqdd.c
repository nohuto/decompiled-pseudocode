/*
 * XREFs of WPP_IFR_SF_qqDD @ 0x1C004740C
 * Callers:
 *     ?DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z @ 0x1C00469D4 (-DumpDetails@FxVerifierLock@@SAXPEAV1@PEAU_KTHREAD@@0@Z.c)
 *     ?ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C0085160 (-ConfigureFileObjectClass@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqDD(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 traceGuid,
        const _GUID *_a1,
        const void *_a2,
        const void *_a3,
        unsigned int _a4,
        unsigned int globals_0)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      _a1,
      traceGuid,
      &_a2,
      8LL,
      &_a3,
      8LL,
      &_a4,
      4LL,
      &globals_0,
      4LL,
      0LL);
  FxIFR(globals, level, 0x12u, _a1, traceGuid, &_a2, 8LL, &_a3, 8LL, &_a4, 4LL, &globals_0, 4LL, 0LL);
}
