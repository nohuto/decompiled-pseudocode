void __fastcall WPP_IFR_SF_qdqqqqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        int _a6,
        const void *globals_0,
        const void *level,
        const void *flags,
        const void *id)
{
  _DWORD v12[4]; // [rsp+A8h] [rbp+7h] BYREF

  v12[0] = -1073741811;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxWmiInstance_cpp_Traceguids,
      0xBu,
      &_a5,
      8LL,
      &_a6,
      4LL,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      8LL,
      &id,
      8LL,
      v12,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0x12u,
    WPP_FxWmiInstance_cpp_Traceguids,
    0xBu,
    &_a5,
    8LL,
    &_a6,
    4LL,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    8LL,
    &id,
    8LL,
    v12,
    4LL,
    0LL);
}
