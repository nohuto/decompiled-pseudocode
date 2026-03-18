/*
 * XREFs of VfDeadlockBeforeCallDriver @ 0x140A98064
 * Callers:
 *     VfBeforeCallDriver @ 0x140A8CC6C (VfBeforeCallDriver.c)
 * Callees:
 *     ViDeadlockDetectionTryConvertSharedToExclusive @ 0x1406015A4 (ViDeadlockDetectionTryConvertSharedToExclusive.c)
 *     ViLowerIrql @ 0x140601864 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1406018DC (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockAddThread @ 0x140A98D0C (ViDeadlockAddThread.c)
 *     ViDeadlockAllocate @ 0x140A98DCC (ViDeadlockAllocate.c)
 *     ViDeadlockDetectionLock @ 0x140A994C4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140A994FC (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockFree @ 0x140A997C0 (ViDeadlockFree.c)
 *     ViDeadlockSearchThread @ 0x140A9A000 (ViDeadlockSearchThread.c)
 */

__int64 __fastcall VfDeadlockBeforeCallDriver(__int64 a1)
{
  unsigned int v1; // esi
  void *v2; // rbx
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int v4; // edi
  unsigned __int8 v5; // r14
  __int64 v6; // rax

  v1 = 0;
  v2 = 0LL;
  if ( (*(_DWORD *)(a1 + 16) & 2) == 0 )
    return 0LL;
  if ( (unsigned int)KeNumberProcessors_0 > 4 )
    return 0LL;
  if ( !ViDeadlockGlobals )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( ViDeadlockDetectionEnabled )
  {
    v2 = (void *)ViDeadlockAllocate(3LL);
    if ( !v2 )
      return 0LL;
  }
  v4 = 0;
  v5 = ViRaiseIrqlToDpcLevel();
  while ( 1 )
  {
    ViDeadlockDetectionLock(v4);
    v6 = ViDeadlockSearchThread(CurrentThread);
    if ( v6 )
      break;
    if ( !ViDeadlockDetectionEnabled )
      goto LABEL_14;
    if ( v4 || (v4 = 1, ViDeadlockDetectionTryConvertSharedToExclusive()) )
    {
      v6 = ViDeadlockAddThread(CurrentThread, v2);
      v2 = 0LL;
      break;
    }
    ViDeadlockDetectionUnlock(0LL);
  }
  _InterlockedIncrement((volatile signed __int32 *)(v6 + 44));
  v1 = 1;
LABEL_14:
  ViDeadlockDetectionUnlock(v4);
  ViLowerIrql(v5);
  if ( v2 )
    ViDeadlockFree(v2);
  return v1;
}
