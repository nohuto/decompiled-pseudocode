/*
 * XREFs of WPP_IFR_SF_iiddiidd @ 0x1C00459D4
 * Callers:
 *     ?FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z @ 0x1C0045588 (-FxPoolDump@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_iiddiidd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        __int64 _a5,
        __int64 _a6,
        int _a7,
        int _a8,
        __int64 globals_0,
        __int64 level,
        int flags,
        int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_wdfpool_cpp_Traceguids,
      0xEu,
      &_a5,
      8LL,
      &_a6,
      8LL,
      &_a7,
      4LL,
      &_a8,
      4LL,
      &globals_0,
      8LL,
      &level,
      8LL,
      &flags,
      4LL,
      &id,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0x12u,
    WPP_wdfpool_cpp_Traceguids,
    0xEu,
    &_a5,
    8LL,
    &_a6,
    8LL,
    &_a7,
    4LL,
    &_a8,
    4LL,
    &globals_0,
    8LL,
    &level,
    8LL,
    &flags,
    4LL,
    &id,
    4LL,
    0LL);
}
