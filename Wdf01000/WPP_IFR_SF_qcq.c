void __fastcall WPP_IFR_SF_qcq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        const void *level,
        char flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 3u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxIoQueue_cpp_Traceguids,
      0x2Du,
      &level,
      8LL,
      &flags,
      1LL,
      &id,
      8LL,
      0LL);
  FxIFR(globals, 3u, 0xDu, WPP_FxIoQueue_cpp_Traceguids, 0x2Du, &level, 8LL, &flags, 1LL, &id, 8LL, 0LL);
}
