/*
 * XREFs of ViIsThreadInsidePagingCodePaths @ 0x1409DFF58
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1409DD5D8 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1409DE348 (VfDeadlockReleaseResource.c)
 * Callees:
 *     ViLowerIrql @ 0x1405A23F8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405A2470 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1409DF2BC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409DF2F4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x1409DFDE8 (ViDeadlockSearchThread.c)
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
