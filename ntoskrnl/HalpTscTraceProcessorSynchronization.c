/*
 * XREFs of HalpTscTraceProcessorSynchronization @ 0x1403884E4
 * Callers:
 *     HalpTscAdvSynchToLeader @ 0x140388164 (HalpTscAdvSynchToLeader.c)
 *     HalpTscAdvSynchToTarget @ 0x140507F18 (HalpTscAdvSynchToTarget.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     EtwEventEnabled @ 0x140231870 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

char HalpTscTraceProcessorSynchronization(int a1, int a2, ...)
{
  _UNKNOWN **v2; // rax
  REGHANDLE v3; // rbx
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-21h] BYREF
  int *v6; // [rsp+58h] [rbp-11h]
  int v7; // [rsp+60h] [rbp-9h]
  int v8; // [rsp+64h] [rbp-5h]
  va_list v9; // [rsp+68h] [rbp-1h]
  int v10; // [rsp+70h] [rbp+7h]
  int v11; // [rsp+74h] [rbp+Bh]
  va_list v12; // [rsp+78h] [rbp+Fh]
  int v13; // [rsp+80h] [rbp+17h]
  int v14; // [rsp+84h] [rbp+1Bh]
  va_list v15; // [rsp+88h] [rbp+1Fh]
  int v16; // [rsp+90h] [rbp+27h]
  int v17; // [rsp+94h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+57h] BYREF
  int v19; // [rsp+C8h] [rbp+5Fh] BYREF
  int v20; // [rsp+D0h] [rbp+67h] BYREF
  __int64 v21; // [rsp+D8h] [rbp+6Fh] BYREF
  va_list va; // [rsp+D8h] [rbp+6Fh]
  __int64 v23; // [rsp+E0h] [rbp+77h] BYREF
  va_list va1; // [rsp+E0h] [rbp+77h]
  va_list va2; // [rsp+E8h] [rbp+7Fh] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v21 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v23 = va_arg(va2, _QWORD);
  v2 = &retaddr;
  v20 = a2;
  v19 = a1;
  if ( HalpDiagnosticEventsRegistered )
  {
    v3 = HalpDiagnosticEventHandle;
    LOBYTE(v2) = EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TIMER_PROC_SYNCH_REPORT);
    if ( (_BYTE)v2 )
    {
      UserData.Reserved = 0;
      v8 = 0;
      v11 = 0;
      v14 = 0;
      v17 = 0;
      UserData.Ptr = (ULONGLONG)&v19;
      v6 = &v20;
      UserData.Size = 4;
      va_copy(v9, va);
      va_copy(v12, va1);
      va_copy(v15, va2);
      v7 = 4;
      v10 = 8;
      v13 = 8;
      v16 = 4;
      LOBYTE(v2) = EtwWriteEx(v3, &HAL_ETW_EVENT_TIMER_PROC_SYNCH_REPORT, 0LL, 0, 0LL, 0LL, 5u, &UserData);
    }
  }
  return (char)v2;
}
