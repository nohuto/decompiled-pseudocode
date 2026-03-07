void __fastcall WPP_IFR_SF_Lq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        unsigned int flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 4u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxPkgIo_cpp_Traceguids,
      0x1Eu,
      &flags,
      4LL,
      &id,
      8LL,
      0LL);
  FxIFR(globals, 4u, 0xDu, WPP_FxPkgIo_cpp_Traceguids, 0x1Eu, &flags, 4LL, &id, 8LL, 0LL);
}
