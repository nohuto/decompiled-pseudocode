void __fastcall WPP_IFR_SF_qld(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int traceGuid,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *_a3,
        int globals_0,
        int level)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      _a2,
      _a1,
      &_a3,
      8LL,
      &globals_0,
      4LL,
      &level,
      4LL,
      0LL);
  FxIFR(globals, 2u, 0xFu, _a2, _a1, &_a3, 8LL, &globals_0, 4LL, &level, 4LL, 0LL);
}
