/*
 * XREFs of PspGetNextChildJob @ 0x1406FF7C4
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1406FF880 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x140302BD0 (ObReferenceObjectSafeWithTag.c)
 *     PspUnlockJob @ 0x1406FFE90 (PspUnlockJob.c)
 *     PspLockJobShared @ 0x1406FFEFC (PspLockJobShared.c)
 */

_QWORD *__fastcall PspGetNextChildJob(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *v5; // rbp
  _QWORD *v6; // rbx

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  PspLockJobShared(a1, CurrentThread);
  if ( a2 )
    v6 = (_QWORD *)a2[154];
  else
    v6 = *(_QWORD **)(a1 + 1248);
  while ( v6 != (_QWORD *)(a1 + 1248) )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v6 - 154)) )
    {
      v5 = v6 - 154;
      break;
    }
    v6 = (_QWORD *)*v6;
  }
  PspUnlockJob(a1, CurrentThread);
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v5;
}
