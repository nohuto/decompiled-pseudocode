void WPP_RECORDER_AND_TRACE_SF_qdDSd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        unsigned __int16 a7,
        int a8,
        ...)
{
  const wchar_t *v8; // rbx
  __int64 v9; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rax
  const wchar_t *v16; // rcx
  bool v17; // zf
  int v18; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+F0h] [rbp+48h] BYREF
  va_list va; // [rsp+F0h] [rbp+48h]
  __int64 v21; // [rsp+F8h] [rbp+50h] BYREF
  va_list va1; // [rsp+F8h] [rbp+50h]
  __int64 v23; // [rsp+100h] [rbp+58h] BYREF
  va_list va2; // [rsp+100h] [rbp+58h]
  const wchar_t *v25; // [rsp+108h] [rbp+60h]
  va_list va3; // [rsp+110h] [rbp+68h] BYREF

  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  v25 = va_arg(va3, const wchar_t *);
  v8 = v25;
  v9 = -1LL;
  v13 = 10LL;
  if ( a2 )
  {
    if ( v25 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v25[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = v25;
    if ( !v25 )
      v16 = L"NULL";
    ((void (__fastcall *)(__int64, __int64, void *, _QWORD, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const wchar_t *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
      a1,
      43LL,
      &WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids,
      a7,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v16,
      v15,
      va3,
      4LL,
      0LL);
  }
  if ( a3 )
  {
    v17 = v8 == 0LL;
    if ( v8 )
    {
      do
        ++v9;
      while ( v8[v9] );
      v13 = 2 * v9 + 2;
      v17 = v8 == 0LL;
    }
    if ( v17 )
      v8 = L"NULL";
    LOWORD(v18) = a7;
    WppAutoLogTrace(
      a4,
      4LL,
      1LL,
      &WPP_11533c3e880c32a58e181bbd9ba8979b_Traceguids,
      v18,
      (__int64 *)va,
      8LL,
      (__int64 *)va1,
      4LL,
      (__int64 *)va2,
      4LL,
      v8,
      v13,
      va3,
      4LL,
      0LL);
  }
}
