void __fastcall WPP_IFR_SF_qLqdi(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        unsigned int globals_0,
        const void *level,
        int flags,
        __int64 id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxDmaEnabler_cpp_Traceguids,
      0x16u,
      &_a5,
      8LL,
      &globals_0,
      4LL,
      &level,
      8LL,
      &flags,
      4LL,
      &id,
      8LL,
      0LL);
  FxIFR(
    globals,
    5u,
    0xFu,
    WPP_FxDmaEnabler_cpp_Traceguids,
    0x16u,
    &_a5,
    8LL,
    &globals_0,
    4LL,
    &level,
    8LL,
    &flags,
    4LL,
    &id,
    8LL,
    0LL);
}
