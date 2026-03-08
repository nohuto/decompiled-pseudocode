/*
 * XREFs of PspGetNextChildJob @ 0x1406FB938
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FB7C8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x14022BD30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140312100 (ObfDereferenceObjectWithTag.c)
 *     PspUnlockJob @ 0x1406FBF7C (PspUnlockJob.c)
 *     PspLockJobShared @ 0x1406FBFC0 (PspLockJobShared.c)
 */

_QWORD *__fastcall PspGetNextChildJob(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v5; // rbp
  _QWORD **v6; // rsi
  _QWORD *v7; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  PspLockJobShared(a1, CurrentThread);
  v6 = (_QWORD **)(a1 + 1272);
  if ( a2 )
    v7 = (_QWORD *)a2[157];
  else
    v7 = *v6;
  while ( v7 != v6 )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v7 - 157)) )
    {
      v5 = v7 - 157;
      break;
    }
    v7 = (_QWORD *)*v7;
  }
  PspUnlockJob(a1, CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v5;
}
