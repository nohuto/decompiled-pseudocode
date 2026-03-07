_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_DsDs(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        char a9,
        const char *a10,
        char a11,
        __int64 a12)
{
  _UNKNOWN **result; // rax
  const char *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rbx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  char *v21; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  v13 = a10;
  v14 = a12;
  v15 = -1LL;
  if ( a2 )
  {
    if ( a12 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( *(_BYTE *)(a12 + v19) );
    }
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
    }
    v21 = &a9;
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids);
  }
  if ( a3 )
  {
    if ( v14 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(v14 + v18) );
    }
    if ( v13 )
    {
      do
        ++v15;
      while ( v13[v15] );
    }
    if ( !v13 )
      v13 = "NULL";
    LOWORD(v21) = 11;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          2LL,
                          &WPP_1f5084c5bd003b11755bdb3c506305c0_Traceguids,
                          (_DWORD)v21,
                          &a9,
                          4LL,
                          v13);
  }
  return result;
}
