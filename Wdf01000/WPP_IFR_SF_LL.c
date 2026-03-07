void __fastcall WPP_IFR_SF_LL(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        unsigned int flags,
        unsigned int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 3u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      (_GUID *)&WPP_FxPkgPnp_cpp_Traceguids,
      0x58u,
      &flags,
      4LL,
      &id,
      4LL,
      0LL);
  FxIFR(globals, 3u, 0xCu, (_GUID *)&WPP_FxPkgPnp_cpp_Traceguids, 0x58u, &flags, 4LL, &id, 4LL, 0LL);
}
