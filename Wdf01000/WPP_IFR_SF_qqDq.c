void __fastcall WPP_IFR_SF_qqdq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int traceGuid,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *_a3,
        const void *_a4,
        int globals_0,
        const void *level)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      _a2,
      _a1,
      &_a3,
      8LL,
      &_a4,
      8LL,
      &globals_0,
      4LL,
      &level,
      8LL,
      0LL);
  FxIFR(globals, 4u, 0xCu, _a2, _a1, &_a3, 8LL, &_a4, 8LL, &globals_0, 4LL, &level, 8LL, 0LL);
}
