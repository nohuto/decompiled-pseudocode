_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_ddddddddddS(
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
        const char *a19)
{
  _UNKNOWN **result; // rax
  __int64 v20; // rbx
  __int64 v21; // rdi
  struct RECORDER_LOG__ *v22; // r15
  __int64 v25; // rax
  __int64 v26; // rcx
  const char *v27; // rax
  int v28; // [rsp+28h] [rbp-B9h]
  _UNKNOWN *retaddr; // [rsp+110h] [rbp+2Fh] BYREF

  result = &retaddr;
  v20 = (__int64)a19;
  v21 = -1LL;
  v22 = gFullLog;
  if ( a2 )
  {
    if ( a19 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( *(_WORD *)&a19[2 * v25] );
      v26 = 2 * v25 + 2;
    }
    else
    {
      v26 = 10LL;
    }
    v27 = a19;
    if ( !a19 )
      v27 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_cd3fe56ee1413630481d590c05906531_Traceguids,
                            18LL,
                            &a9,
                            4LL,
                            &a10,
                            4LL,
                            &a11,
                            4LL,
                            &a12,
                            4LL,
                            &a13,
                            4LL,
                            &a14,
                            4LL,
                            &a15,
                            4LL,
                            &a16,
                            4LL,
                            &a17,
                            4LL,
                            &a18,
                            4LL,
                            v27,
                            v26,
                            0LL);
  }
  if ( a3 )
  {
    if ( v20 )
    {
      do
        ++v21;
      while ( *(_WORD *)(v20 + 2 * v21) );
    }
    LOWORD(v28) = 18;
    return (_UNKNOWN **)WppAutoLogTrace(
                          v22,
                          4LL,
                          23LL,
                          &WPP_cd3fe56ee1413630481d590c05906531_Traceguids,
                          v28,
                          &a9,
                          4LL,
                          &a10);
  }
  return result;
}
