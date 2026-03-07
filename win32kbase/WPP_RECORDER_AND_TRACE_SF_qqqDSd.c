void WPP_RECORDER_AND_TRACE_SF_qqqDSd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  const wchar_t *v8; // rbx
  struct RECORDER_LOG__ *v9; // r15
  __int64 v10; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  const wchar_t *v16; // rax
  bool v17; // zf
  int v18; // [rsp+20h] [rbp-98h]
  __int64 v19; // [rsp+100h] [rbp+48h] BYREF
  va_list va; // [rsp+100h] [rbp+48h]
  __int64 v21; // [rsp+108h] [rbp+50h] BYREF
  va_list va1; // [rsp+108h] [rbp+50h]
  __int64 v23; // [rsp+110h] [rbp+58h] BYREF
  va_list va2; // [rsp+110h] [rbp+58h]
  __int64 v25; // [rsp+118h] [rbp+60h] BYREF
  va_list va3; // [rsp+118h] [rbp+60h]
  const wchar_t *v27; // [rsp+120h] [rbp+68h]
  va_list va4; // [rsp+128h] [rbp+70h] BYREF

  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v25 = va_arg(va4, _QWORD);
  v27 = va_arg(va4, const wchar_t *);
  v8 = v27;
  v9 = gRimLog;
  v10 = -1LL;
  v13 = 10LL;
  if ( a2 )
  {
    if ( v27 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v27[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = v27;
    if ( !v27 )
      v16 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      a1,
      43LL,
      a8,
      a7,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      8LL,
      (__int64 *)va3,
      4LL,
      v16,
      v15,
      va4,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    v17 = v8 == 0LL;
    if ( v8 )
    {
      do
        ++v10;
      while ( v8[v10] );
      v13 = 2 * v10 + 2;
      v17 = v8 == 0LL;
    }
    if ( v17 )
      v8 = L"NULL";
    LOWORD(v18) = a7;
    WppAutoLogTrace(
      v9,
      a5,
      1LL,
      a8,
      v18,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      8LL,
      (__int64 *)va2,
      8LL,
      (__int64 *)va3,
      4LL,
      v8,
      v13,
      va4);
  }
}
