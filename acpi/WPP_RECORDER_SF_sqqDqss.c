__int64 __fastcall WPP_RECORDER_SF_sqqDqss(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        char a7,
        char a8,
        char a9,
        char a10,
        const char *a11,
        const char *a12)
{
  const char *v12; // rbp
  __int64 v13; // rbx
  __int64 v14; // rsi
  __int64 v16; // rdi
  unsigned int v17; // r14d
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
  int v31; // [rsp+20h] [rbp-98h]

  v12 = a6;
  v13 = -1LL;
  v14 = (__int64)a11;
  v16 = (__int64)a12;
  v17 = a4;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( a12 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a12[v18] );
      v19 = v18 + 1;
    }
    else
    {
      v19 = 5LL;
    }
    v20 = a12;
    if ( !a12 )
      v20 = "NULL";
    if ( a11 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a11[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a11;
    if ( !a11 )
      v23 = "NULL";
    if ( a6 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a6[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a6;
    if ( !a6 )
      v26 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, __int64, _QWORD, const char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      a5,
      v17,
      v26,
      v25,
      &a7,
      8LL,
      &a8,
      8LL,
      &a9,
      4LL,
      &a10,
      8LL,
      v23,
      v22,
      v20,
      v19,
      0LL);
  }
  if ( v16 )
  {
    v27 = -1LL;
    do
      ++v27;
    while ( *(_BYTE *)(v16 + v27) );
  }
  if ( v14 )
  {
    v28 = -1LL;
    do
      ++v28;
    while ( *(_BYTE *)(v14 + v28) );
  }
  if ( a6 )
  {
    do
      ++v13;
    while ( a6[v13] );
    v29 = v13 + 1;
  }
  else
  {
    v29 = 5LL;
  }
  if ( !a6 )
    v12 = "NULL";
  LOWORD(v31) = v17;
  return WppAutoLogTrace(a1, 4LL, 6LL, a5, v31, v12, v29, &a7, 8LL, &a8, 8LL, &a9, 4LL, &a10);
}
