void __fastcall WPP_IFR_SF_qqs(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *globals_0,
        const void *level,
        const void *flags,
        const char *id)
{
  const char *v8; // rdi
  __int64 v9; // rbx
  __int64 v11; // rcx
  __int64 v12; // rcx
  const char *v13; // rax
  __int64 v14; // rbx

  v8 = id;
  v9 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x1000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 5u )
  {
    if ( id )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( id[v11] );
      v12 = v11 + 1;
    }
    else
    {
      v12 = 5LL;
    }
    v13 = id;
    if ( !id )
      v13 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxIoQueue_cpp_Traceguids,
      0x65u,
      &level,
      8LL,
      &flags,
      8LL,
      v13,
      v12,
      0LL);
  }
  if ( v8 )
  {
    do
      ++v9;
    while ( v8[v9] );
    v14 = v9 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !v8 )
    v8 = "NULL";
  FxIFR(globals, 5u, 0xDu, WPP_FxIoQueue_cpp_Traceguids, 0x65u, &level, 8LL, &flags, 8LL, v8, v14, 0LL);
}
