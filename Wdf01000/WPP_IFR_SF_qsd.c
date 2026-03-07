void __fastcall WPP_IFR_SF_qsd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const void *globals_0,
        const char *level,
        int flags)
{
  const char *v8; // rdi
  __int64 v9; // rbx
  __int64 v12; // rcx
  __int64 v13; // rcx
  const char *v14; // rax
  __int64 v15; // rbx

  v8 = level;
  v9 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( level )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( level[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = level;
    if ( !level )
      v14 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDeviceApi_cpp_Traceguids,
      _a2,
      &globals_0,
      8LL,
      v14,
      v13,
      &flags,
      4LL,
      0LL);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( v8[v9] );
    v15 = v9 + 1;
  }
  else
  {
    v15 = 5LL;
  }
  if ( !v8 )
    v8 = "NULL";
  FxIFR(globals, 2u, 0x12u, WPP_FxDeviceApi_cpp_Traceguids, _a2, &globals_0, 8LL, v8, v15, &flags, 4LL, 0LL);
}
