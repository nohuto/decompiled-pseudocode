void __fastcall WPP_IFR_SF_qqcLq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        const void *globals_0,
        char level,
        unsigned int flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      (_GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      0x11u,
      &_a5,
      8LL,
      &globals_0,
      8LL,
      &level,
      1LL,
      &flags,
      4LL,
      &id,
      8LL,
      0LL);
  FxIFR(
    globals,
    4u,
    0xCu,
    (_GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
    0x11u,
    &_a5,
    8LL,
    &globals_0,
    8LL,
    &level,
    1LL,
    &flags,
    4LL,
    &id,
    8LL,
    0LL);
}
