/*
 * XREFs of WPP_IFR_SF_sSLSs @ 0x1C003703C
 * Callers:
 *     imp_WdfDriverErrorReportApiMissing @ 0x1C00377C0 (imp_WdfDriverErrorReportApiMissing.c)
 * Callees:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C00229CC (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_sSLSs(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        const char *_a5,
        const wchar_t *globals_0,
        unsigned int level,
        const wchar_t *flags,
        const char *id)
{
  const wchar_t *v10; // r13
  const char *v11; // r14
  _FX_DRIVER_GLOBALS *v12; // r10
  const wchar_t *v13; // rdi
  const char *v14; // rbp
  __int64 v15; // rbx
  __int64 v16; // r12
  __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // r10
  const char *v20; // r15
  __int64 v21; // r9
  __int64 v22; // rax
  const wchar_t *v23; // r11
  __int64 v24; // rax
  const wchar_t *v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  const char *v28; // rax
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  const wchar_t *v33; // r8
  __int64 v34; // rax
  __int64 v35; // rbx

  v10 = L"<NULL>";
  v11 = _a5;
  v12 = globals;
  v13 = flags;
  v14 = id;
  v15 = -1LL;
  v16 = 14LL;
  v17 = 10LL;
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x20) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
  {
    if ( id )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( id[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = id;
    if ( !id )
      v20 = "NULL";
    if ( flags )
    {
      if ( *flags )
      {
        v22 = -1LL;
        do
          ++v22;
        while ( flags[v22] );
        v21 = 2 * v22 + 2;
      }
      else
      {
        v21 = 14LL;
      }
      v23 = L"<NULL>";
      if ( *flags )
        v23 = flags;
    }
    else
    {
      v21 = 10LL;
      v23 = L"NULL";
    }
    if ( globals_0 )
    {
      if ( *globals_0 )
      {
        v24 = -1LL;
        do
          ++v24;
        while ( globals_0[v24] );
        v17 = 2 * v24 + 2;
      }
      else
      {
        v17 = 14LL;
      }
      v25 = L"<NULL>";
      if ( *globals_0 )
        v25 = globals_0;
    }
    else
    {
      v25 = L"NULL";
    }
    if ( _a5 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( _a5[v26] );
      v27 = v26 + 1;
    }
    else
    {
      v27 = 5LL;
    }
    v28 = _a5;
    if ( !_a5 )
      v28 = "NULL";
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_FxDriverApi_cpp_Traceguids,
      0x11u,
      v28,
      v27,
      v25,
      v17,
      &level,
      4LL,
      v23,
      v21,
      v20,
      v19,
      0LL);
    v12 = globals;
  }
  if ( v14 )
  {
    v29 = -1LL;
    do
      ++v29;
    while ( v14[v29] );
    v30 = v29 + 1;
  }
  else
  {
    v30 = 5LL;
  }
  if ( !v14 )
    v14 = "NULL";
  if ( v13 )
  {
    if ( *v13 )
    {
      v32 = -1LL;
      do
        ++v32;
      while ( v13[v32] );
      v31 = 2 * v32 + 2;
    }
    else
    {
      v31 = 14LL;
    }
    v33 = L"<NULL>";
    if ( *v13 )
      v33 = v13;
  }
  else
  {
    v31 = 10LL;
    v33 = L"NULL";
  }
  if ( globals_0 )
  {
    if ( *globals_0 )
    {
      v34 = -1LL;
      do
        ++v34;
      while ( globals_0[v34] );
      v16 = 2 * v34 + 2;
    }
    if ( *globals_0 )
      v10 = globals_0;
  }
  else
  {
    v16 = 10LL;
    v10 = L"NULL";
  }
  if ( _a5 )
  {
    do
      ++v15;
    while ( _a5[v15] );
    v35 = v15 + 1;
  }
  else
  {
    v35 = 5LL;
  }
  if ( !_a5 )
    v11 = "NULL";
  FxIFR(v12, 2u, 6u, WPP_FxDriverApi_cpp_Traceguids, 0x11u, v11, v35, v10, v16, &level, 4LL, v33, v31, v14, v30, 0LL);
}
