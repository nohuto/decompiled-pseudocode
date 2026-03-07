void __fastcall WPP_IFR_SF_sqqq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const char *globals_0,
        const void *level,
        const void *flags,
        const void *id)
{
  const char *v9; // rdi
  __int64 v10; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  const char *v14; // rax
  __int64 v15; // rbx

  v9 = globals_0;
  v10 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( globals_0 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( globals_0[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = globals_0;
    if ( !globals_0 )
      v14 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_fxtagtracker_cpp_Traceguids,
      0xAu,
      v14,
      v13,
      &level,
      8LL,
      &flags,
      8LL,
      &id,
      8LL,
      0LL);
  }
  if ( globals_0 )
  {
    do
      ++v10;
    while ( globals_0[v10] );
    v15 = v10 + 1;
  }
  else
  {
    v15 = 5LL;
  }
  if ( !globals_0 )
    v9 = "NULL";
  FxIFR(globals, 2u, 0x12u, WPP_fxtagtracker_cpp_Traceguids, 0xAu, v9, v15, &level, 8LL, &flags, 8LL, &id, 8LL, 0LL);
}
