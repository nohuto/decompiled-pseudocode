/*
 * XREFs of WPP_IFR_SF_sl @ 0x1C0034674
 * Callers:
 *     imp_WdfVerifierDbgBreakPoint @ 0x1C0034830 (imp_WdfVerifierDbgBreakPoint.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sl(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        const char *flags,
        int id)
{
  const char *v7; // rdi
  __int64 v8; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  const char *v12; // rax
  __int64 v13; // rbx

  v7 = flags;
  v8 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x10000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 3u )
  {
    if ( flags )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( flags[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = flags;
    if ( !flags )
      v12 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_VerifierAPI_cpp_Traceguids,
      0xAu,
      v12,
      v11,
      &id,
      4LL,
      0LL);
  }
  if ( flags )
  {
    do
      ++v8;
    while ( flags[v8] );
    v13 = v8 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !flags )
    v7 = "NULL";
  FxIFR(globals, 3u, 0x11u, WPP_VerifierAPI_cpp_Traceguids, 0xAu, v7, v13, &id, 4LL, 0LL);
}
