__int64 WPP_RECORDER_AND_TRACE_SF_qqqDqd(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
{
  struct RECORDER_LOG__ *v8; // rdi
  __int64 result; // rax
  int v11; // [rsp+28h] [rbp-79h]
  int v12; // [rsp+98h] [rbp-9h] BYREF
  int v13; // [rsp+A0h] [rbp-1h] BYREF
  __int64 v14; // [rsp+108h] [rbp+67h] BYREF
  va_list va; // [rsp+108h] [rbp+67h]
  __int64 v16; // [rsp+110h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+110h] [rbp+6Fh]
  __int64 v18; // [rsp+118h] [rbp+77h] BYREF
  va_list va2; // [rsp+118h] [rbp+77h]
  __int64 v20; // [rsp+120h] [rbp+7Fh]
  va_list va3; // [rsp+128h] [rbp+87h] BYREF

  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v14 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v16 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v18 = va_arg(va3, _QWORD);
  v20 = va_arg(va3, _QWORD);
  v8 = gRimLog;
  v12 = -1073741801;
  v13 = 9;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, int *, __int64, char *, __int64, int *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
               a1,
               43LL,
               &WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
               58LL,
               (__int64 *)va,
               8LL,
               (__int64 *)va1,
               8LL,
               (__int64 *)va2,
               8LL,
               &v13,
               4LL,
               va3,
               8LL,
               &v12,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 58;
    return WppAutoLogTrace(
             v8,
             2LL,
             1LL,
             &WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
             v11,
             (__int64 *)va,
             8LL,
             (__int64 *)va1,
             8LL,
             (__int64 *)va2,
             8LL,
             &v13,
             4LL,
             va3,
             8LL,
             &v12);
  }
  return result;
}
