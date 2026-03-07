void __fastcall WPP_IFR_SF_ddiid(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        int _a4,
        int _a5,
        __int64 globals_0,
        __int64 level,
        int flags)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_usbutil_cpp_Traceguids,
      _a2,
      &_a4,
      4LL,
      &_a5,
      4LL,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xEu,
    WPP_usbutil_cpp_Traceguids,
    _a2,
    &_a4,
    4LL,
    &_a5,
    4LL,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    4LL,
    0LL);
}
