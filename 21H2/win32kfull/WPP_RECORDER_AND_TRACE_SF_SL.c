/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_SL @ 0x1C009A7C0
 * Callers:
 *     xxxSwitchDesktop @ 0x1C00B0E54 (xxxSwitchDesktop.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_SL(
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
  struct _LIST_ENTRY *Flink; // r14
  const char *v11; // rbx
  __int64 v12; // rdi
  __int64 v15; // rsi
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  const char *v19; // rcx
  int v20; // [rsp+20h] [rbp-48h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF
  va_list va; // [rsp+B8h] [rbp+50h] BYREF

  va_start(va, a9);
  result = &retaddr;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v11 = a9;
  v12 = -1LL;
  v15 = 10LL;
  if ( a2 )
  {
    if ( a9 )
    {
      v17 = -1LL;
      do
        ++v17;
      while ( *(_WORD *)&a9[2 * v17] );
      v18 = 2 * v17 + 2;
    }
    else
    {
      v18 = 10LL;
    }
    v19 = a9;
    if ( !a9 )
      v19 = L"NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_d78c2f93cefb39adad771009d44421f9_Traceguids,
                            26LL,
                            v19,
                            v18,
                            va,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    v16 = a9 == 0LL;
    if ( a9 )
    {
      do
        ++v12;
      while ( *(_WORD *)&a9[2 * v12] );
      v15 = 2 * v12 + 2;
      v16 = a9 == 0LL;
    }
    if ( v16 )
      v11 = L"NULL";
    LOWORD(v20) = 26;
    return (_UNKNOWN **)WppAutoLogTrace(
                          Flink,
                          4LL,
                          3LL,
                          &WPP_d78c2f93cefb39adad771009d44421f9_Traceguids,
                          v20,
                          v11,
                          v15,
                          va,
                          4LL,
                          0LL);
  }
  return result;
}
