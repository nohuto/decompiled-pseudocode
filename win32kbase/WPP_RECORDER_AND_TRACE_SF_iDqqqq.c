/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_iDqqqq @ 0x1C0002F14
 * Callers:
 *     NtUserReportInertia @ 0x1C0002CA0 (NtUserReportInertia.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **WPP_RECORDER_AND_TRACE_SF_iDqqqq(
        __int64 a1,
        char a2,
        char a3,
        _DWORD a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        ...)
{
  _UNKNOWN **result; // rax
  struct _LIST_ENTRY *Flink; // rdi
  int v11; // [rsp+28h] [rbp-69h]
  _UNKNOWN *retaddr; // [rsp+A0h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+E8h] [rbp+57h] BYREF
  va_list va; // [rsp+E8h] [rbp+57h]
  __int64 v15; // [rsp+F0h] [rbp+5Fh] BYREF
  va_list va1; // [rsp+F0h] [rbp+5Fh]
  __int64 v17; // [rsp+F8h] [rbp+67h] BYREF
  va_list va2; // [rsp+F8h] [rbp+67h]
  __int64 v19; // [rsp+100h] [rbp+6Fh] BYREF
  va_list va3; // [rsp+100h] [rbp+6Fh]
  __int64 v21; // [rsp+108h] [rbp+77h] BYREF
  va_list va4; // [rsp+108h] [rbp+77h]
  va_list va5; // [rsp+110h] [rbp+7Fh] BYREF

  va_start(va5, a8);
  va_start(va4, a8);
  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v13 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v15 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v17 = va_arg(va3, _QWORD);
  va_copy(va4, va3);
  v19 = va_arg(va4, _QWORD);
  va_copy(va5, va4);
  v21 = va_arg(va5, _QWORD);
  result = &retaddr;
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( a2 )
    result = (_UNKNOWN **)((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
                            a1,
                            43LL,
                            &WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
                            94LL,
                            (__int64 *)va,
                            8LL,
                            (__int64 *)va1,
                            4LL,
                            (__int64 *)va2,
                            8LL,
                            (__int64 *)va3,
                            8LL,
                            (__int64 *)va4,
                            8LL,
                            va5,
                            8LL,
                            0LL);
  if ( a3 )
  {
    LOWORD(v11) = 94;
    return (_UNKNOWN **)WppAutoLogTrace(
                          Flink,
                          4LL,
                          21LL,
                          &WPP_c66de1c2064a3d648a89bd4952f80399_Traceguids,
                          v11,
                          (__int64 *)va,
                          8LL,
                          (__int64 *)va1,
                          4LL,
                          (__int64 *)va2,
                          8LL,
                          (__int64 *)va3,
                          8LL,
                          (__int64 *)va4,
                          8LL,
                          va5,
                          8LL,
                          0LL);
  }
  return result;
}
