void __fastcall WPP_IFR_SF_sqqLd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 id,
        unsigned int _a1,
        unsigned __int16 _a2,
        const _GUID *_a3,
        const char *_a4,
        const void *_a5,
        const void *globals_0,
        unsigned int level,
        int flags)
{
  const char *v10; // rdi
  __int64 v11; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  const char *v16; // rax
  __int64 v17; // rbx

  v10 = _a4;
  v11 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( _a4 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( _a4[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = _a4;
    if ( !_a4 )
      v16 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_PnpCallbacks_cpp_Traceguids,
      _a2,
      v16,
      v15,
      &_a5,
      8LL,
      &globals_0,
      8LL,
      &level,
      4LL,
      &flags,
      4LL,
      0LL);
  }
  if ( _a4 )
  {
    do
      ++v11;
    while ( _a4[v11] );
    v17 = v11 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !_a4 )
    v10 = "NULL";
  FxIFR(
    globals,
    2u,
    0xCu,
    WPP_PnpCallbacks_cpp_Traceguids,
    _a2,
    v10,
    v17,
    &_a5,
    8LL,
    &globals_0,
    8LL,
    &level,
    4LL,
    &flags,
    4LL,
    0LL);
}
