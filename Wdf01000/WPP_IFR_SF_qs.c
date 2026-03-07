void __fastcall WPP_IFR_SF_qs(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 a4,
        const _GUID *level,
        const void *flags,
        const char *id)
{
  const char *v7; // rdi
  __int64 v8; // rbx
  __int64 v10; // rcx
  __int64 v11; // rcx
  const char *v12; // rax
  __int64 v13; // rbx

  v7 = id;
  v8 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x2000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( id )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( id[v10] );
      v11 = v10 + 1;
    }
    else
    {
      v11 = 5LL;
    }
    v12 = id;
    if ( !id )
      v12 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      (_GUID *)&WPP_FxUsbPipe_cpp_Traceguids,
      0x18u,
      &flags,
      8LL,
      v12,
      v11,
      0LL);
  }
  if ( v7 )
  {
    do
      ++v8;
    while ( v7[v8] );
    v13 = v8 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !v7 )
    v7 = "NULL";
  FxIFR(globals, 2u, 0xEu, (_GUID *)&WPP_FxUsbPipe_cpp_Traceguids, 0x18u, &flags, 8LL, v7, v13, 0LL);
}
