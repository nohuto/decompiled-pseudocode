void __fastcall WPP_IFR_SF_qqdid(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const void *_a4,
        const void *globals_0,
        int level,
        __int64 flags)
{
  int _a5[4]; // [rsp+80h] [rbp-18h] BYREF

  _a5[0] = -1071644150;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
      _a2,
      &_a4,
      8LL,
      &globals_0,
      8LL,
      &level,
      4LL,
      &flags,
      8LL,
      _a5,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0xFu,
    WPP_FxDmaTransactionScatterGather_cpp_Traceguids,
    _a2,
    &_a4,
    8LL,
    &globals_0,
    8LL,
    &level,
    4LL,
    &flags,
    8LL,
    _a5,
    4LL,
    0LL);
}
