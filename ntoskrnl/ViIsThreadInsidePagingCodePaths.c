/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x140AD6FA0
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140AD3DAC (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x140AD4ECC (VfDeadlockReleaseResource.c)
 * Callees:
 *     ViLowerIrql @ 0x1405CF698 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405CF710 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140AD5DD8 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140AD5E10 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x140AD6E28 (ViDeadlockSearchThread.c)
 */

_BOOL8 ViIsThreadInsidePagingCodePaths()
{
  struct _KTHREAD *CurrentThread; // rbx
  BOOL v1; // edi
  unsigned __int8 v2; // si
  _QWORD *v3; // rax

  CurrentThread = KeGetCurrentThread();
  v1 = 0;
  v2 = ViRaiseIrqlToDpcLevel();
  ViDeadlockDetectionLock(0);
  v3 = ViDeadlockSearchThread((unsigned __int64)CurrentThread);
  if ( v3 )
    v1 = *((_DWORD *)v3 + 11) != 0;
  ViDeadlockDetectionUnlock(0);
  ViLowerIrql(v2);
  return v1;
}
