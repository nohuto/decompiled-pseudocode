/*
 * XREFs of PopDiagTraceIdleResiliencyStart @ 0x140591A0C
 * Callers:
 *     PopDeepSleepEvaluateCallback @ 0x140595FC0 (PopDeepSleepEvaluateCallback.c)
 * Callees:
 *     EtwWriteEx @ 0x140231630 (EtwWriteEx.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

NTSTATUS __fastcall PopDiagTraceIdleResiliencyStart(__int64 a1, int a2, unsigned __int64 a3)
{
  NTSTATUS result; // eax
  __int64 v4; // [rsp+40h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-38h] BYREF
  int *v6; // [rsp+58h] [rbp-28h]
  __int64 v7; // [rsp+60h] [rbp-20h]
  unsigned __int64 *v8; // [rsp+68h] [rbp-18h]
  __int64 v9; // [rsp+70h] [rbp-10h]
  int v10; // [rsp+98h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+A0h] [rbp+20h] BYREF

  v10 = a2;
  if ( PopDiagHandleRegistered )
  {
    v4 = 0LL;
    *(_QWORD *)&UserData.Size = 4LL;
    if ( a3 >= 0xFFFFFFFF )
      a3 = 0xFFFFFFFFLL;
    v7 = 4LL;
    v11 = a3;
    UserData.Ptr = (ULONGLONG)&v4;
    v9 = 4LL;
    v6 = &v10;
    v8 = &v11;
    return EtwWriteEx(PopDiagHandle, &POP_ETW_IDLE_RESILIENCY_START, 0LL, 0, 0LL, 0LL, 3u, &UserData);
  }
  return result;
}
