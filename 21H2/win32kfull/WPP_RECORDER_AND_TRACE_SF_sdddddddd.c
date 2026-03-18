/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_sdddddddd @ 0x1C024C260
 * Callers:
 *     ?HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@PEBVCMonitorTopology@@@Z @ 0x1C0111DBC (-HasFullscreenState@AdvancedWindowPos@@YA_NPEBUtagWND@@PEBVCMonitorTopology@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_sdddddddd(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        const char *a9,
        ...)
{
  _UNKNOWN **result; // rax
  struct _LIST_ENTRY *Flink; // r14
  __int64 v11; // rbx
  const char *v12; // rdi
  __int64 v15; // rax
  __int64 v16; // rax
  const char *v17; // rcx
  __int64 v18; // rbx
  int v19; // [rsp+28h] [rbp-99h]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+1Fh] BYREF
  __int64 v21; // [rsp+130h] [rbp+6Fh] BYREF
  va_list va; // [rsp+130h] [rbp+6Fh]
  __int64 v23; // [rsp+138h] [rbp+77h] BYREF
  va_list va1; // [rsp+138h] [rbp+77h]
  __int64 v25; // [rsp+140h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+140h] [rbp+7Fh]
  __int64 v27; // [rsp+148h] [rbp+87h] BYREF
  va_list va3; // [rsp+148h] [rbp+87h]
  __int64 v29; // [rsp+150h] [rbp+8Fh] BYREF
  va_list va4; // [rsp+150h] [rbp+8Fh]
  __int64 v31; // [rsp+158h] [rbp+97h] BYREF
  va_list va5; // [rsp+158h] [rbp+97h]
  __int64 v33; // [rsp+160h] [rbp+9Fh] BYREF
  va_list va6; // [rsp+160h] [rbp+9Fh]
  va_list va7; // [rsp+168h] [rbp+A7h] BYREF

  va_start(va7, a9);
  va_start(va6, a9);
  va_start(va5, a9);
  va_start(va4, a9);
  va_start(va3, a9);
  va_start(va2, a9);
  va_start(va1, a9);
  va_start(va, a9);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v25 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v27 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v29 = va_arg(va5, _QWORD);
  va_copy(va6, va5);
  v31 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v33 = va_arg(va7, _QWORD);
  result = &retaddr;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v11 = -1LL;
  v12 = a9;
  if ( a2 )
  {
    if ( a9 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a9[v15] );
      v16 = v15 + 1;
    }
    else
    {
      v16 = 5LL;
    }
    v17 = a9;
    if ( !a9 )
      v17 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
                            54LL,
                            v17,
                            v16,
                            (__int64 *)va,
                            4LL,
                            (__int64 *)va1,
                            4LL,
                            (__int64 *)va2,
                            4LL,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            (__int64 *)va5,
                            4LL,
                            (__int64 *)va6,
                            4LL,
                            va7,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( a9 )
    {
      do
        ++v11;
      while ( a9[v11] );
      v18 = v11 + 1;
    }
    else
    {
      v18 = 5LL;
    }
    if ( !a9 )
      v12 = "NULL";
    LOWORD(v19) = 54;
    return (_UNKNOWN **)WppAutoLogTrace(
                          Flink,
                          5LL,
                          25LL,
                          &WPP_94ffdf537f2d389c4fc27fd51c509f9d_Traceguids,
                          v19,
                          v12,
                          v18,
                          (__int64 *)va,
                          4LL,
                          (__int64 *)va1);
  }
  return result;
}
