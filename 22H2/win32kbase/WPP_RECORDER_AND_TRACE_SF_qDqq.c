/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qDqq @ 0x1C013EDC8
 * Callers:
 *     EtwTraceUIPIHookError @ 0x1C013BB10 (EtwTraceUIPIHookError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qDqq(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
{
  struct _LIST_ENTRY *Flink; // rdi
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-58h]
  __int64 v12; // [rsp+C0h] [rbp+48h] BYREF
  va_list va; // [rsp+C0h] [rbp+48h]
  __int64 v14; // [rsp+C8h] [rbp+50h] BYREF
  va_list va1; // [rsp+C8h] [rbp+50h]
  __int64 v16; // [rsp+D0h] [rbp+58h] BYREF
  va_list va2; // [rsp+D0h] [rbp+58h]
  va_list va3; // [rsp+D8h] [rbp+60h] BYREF

  va_start(va3, a8);
  va_start(va2, a8);
  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v14 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v16 = va_arg(va3, _QWORD);
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, __int64 *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
               a1,
               43LL,
               &WPP_638838901a81363f021dd330a5466106_Traceguids,
               11LL,
               (__int64 *)va,
               8LL,
               (__int64 *)va1,
               4LL,
               (__int64 *)va2,
               8LL,
               va3,
               8LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 11;
    return WppAutoLogTrace(
             Flink,
             4LL,
             14LL,
             &WPP_638838901a81363f021dd330a5466106_Traceguids,
             v11,
             (__int64 *)va,
             8LL,
             (__int64 *)va1);
  }
  return result;
}
