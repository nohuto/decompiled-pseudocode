void __fastcall WPP_IFR_SF_qqqi(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const void *_a4,
        const void *globals_0,
        const void *level,
        __int64 flags)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x8000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxRequest_cpp_Traceguids,
      _a2,
      &_a4,
      8LL,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      8LL,
      0LL);
  FxIFR(
    globals,
    1u,
    0x10u,
    WPP_FxRequest_cpp_Traceguids,
    _a2,
    &_a4,
    8LL,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    8LL,
    0LL);
}
