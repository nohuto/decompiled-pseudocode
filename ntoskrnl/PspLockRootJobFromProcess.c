/*
 * XREFs of PspLockRootJobFromProcess @ 0x1406F93EC
 * Callers:
 *     PspSendProcessNotificationToJobChain @ 0x1406F84CC (PspSendProcessNotificationToJobChain.c)
 *     PspRemoveProcessFromJobChain @ 0x1406FB110 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     PspUnlockJob @ 0x1406FBF7C (PspUnlockJob.c)
 *     PspLockJobExclusive @ 0x1406FC178 (PspLockJobExclusive.c)
 */

__int64 __fastcall PspLockRootJobFromProcess(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v6; // rdi
  __int64 result; // rax
  __int64 v9; // [rsp+40h] [rbp+8h]
  __int64 i; // [rsp+50h] [rbp+18h]

  v9 = *(_QWORD *)(a1 + 1296);
  v6 = a2;
  for ( i = *(_QWORD *)(v9 + 1296); ; i = *(_QWORD *)(v9 + 1296) )
  {
    PspLockJobExclusive(i, a2);
    if ( v9 == *(_QWORD *)(a1 + 1296) && i == *(_QWORD *)(v9 + 1296) )
      break;
    PspUnlockJob(i, v6);
    a2 = v6;
    v9 = *(_QWORD *)(a1 + 1296);
  }
  *a3 = v9;
  result = i;
  *a4 = i;
  return result;
}
