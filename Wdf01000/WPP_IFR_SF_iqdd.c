void __fastcall WPP_IFR_SF_iqdd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        __int64 level,
        const void *flags,
        int id)
{
  int _a4[4]; // [rsp+70h] [rbp-18h] BYREF

  _a4[0] = -1073741789;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxWmiInstance_cpp_Traceguids,
      0x10u,
      &level,
      8LL,
      &flags,
      8LL,
      &id,
      4LL,
      _a4,
      4LL,
      0LL);
  FxIFR(globals, 2u, 0x12u, WPP_FxWmiInstance_cpp_Traceguids, 0x10u, &level, 8LL, &flags, 8LL, &id, 4LL, _a4, 4LL, 0LL);
}
