void __fastcall WPP_IFR_SF_sqqd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int id,
        unsigned __int16 _a1,
        const _GUID *_a2,
        const char *_a3,
        const void *_a4,
        const void *globals_0,
        int level_0)
{
  const char *v9; // rdi
  __int64 v10; // rbx
  __int64 v14; // rcx
  __int64 v15; // rcx
  const char *v16; // rax
  __int64 v17; // rbx

  v9 = _a3;
  v10 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= level )
  {
    if ( _a3 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( _a3[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = _a3;
    if ( !_a3 )
      v16 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_PnpCallbacks_cpp_Traceguids,
      _a1,
      v16,
      v15,
      &_a4,
      8LL,
      &globals_0,
      8LL,
      &level_0,
      4LL,
      0LL);
  }
  if ( _a3 )
  {
    do
      ++v10;
    while ( _a3[v10] );
    v17 = v10 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !_a3 )
    v9 = "NULL";
  FxIFR(
    globals,
    level,
    0xCu,
    WPP_PnpCallbacks_cpp_Traceguids,
    _a1,
    v9,
    v17,
    &_a4,
    8LL,
    &globals_0,
    8LL,
    &level_0,
    4LL,
    0LL);
}
