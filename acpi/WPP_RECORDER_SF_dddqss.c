__int64 __fastcall WPP_RECORDER_SF_dddqss(
        __int64 a1,
        unsigned __int8 a2,
        __int64 a3,
        unsigned __int16 a4,
        int a5,
        char a6,
        char a7,
        char a8,
        char a9,
        const char *a10,
        const char *a11)
{
  __int64 v11; // rbx
  const char *v12; // rsi
  __int64 v14; // rdi
  unsigned int v16; // ebp
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // r8
  __int64 v20; // rcx
  __int64 v21; // rcx
  const char *v22; // rax
  __int64 v23; // rax
  int v25; // [rsp+20h] [rbp-88h]

  v11 = -1LL;
  v12 = a10;
  v14 = (__int64)a11;
  v16 = a2;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= a2 )
  {
    if ( a11 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a11[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a11;
    if ( !a11 )
      v19 = "NULL";
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a10;
    if ( !a10 )
      v22 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, _QWORD, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_851d451e9c8635d57712462b586962d1_Traceguids,
      a4,
      &a6,
      4LL,
      &a7,
      4LL,
      &a8,
      4LL,
      &a9,
      8LL,
      v22,
      v21,
      v19,
      v18,
      0LL);
  }
  if ( v14 )
  {
    v23 = -1LL;
    do
      ++v23;
    while ( *(_BYTE *)(v14 + v23) );
  }
  if ( v12 )
  {
    do
      ++v11;
    while ( v12[v11] );
  }
  if ( !v12 )
    v12 = "NULL";
  LOWORD(v25) = a4;
  return WppAutoLogTrace(
           a1,
           v16,
           16LL,
           &WPP_851d451e9c8635d57712462b586962d1_Traceguids,
           v25,
           &a6,
           4LL,
           &a7,
           4LL,
           &a8,
           4LL,
           &a9,
           8LL,
           v12);
}
