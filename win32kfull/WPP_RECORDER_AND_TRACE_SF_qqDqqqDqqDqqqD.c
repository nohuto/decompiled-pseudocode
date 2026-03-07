__int64 __fastcall WPP_RECORDER_AND_TRACE_SF_qqDqqqDqqDqqqD(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        char a10,
        char a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        char a19,
        char a20,
        char a21,
        char a22)
{
  struct RECORDER_LOG__ *v22; // rdi
  __int64 result; // rax
  int v25; // [rsp+28h] [rbp-170h]

  v22 = gFullLog;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               &WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids,
               27LL,
               &a9,
               8LL,
               &a10,
               8LL,
               &a11,
               4LL,
               &a12,
               8LL,
               &a13,
               8LL,
               &a14,
               8LL,
               &a15,
               4LL,
               &a16,
               8LL,
               &a17,
               8LL,
               &a18,
               4LL,
               &a19,
               8LL,
               &a20,
               8LL,
               &a21,
               8LL,
               &a22,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v25) = 27;
    return WppAutoLogTrace(v22, 4LL, 18LL, &WPP_8ada2cc47d89311a9f976f757f98328f_Traceguids, v25, &a9, 8LL, &a10);
  }
  return result;
}
