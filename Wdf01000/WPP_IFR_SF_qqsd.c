void __fastcall WPP_IFR_SF_qqsd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const void *_a3,
        const void *_a4,
        const char *globals_0,
        int level_0)
{
  const char *v9; // rdi
  __int64 v10; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  const char *v16; // rax
  __int64 v17; // rbx

  v9 = globals_0;
  v10 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
  {
    if ( globals_0 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( globals_0[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = globals_0;
    if ( !globals_0 )
      v16 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_fxtagtracker_cpp_Traceguids,
      _a1,
      &_a3,
      8LL,
      &_a4,
      8LL,
      v16,
      v15,
      &level_0,
      4LL,
      0LL);
  }
  if ( v9 )
  {
    do
      ++v10;
    while ( v9[v10] );
    v17 = v10 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !v9 )
    v9 = "NULL";
  FxIFR(globals, level, 0x12u, WPP_fxtagtracker_cpp_Traceguids, _a1, &_a3, 8LL, &_a4, 8LL, v9, v17, &level_0, 4LL, 0LL);
}
