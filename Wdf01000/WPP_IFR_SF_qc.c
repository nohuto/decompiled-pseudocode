void WPP_IFR_SF_qc(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        const void *flags,
        ...)
{
  va_list va; // [rsp+90h] [rbp+38h] BYREF

  va_start(va, flags);
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x4000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      0x2Bu,
      WPP_FxDmaTransactionBase_cpp_Traceguids,
      0x1Bu,
      &flags,
      8LL,
      va,
      1LL,
      0LL);
  FxIFR(globals, 5u, 0xFu, WPP_FxDmaTransactionBase_cpp_Traceguids, 0x1Bu, &flags, 8LL, va, 1LL, 0LL);
}
