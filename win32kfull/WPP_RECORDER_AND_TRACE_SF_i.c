__int64 WPP_RECORDER_AND_TRACE_SF_i(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
{
  struct RECORDER_LOG__ *v8; // rdi
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-28h]
  va_list va; // [rsp+90h] [rbp+48h] BYREF

  va_start(va, a8);
  v8 = gFullLog;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_39b29109440736b79d6ba092fd9c72a8_Traceguids,
               12LL,
               va,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 12;
    return WppAutoLogTrace(v8, 4LL, 10LL, &WPP_39b29109440736b79d6ba092fd9c72a8_Traceguids, v11, va, 8LL, 0LL);
  }
  return result;
}
