/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sscc @ 0x1C01FBA04
 * Callers:
 *     _anonymous_namespace_::IsMouseButtonSwapped @ 0x1C01F892C (_anonymous_namespace_--IsMouseButtonSwapped.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall WPP_RECORDER_AND_TRACE_SF_sscc(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9,
        const char *a10)
{
  _UNKNOWN **result; // rax
  const char *v11; // rsi
  const char *v12; // rdi
  __int64 v13; // rbx
  struct _LIST_ENTRY *Flink; // r14
  __int64 v17; // rdx
  __int64 v18; // rax
  const char *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rbx
  int v22; // [rsp+20h] [rbp-68h]
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = &retaddr;
  v11 = a9;
  v12 = a10;
  v13 = -1LL;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( a2 )
  {
    if ( a10 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( a10[v17] );
    }
    if ( a9 )
    {
      v18 = -1LL;
      do
        ++v18;
      while ( a9[v18] );
    }
    WORD1(v19) = WORD1(a9);
    if ( !a9 )
      v19 = "NULL";
    HIWORD(v22) = WORD1(v19);
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *))WPP_MAIN_CB.DeviceQueue.32)(
                            a1,
                            43LL,
                            &WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
  }
  if ( a3 )
  {
    if ( a10 )
    {
      v20 = -1LL;
      do
        ++v20;
      while ( a10[v20] );
    }
    if ( !a10 )
      v12 = "NULL";
    if ( a9 )
    {
      do
        ++v13;
      while ( a9[v13] );
      v21 = v13 + 1;
    }
    else
    {
      v21 = 5LL;
    }
    if ( !a9 )
      v11 = "NULL";
    LOWORD(v22) = 11;
    return (_UNKNOWN **)WppAutoLogTrace(
                          Flink,
                          4LL,
                          6LL,
                          &WPP_f645abfb8f443aa578495af70e8984ab_Traceguids,
                          v22,
                          v11,
                          v21,
                          v12);
  }
  return result;
}
