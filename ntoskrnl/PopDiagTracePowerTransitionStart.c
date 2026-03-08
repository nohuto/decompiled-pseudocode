/*
 * XREFs of PopDiagTracePowerTransitionStart @ 0x14098E148
 * Callers:
 *     PopIssueActionRequest @ 0x140986CA4 (PopIssueActionRequest.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     EtwWriteStartScenario @ 0x14085A170 (EtwWriteStartScenario.c)
 */

__int64 __fastcall PopDiagTracePowerTransitionStart(int a1, int a2)
{
  __int64 result; // rax
  int v3; // [rsp+30h] [rbp-50h] BYREF
  __int64 v4; // [rsp+38h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v5; // [rsp+40h] [rbp-40h] BYREF
  int *v6; // [rsp+50h] [rbp-30h]
  __int64 v7; // [rsp+58h] [rbp-28h]
  __int64 *v8; // [rsp+60h] [rbp-20h]
  __int64 v9; // [rsp+68h] [rbp-18h]
  int v10; // [rsp+98h] [rbp+18h] BYREF

  v10 = a2;
  if ( PopDiagHandleRegistered )
  {
    v3 = a1;
    v4 = MEMORY[0xFFFFF78000000014];
    v5.Ptr = (ULONGLONG)&v3;
    v6 = &v10;
    v8 = &v4;
    *(_QWORD *)&v5.Size = 4LL;
    v7 = 4LL;
    v9 = 8LL;
    return EtwWriteStartScenario(
             (ULONG_PTR *)PopDiagHandle,
             &POP_ETW_EVENT_POWERTRANSITION_START,
             &PopDiagActivityId,
             3u,
             &v5);
  }
  return result;
}
