/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qddddsdddd @ 0x1C01D3780
 * Callers:
 *     SnapshotWindowRects @ 0x1C01D31E8 (SnapshotWindowRects.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_qddddsdddd(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        ...)
{
  _UNKNOWN **result; // rax
  struct _LIST_ENTRY *Flink; // r14
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  const char *v16; // rax
  int v17; // [rsp+28h] [rbp-A9h]
  _UNKNOWN *retaddr; // [rsp+F0h] [rbp+1Fh] BYREF
  __int64 v19; // [rsp+138h] [rbp+67h] BYREF
  va_list va; // [rsp+138h] [rbp+67h]
  __int64 v21; // [rsp+140h] [rbp+6Fh] BYREF
  va_list va1; // [rsp+140h] [rbp+6Fh]
  __int64 v23; // [rsp+148h] [rbp+77h] BYREF
  va_list va2; // [rsp+148h] [rbp+77h]
  __int64 v25; // [rsp+150h] [rbp+7Fh] BYREF
  va_list va3; // [rsp+150h] [rbp+7Fh]
  __int64 v27; // [rsp+158h] [rbp+87h] BYREF
  va_list va4; // [rsp+158h] [rbp+87h]
  const char *v29; // [rsp+160h] [rbp+8Fh]
  __int64 v30; // [rsp+168h] [rbp+97h] BYREF
  va_list va5; // [rsp+168h] [rbp+97h]
  __int64 v32; // [rsp+170h] [rbp+9Fh] BYREF
  va_list va6; // [rsp+170h] [rbp+9Fh]
  __int64 v34; // [rsp+178h] [rbp+A7h] BYREF
  va_list va7; // [rsp+178h] [rbp+A7h]
  va_list va8; // [rsp+180h] [rbp+AFh] BYREF

  va_start(va8, a8);
  va_start(va7, a8);
  va_start(va6, a8);
  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v19 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v21 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v23 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v25 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v27 = va_arg(va5, _QWORD);
  v29 = va_arg(va5, const char *);
  va_copy(va6, va5);
  v30 = va_arg(va6, _QWORD);
  va_copy(va7, va6);
  v32 = va_arg(va7, _QWORD);
  va_copy(va8, va7);
  v34 = va_arg(va8, _QWORD);
  result = &retaddr;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  v10 = -1LL;
  v11 = (__int64)v29;
  if ( a2 )
  {
    if ( v29 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( v29[v14] );
      v15 = v14 + 1;
    }
    else
    {
      v15 = 5LL;
    }
    v16 = v29;
    if ( !v29 )
      v16 = "NULL";
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, const char *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
                            a1,
                            43LL,
                            &WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
                            32LL,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            4LL,
                            (__int64 *)va2,
                            4LL,
                            (__int64 *)va3,
                            4LL,
                            (__int64 *)va4,
                            4LL,
                            v16,
                            v15,
                            (__int64 *)va5,
                            4LL,
                            (__int64 *)va6,
                            4LL,
                            (__int64 *)va7,
                            4LL,
                            va8,
                            4LL,
                            0LL);
  }
  if ( a3 )
  {
    if ( v11 )
    {
      do
        ++v10;
      while ( *(_BYTE *)(v11 + v10) );
    }
    LOWORD(v17) = 32;
    return (_UNKNOWN **)WppAutoLogTrace(
                          Flink,
                          4LL,
                          23LL,
                          &WPP_638f61f5370132f305bd20c35bb3250c_Traceguids,
                          v17,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          4LL,
                          (__int64 *)va2);
  }
  return result;
}
