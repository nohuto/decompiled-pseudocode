/*
 * XREFs of WPP_IFR_SF_Dqq @ 0x1C003B200
 * Callers:
 *     ?GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z @ 0x1C000770C (-GetMemoryObject@FxRequest@@QEAAJPEAPEAVIFxMemory@@PEAPEAXPEA_K@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_Dqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        unsigned int level,
        const void *flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x8000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxRequest_cpp_Traceguids,
      0x1Eu,
      &level,
      4LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  FxIFR(globals, 2u, 0x10u, WPP_FxRequest_cpp_Traceguids, 0x1Eu, &level, 4LL, &flags, 8LL, &id, 8LL, 0LL);
}
