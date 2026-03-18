/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qslsl @ 0x1C013DBCC
 * Callers:
 *     xxxShowScrollBar @ 0x1C0231FE0 (xxxShowScrollBar.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0141260 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qslsl(
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
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rax
  char *v21; // [rsp+20h] [rbp-78h]
  _UNKNOWN *retaddr; // [rsp+98h] [rbp+0h] BYREF

  result = &retaddr;
  v13 = a10;
  v14 = a12;
  v15 = -1LL;
  if ( a2 )
  {
    if ( a12 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( *(_BYTE *)(a12 + v18) );
    }
    if ( a10 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( a10[v19] );
    }
    v21 = &a9;
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_901265b9b681362ce7e97d2f77d4cfcc_Traceguids);
  }
  if ( a3 )
  {
    if ( v14 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( *(_BYTE *)(v14 + v20) );
    }
    if ( v13 )
    {
      do
        ++v15;
      while ( v13[v15] );
    }
    if ( !v13 )
      v13 = "NULL";
    LOWORD(v21) = 10;
    return (_UNKNOWN **)WppAutoLogTrace(
                          a4,
                          4LL,
                          9LL,
                          &WPP_901265b9b681362ce7e97d2f77d4cfcc_Traceguids,
                          (_DWORD)v21,
                          &a9,
                          8LL,
                          v13);
  }
  return result;
}
