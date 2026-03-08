/*
 * XREFs of WPP_IFR_SF_s @ 0x1C00277AC
 * Callers:
 *     ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0026CBC (-FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxIFRReplay@@YAX_K@Z @ 0x1C0027070 (-FxIFRReplay@@YAX_K@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_s(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 _a1,
        const _GUID *globals_0,
        const char *level_0)
{
  const char *v6; // rbx
  __int64 v7; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  const char *v13; // rax
  __int64 v14; // rdi

  v6 = level_0;
  v7 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x200000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
  {
    if ( level_0 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( level_0[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = level_0;
    if ( !level_0 )
      v13 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_TracingIfrReplay_cpp_Traceguids,
      _a1,
      v13,
      v12,
      0LL);
  }
  if ( level_0 )
  {
    do
      ++v7;
    while ( level_0[v7] );
    v14 = v7 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !level_0 )
    v6 = "NULL";
  FxIFR(globals, level, 0x16u, WPP_TracingIfrReplay_cpp_Traceguids, _a1, v6, v14, 0LL);
}
