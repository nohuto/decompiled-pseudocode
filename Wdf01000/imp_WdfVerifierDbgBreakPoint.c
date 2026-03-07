void __fastcall imp_WdfVerifierDbgBreakPoint(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4)
{
  _FX_DRIVER_GLOBALS *v4; // rbx
  const _GUID *v5; // [rsp+20h] [rbp-28h]

  v4 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  WPP_IFR_SF_sl(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (_BYTE)DriverGlobals + 16,
    a3,
    a4,
    v5,
    DriverGlobals->DriverName,
    (unsigned __int8)DriverGlobals[-3].DriverName[30]);
  FxVerifierDbgBreakPoint(v4);
}
