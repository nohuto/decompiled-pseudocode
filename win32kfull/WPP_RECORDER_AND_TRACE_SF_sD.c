_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_sD(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const char *a9,
        ...)
{
  _UNKNOWN **result; // rax
  const char *v10; // rdi
  struct RECORDER_LOG__ *v11; // rbp
  __int64 v12; // rbx
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  const char *v18; // rcx
  int v19; // [rsp+20h] [rbp-38h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF
  va_list va; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va, a9);
  result = &retaddr;
  v10 = a9;
  v11 = gFullLog;
  v12 = -1LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v16 = -1LL;
      do
        ++v16;
      while ( a9[v16] );
      v17 = v16 + 1;
    }
    else
    {
      v17 = 5LL;
    }
    v18 = a9;
    if ( !a9 )
      v18 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
                            22LL,
                            v18,
                            v17,
                            va,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v12;
      while ( a9[v12] );
      v15 = v12 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    if ( !a9 )
      v10 = "NULL";
    LOWORD(v19) = 22;
    return (_UNKNOWN **)WppAutoLogTrace(
                          v11,
                          4LL,
                          2LL,
                          &WPP_0e5afcf2e3b43a3f515021e53eb281e1_Traceguids,
                          v19,
                          v10,
                          v15,
                          va);
  }
  return result;
}
