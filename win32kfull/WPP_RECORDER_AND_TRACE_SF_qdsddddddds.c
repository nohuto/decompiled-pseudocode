_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qdsddddddds(
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
        __int64 a11,
        char a12,
        char a13,
        char a14,
        char a15,
        char a16,
        char a17,
        char a18,
        __int64 a19)
{
  _UNKNOWN **result; // rax
  __int64 v20; // rsi
  __int64 v21; // rbx
  __int64 v22; // rdi
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rax
  char *v28; // [rsp+28h] [rbp-B9h]
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+1Fh] BYREF

  result = &retaddr;
  v20 = a11;
  v21 = -1LL;
  v22 = a19;
  if ( a2 )
  {
    if ( a19 )
    {
      v26 = -1LL;
      do
        ++v26;
      while ( *(_BYTE *)(a19 + v26) );
    }
    if ( a11 )
    {
      v27 = -1LL;
      do
        ++v27;
      while ( *(_BYTE *)(a11 + v27) );
    }
    v28 = &a9;
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids);
  }
  if ( a3 )
  {
    if ( v22 )
    {
      v25 = -1LL;
      do
        ++v25;
      while ( *(_BYTE *)(v22 + v25) );
    }
    if ( v20 )
    {
      do
        ++v21;
      while ( *(_BYTE *)(v20 + v21) );
    }
    LOWORD(v28) = 12;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          23LL,
                          &WPP_6439afcc97db3ef004bbbd47128fde81_Traceguids,
                          (_DWORD)v28,
                          &a9,
                          8LL,
                          &a10);
  }
  return result;
}
