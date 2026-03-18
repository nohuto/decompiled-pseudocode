/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x140A9A170
 * Callers:
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x140A985B4 (VfDeadlockReleaseResource.c)
 * Callees:
 *     ViLowerIrql @ 0x140601864 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1406018DC (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140A994C4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140A994FC (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x140A9A000 (ViDeadlockSearchThread.c)
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
