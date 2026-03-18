/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_qD @ 0x1C01ACA90
 * Callers:
 *     rimObsUpdateInputObserverRegistration @ 0x1C01AF70C (rimObsUpdateInputObserverRegistration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_qD(__int64 a1, char a2, char a3, __int64 a4, int a5, int a6, int a7, int a8, ...)
{
  struct _LIST_ENTRY *Flink; // rdi
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+A0h] [rbp+48h] BYREF
  va_list va; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  Flink = WPP_MAIN_CB.Queue.ListEntry.Flink;
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, void *, __int64, __int64 *, __int64, char *, __int64, _QWORD))WPP_MAIN_CB.DeviceQueue.32)(
               a1,
               43LL,
               &WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
               39LL,
               (__int64 *)va,
               8LL,
               va1,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = 39;
    return WppAutoLogTrace(
             Flink,
             4LL,
             1LL,
             &WPP_c696d146d7263bd817038d8ba47edda4_Traceguids,
             v11,
             (__int64 *)va,
             8LL,
             va1);
  }
  return result;
}
