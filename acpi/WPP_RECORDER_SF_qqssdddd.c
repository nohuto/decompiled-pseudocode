__int64 WPP_RECORDER_SF_qqssdddd(__int64 a1, _DWORD a2, _DWORD a3, unsigned __int16 a4, __int64 a5, ...)
{
  const char *v5; // rsi
  __int64 v6; // rbx
  const char *v7; // rdi
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbx
  int v16; // [rsp+28h] [rbp-89h]
  __int64 v17; // [rsp+100h] [rbp+4Fh] BYREF
  va_list va; // [rsp+100h] [rbp+4Fh]
  __int64 v19; // [rsp+108h] [rbp+57h] BYREF
  va_list va1; // [rsp+108h] [rbp+57h]
  const char *v21; // [rsp+110h] [rbp+5Fh]
  const char *v22; // [rsp+118h] [rbp+67h]
  va_list va2; // [rsp+120h] [rbp+6Fh] BYREF

  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v17 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v19 = va_arg(va2, _QWORD);
  v21 = va_arg(va2, const char *);
  v22 = va_arg(va2, const char *);
  v5 = v21;
  v6 = -1LL;
  v7 = v22;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v22 )
    {
      v10 = -1LL;
      do
        ++v10;
      while ( v22[v10] );
    }
    if ( v21 )
    {
      v11 = -1LL;
      do
        ++v11;
      while ( v21[v11] );
    }
    pfnWppTraceMessage(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_93ea93d83ec03a4680542420a9c7ec01_Traceguids,
      a4,
      (__int64 *)va,
      8LL,
      (__int64 *)va1);
  }
  if ( v7 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( v7[v12] );
    v13 = v12 + 1;
  }
  else
  {
    v13 = 5LL;
  }
  if ( !v7 )
    v7 = "NULL";
  if ( v5 )
  {
    do
      ++v6;
    while ( v5[v6] );
    v14 = v6 + 1;
  }
  else
  {
    v14 = 5LL;
  }
  if ( !v5 )
    v5 = "NULL";
  LOWORD(v16) = a4;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_93ea93d83ec03a4680542420a9c7ec01_Traceguids,
           v16,
           (__int64 *)va,
           8LL,
           (__int64 *)va1,
           8LL,
           v5,
           v14,
           v7,
           v13,
           va2);
}
