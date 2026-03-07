void __fastcall WPP_IFR_SF_DDD(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        unsigned int level,
        unsigned int flags,
        unsigned int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x80000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxObject_cpp_Traceguids,
      0x10u,
      &level,
      4LL,
      &flags,
      4LL,
      &id,
      4LL,
      0LL);
  FxIFR(globals, 2u, 0x14u, WPP_FxObject_cpp_Traceguids, 0x10u, &level, 4LL, &flags, 4LL, &id, 4LL, 0LL);
}
