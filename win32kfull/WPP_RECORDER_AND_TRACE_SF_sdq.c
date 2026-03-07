__int64 WPP_RECORDER_AND_TRACE_SF_sdq(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        ...)
{
  struct RECORDER_LOG__ *v9; // rdi
  __int64 result; // rax
  int v12; // [rsp+20h] [rbp-48h]
  __int64 v13; // [rsp+B8h] [rbp+50h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h]
  va_list va1; // [rsp+C0h] [rbp+58h] BYREF

  va_start(va1, a9);
  va_start(va, a9);
  v13 = va_arg(va1, _QWORD);
  v9 = gFullLog;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
               18LL,
               "NtUserSetWindowCompositionAttribute",
               36LL,
               (__int64 *)va,
               4LL,
               va1,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v12) = 18;
    return WppAutoLogTrace(
             v9,
             3LL,
             1LL,
             &WPP_dad53d594ec237dec63fae8c26dffb95_Traceguids,
             v12,
             "NtUserSetWindowCompositionAttribute",
             36LL,
             (__int64 *)va);
  }
  return result;
}
