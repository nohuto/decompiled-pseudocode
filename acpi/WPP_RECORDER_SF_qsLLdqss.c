__int64 __fastcall WPP_RECORDER_SF_qsLLdqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6,
        const char *a7,
        char a8,
        char a9,
        __int64 a10,
        char a11,
        const char *a12,
        const char *a13)
{
  const char *v13; // r14
  __int64 v14; // rbx
  const char *v15; // rsi
  const char *v17; // rdi
  __int64 v18; // r9
  __int64 v19; // r9
  const char *v20; // r11
  __int64 v21; // r8
  __int64 v22; // r8
  const char *v23; // r10
  __int64 v24; // rdx
  __int64 v25; // rdx
  const char *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rbx
  int v31; // [rsp+28h] [rbp-99h]
  _DWORD v32[4]; // [rsp+B8h] [rbp-9h] BYREF

  v13 = a7;
  v14 = -1LL;
  v15 = a12;
  v17 = a13;
  v32[0] = AcpiPowerCurrentPagingPathTransitions;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x200) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a13 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a13[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a13;
    if ( !a13 )
      v20 = "NULL";
    if ( a12 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a12[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a12;
    if ( !a12 )
      v23 = "NULL";
    if ( a7 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a7[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a7;
    if ( !a7 )
      v26 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, const ULONG_PTR *, __int64, char *, __int64, const char *, __int64, char *, __int64, char *, __int64, _DWORD *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
      48LL,
      &a6,
      8LL,
      v26,
      v25,
      &a8,
      4LL,
      &a9,
      4LL,
      v32,
      4LL,
      &a11,
      8LL,
      v23,
      v22,
      v20,
      v19,
      0LL);
  }
  if ( v17 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( v17[v27] );
  }
  if ( v15 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( v15[v28] );
  }
  if ( v13 )
  {
    do
      ++v14;
    while ( v13[v14] );
    v29 = v14 + 1;
  }
  else
  {
    v29 = 5LL;
  }
  if ( !v13 )
    v13 = "NULL";
  LOWORD(v31) = 48;
  return WppAutoLogTrace(
           a1,
           4LL,
           10LL,
           &WPP_afb93ce9a898342faba18bc7242ff62e_Traceguids,
           v31,
           &a6,
           8LL,
           v13,
           v29,
           &a8,
           4LL,
           &a9,
           4LL,
           v32);
}
