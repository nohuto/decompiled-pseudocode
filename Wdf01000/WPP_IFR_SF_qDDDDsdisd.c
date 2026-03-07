void __fastcall WPP_IFR_SF_qDDDDsdisd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const void *_a5,
        unsigned int _a6,
        unsigned int _a7,
        unsigned int _a8,
        unsigned int _a9,
        const char *_a10,
        int globals_0,
        __int64 level,
        const char *flags,
        int id)
{
  const char *v15; // rsi
  const char *v16; // rdi
  __int64 v17; // rbx
  __int64 v19; // rdx
  __int64 v20; // rdx
  const char *v21; // r8
  __int64 v22; // rcx
  __int64 v23; // rcx
  const char *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx

  v15 = _a10;
  v16 = flags;
  v17 = -1LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x800) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( flags )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( flags[v19] );
      v20 = v19 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    v21 = flags;
    if ( !flags )
      v21 = "NULL";
    if ( _a10 )
    {
      v22 = -1LL;
      do
        ++v22;
      while ( _a10[v22] );
      v23 = v22 + 1;
    }
    else
    {
      v23 = 5LL;
    }
    v24 = _a10;
    if ( !_a10 )
      v24 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      (_GUID *)&WPP_InterruptObject_cpp_Traceguids,
      0x17u,
      &_a5,
      8LL,
      &_a6,
      4LL,
      &_a7,
      4LL,
      &_a8,
      4LL,
      &_a9,
      4LL,
      v24,
      v23,
      &globals_0,
      4LL,
      &level,
      8LL,
      v21,
      v20,
      &id,
      4LL,
      0LL);
  }
  if ( v16 )
  {
    v25 = -1LL;
    do
      ++v25;
    while ( v16[v25] );
    v26 = v25 + 1;
  }
  else
  {
    v26 = 5LL;
  }
  if ( !v16 )
    v16 = "NULL";
  if ( v15 )
  {
    do
      ++v17;
    while ( v15[v17] );
    v27 = v17 + 1;
  }
  else
  {
    v27 = 5LL;
  }
  if ( !v15 )
    v15 = "NULL";
  FxIFR(
    globals,
    2u,
    0xCu,
    (_GUID *)&WPP_InterruptObject_cpp_Traceguids,
    0x17u,
    &_a5,
    8LL,
    &_a6,
    4LL,
    &_a7,
    4LL,
    &_a8,
    4LL,
    &_a9,
    4LL,
    v15,
    v27,
    &globals_0,
    4LL,
    &level,
    8LL,
    v16,
    v26,
    &id,
    4LL,
    0LL);
}
