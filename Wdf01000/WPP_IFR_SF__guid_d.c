void __fastcall WPP_IFR_SF__guid_d(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        const _GUID *flags,
        int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxusbDeviceKm_cpp_Traceguids,
      0x1Au,
      flags,
      16LL,
      &id,
      4LL,
      0LL);
  FxIFR(globals, 2u, 0xEu, WPP_FxusbDeviceKm_cpp_Traceguids, 0x1Au, flags, 16LL, &id, 4LL, 0LL);
}
