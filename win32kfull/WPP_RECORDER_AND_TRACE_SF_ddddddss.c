_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_ddddddss(
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
        __int64 a15,
        __int64 a16)
{
  _UNKNOWN **result; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rbx
  struct RECORDER_LOG__ *v20; // r15
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rax
  char *v26; // [rsp+28h] [rbp-89h]
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+1Fh] BYREF

  result = &retaddr;
  v17 = a15;
  v18 = a16;
  v19 = -1LL;
  v20 = gFullLog;
  if ( a2 )
  {
    if ( a16 )
    {
      v23 = -1LL;
      do
        ++v23;
      while ( *(_BYTE *)(a16 + v23) );
    }
    if ( a15 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( *(_BYTE *)(a15 + v24) );
    }
    v26 = &a9;
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids);
  }
  if ( a3 )
  {
    if ( v18 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( *(_BYTE *)(v18 + v25) );
    }
    if ( v17 )
    {
      do
        ++v19;
      while ( *(_BYTE *)(v17 + v19) );
    }
    LOWORD(v26) = 25;
    return (_UNKNOWN **)WppAutoLogTrace(
                          v20,
                          4LL,
                          1LL,
                          &WPP_8669ad7b9fbd3d4a6830eab88360ed60_Traceguids,
                          (_DWORD)v26,
                          &a9,
                          4LL,
                          &a10);
  }
  return result;
}
