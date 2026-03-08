/*
 * XREFs of WPP_IFR_SF_qi @ 0x1C001C060
 * Callers:
 *     ?AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z @ 0x1C001AD04 (-AllocateCommonBuffer@FxDmaEnabler@@QEAAX_KPEAPEAXPEAT_LARGE_INTEGER@@@Z.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C0020304 (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qi(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int traceGuid,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *globals_0,
        __int64 level)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      _a2,
      _a1,
      &globals_0,
      8LL,
      &level,
      8LL,
      0LL);
  FxIFR(globals, 2u, 0xFu, _a2, _a1, &globals_0, 8LL, &level, 8LL, 0LL);
}
