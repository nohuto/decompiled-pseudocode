/*
 * XREFs of WPP_IFR_SF_qqDqq @ 0x1C003B568
 * Callers:
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0003A80 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qqDqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        const void *globals_0,
        unsigned int level,
        const void *flags,
        const void *id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x8000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxRequest_cpp_Traceguids,
      0x14u,
      &_a5,
      8LL,
      &globals_0,
      8LL,
      &level,
      4LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  FxIFR(
    globals,
    1u,
    0x10u,
    WPP_FxRequest_cpp_Traceguids,
    0x14u,
    &_a5,
    8LL,
    &globals_0,
    8LL,
    &level,
    4LL,
    &flags,
    8LL,
    &id,
    8LL,
    0LL);
}
