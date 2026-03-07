_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_ss(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        const char *a9,
        const char *a10)
{
  _UNKNOWN **result; // rax
  const char *v11; // rsi
  const char *v12; // rdi
  __int64 v13; // rbx
  struct RECORDER_LOG__ *v14; // r14
  __int64 v17; // rdx
  __int64 v18; // rdx
  const char *v19; // r8
  __int64 v20; // rax
  __int64 v21; // rax
  const char *v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx
  int v25; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = &retaddr;
  v11 = a9;
  v12 = a10;
  v13 = -1LL;
  v14 = gFullLog;
  if ( a2 )
  {
    if ( a10 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a10[v17] );
      v18 = v17 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    v19 = a10;
    if ( !a10 )
      v19 = "NULL";
    if ( a9 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a9[v20] );
      v21 = v20 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    v22 = a9;
    if ( !a9 )
      v22 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
                            84LL,
                            v22,
                            v21,
                            v19,
                            v18,
                            0LL);
  }
  if ( a3 )
  {
    if ( a10 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( a10[v23] );
    }
    if ( !a10 )
      v12 = "NULL";
    if ( a9 )
    {
      do
        ++v13;
      while ( a9[v13] );
      v24 = v13 + 1;
    }
    else
    {
      v24 = 5LL;
    }
    if ( !a9 )
      v11 = "NULL";
    LOWORD(v25) = 84;
    return (_UNKNOWN **)WppAutoLogTrace(
                          v14,
                          5LL,
                          1LL,
                          &WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
                          v25,
                          v11,
                          v24,
                          v12);
  }
  return result;
}
