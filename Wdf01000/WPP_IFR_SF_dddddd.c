void __fastcall WPP_IFR_SF_dddddd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        int _a5,
        int globals_0,
        int level,
        int flags,
        int id)
{
  _DWORD v11[4]; // [rsp+98h] [rbp+Fh] BYREF

  v11[0] = -1073741670;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxUsbInterface_cpp_Traceguids,
      0xAu,
      &_a5,
      4LL,
      &globals_0,
      4LL,
      &level,
      4LL,
      &flags,
      4LL,
      &id,
      4LL,
      v11,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xEu,
    WPP_FxUsbInterface_cpp_Traceguids,
    0xAu,
    &_a5,
    4LL,
    &globals_0,
    4LL,
    &level,
    4LL,
    &flags,
    4LL,
    &id,
    4LL,
    v11,
    4LL,
    0LL);
}
