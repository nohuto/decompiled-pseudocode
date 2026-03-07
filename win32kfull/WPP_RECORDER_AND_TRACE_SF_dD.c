__int64 WPP_RECORDER_AND_TRACE_SF_Dd(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, __int64 a8, ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+A0h] [rbp+48h] BYREF
  va_list va; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_6b46edcb4cb83e3ea91889dc4f8cc94b_Traceguids,
               13LL,
               (__int64 *)va,
               4LL,
               va1,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 13;
    return WppAutoLogTrace(a4, 4LL, 2LL, &WPP_6b46edcb4cb83e3ea91889dc4f8cc94b_Traceguids, v11, (__int64 *)va, 4LL, va1);
  }
  return result;
}
