void __fastcall WPP_IFR_SF_ddi(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a3,
        unsigned int a3,
        unsigned __int16 level,
        const _GUID *flags,
        int id,
        int traceGuid,
        __int64 _a1)
{
  int _a2; // [rsp+60h] [rbp-18h] BYREF
  int _a1a; // [rsp+68h] [rbp-10h] BYREF

  _a2 = 16;
  _a1a = 64;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x200) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_wdfpool_cpp_Traceguids,
      0xCu,
      &_a1a,
      4LL,
      &_a2,
      4LL,
      &_a1,
      8LL,
      0LL);
  FxIFR(globals, 2u, 0xAu, WPP_wdfpool_cpp_Traceguids, 0xCu, &_a1a, 4LL, &_a2, 4LL, &_a1, 8LL, 0LL);
}
