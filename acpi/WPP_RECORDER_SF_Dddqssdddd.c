__int64 WPP_RECORDER_SF_Dddqssdddd(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, ...)
{
  const char *v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v9; // rdx
  __int64 v10; // rdx
  const char *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rcx
  const char *v14; // rax
  __int64 v15; // rax
  int v17; // [rsp+28h] [rbp-A9h]
  __int64 v18; // [rsp+120h] [rbp+4Fh] BYREF
  va_list va; // [rsp+120h] [rbp+4Fh]
  __int64 v20; // [rsp+128h] [rbp+57h] BYREF
  va_list va1; // [rsp+128h] [rbp+57h]
  __int64 v22; // [rsp+130h] [rbp+5Fh] BYREF
  va_list va2; // [rsp+130h] [rbp+5Fh]
  __int64 v24; // [rsp+138h] [rbp+67h] BYREF
  va_list va3; // [rsp+138h] [rbp+67h]
  const char *v26; // [rsp+140h] [rbp+6Fh]
  const char *v27; // [rsp+148h] [rbp+77h]
  __int64 v28; // [rsp+150h] [rbp+7Fh] BYREF
  va_list va4; // [rsp+150h] [rbp+7Fh]
  __int64 v30; // [rsp+158h] [rbp+87h] BYREF
  va_list va5; // [rsp+158h] [rbp+87h]
  __int64 v32; // [rsp+160h] [rbp+8Fh] BYREF
  va_list va6; // [rsp+160h] [rbp+8Fh]
  va_list va7; // [rsp+168h] [rbp+97h] BYREF

  va_start(va7, a5);
  va_start(va6, a5);
  va_start(va5, a5);
  va_start(va4, a5);
  va_start(va3, a5);
  va_start(va2, a5);
  va_start(va1, a5);
  va_start(va, a5);
  v18 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v20 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v22 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v24 = va_arg(va4, _QWORD);
  v26 = va_arg(va4, const char *);
  v27 = va_arg(va4, const char *);
  va_copy(va5, va4);
  v28 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v30 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v32 = va_arg(va7, _QWORD);
  v5 = v26;
  v6 = (__int64)v27;
  v7 = -1LL;
  if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x8000) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    if ( v27 )
    {
      v9 = -1LL;
      do
        ++v9;
      while ( v27[v9] );
      v10 = v9 + 1;
    }
    else
    {
      v10 = 5LL;
    }
    v11 = v27;
    if ( !v27 )
      v11 = "NULL";
    if ( v26 )
    {
      v12 = -1LL;
      do
        ++v12;
      while ( v26[v12] );
      v13 = v12 + 1;
    }
    else
    {
      v13 = 5LL;
    }
    v14 = v26;
    if ( !v26 )
      v14 = "NULL";
    ((void (__fastcall *)(_DEVICE_OBJECT *, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
      WPP_GLOBAL_Control->AttachedDevice,
      43LL,
      &WPP_93ea93d83ec03a4680542420a9c7ec01_Traceguids,
      31LL,
      (__int64 *)va,
      4LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      (__int64 *)va3,
      8LL,
      v14,
      v13,
      v11,
      v10,
      (__int64 *)va4,
      4LL,
      (__int64 *)va5,
      4LL,
      (__int64 *)va6,
      4LL,
      va7,
      4LL,
      0LL);
  }
  if ( v6 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_BYTE *)(v6 + v15) );
  }
  if ( v5 )
  {
    do
      ++v7;
    while ( v5[v7] );
  }
  if ( !v5 )
    v5 = "NULL";
  LOWORD(v17) = 31;
  return WppAutoLogTrace(
           a1,
           4LL,
           16LL,
           &WPP_93ea93d83ec03a4680542420a9c7ec01_Traceguids,
           v17,
           (__int64 *)va,
           4LL,
           (__int64 *)va1,
           4LL,
           (__int64 *)va2,
           4LL,
           (__int64 *)va3,
           8LL,
           v5);
}
