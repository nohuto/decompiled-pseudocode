/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qsqs @ 0x1C007BBB8
 * Callers:
 *     _anonymous_namespace_::RemoveForegroundActivate @ 0x1C00FFDF4 (_anonymous_namespace_--RemoveForegroundActivate.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_qsqs(
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
        const char *a12)
{
  _UNKNOWN **result; // rax
  struct _LIST_ENTRY *Flink; // r14
  const char *v14; // rdi
  __int64 v15; // rbx
  const char *v16; // rsi
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  const char *v23; // r8
  __int64 v24; // rax
  __int64 v25; // rax
  const char *v26; // rcx
  int v27; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v14 = a12;
  v15 = -1LL;
  v16 = a10;
  if ( a2 )
  {
    if ( a12 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a12[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a12;
    if ( !a12 )
      v23 = "NULL";
    if ( a10 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a10[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a10;
    if ( !a10 )
      v26 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, char *, __int64, const char *, __int64, char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
                            10LL,
                            &a9,
                            8LL,
                            v26,
                            v25,
                            &a11,
                            8LL,
                            v23,
                            v22,
                            0LL);
  }
  if ( a3 )
  {
    if ( v14 )
    {
      v19 = -1LL;
      do
        ++v19;
      while ( v14[v19] );
    }
    if ( !v14 )
      v14 = "NULL";
    if ( v16 )
    {
      do
        ++v15;
      while ( v16[v15] );
      v20 = v15 + 1;
    }
    else
    {
      v20 = 5LL;
    }
    if ( !v16 )
      v16 = "NULL";
    LOWORD(v27) = 10;
    return (_UNKNOWN **)WppAutoLogTrace(
                          Flink,
                          4LL,
                          2LL,
                          &WPP_76ccfc4204be37e1ff60c5115401253e_Traceguids,
                          v27,
                          &a9,
                          8LL,
                          v16,
                          v20,
                          &a11,
                          8LL,
                          v14);
  }
  return result;
}
