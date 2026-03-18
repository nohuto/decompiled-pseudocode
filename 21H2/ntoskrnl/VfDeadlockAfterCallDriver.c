/*
 * XREFs of VfDeadlockAfterCallDriver @ 0x140A97FF4
 * Callers:
 *     VfAfterCallDriver @ 0x140A8CA78 (VfAfterCallDriver.c)
 * Callees:
 *     ViLowerIrql @ 0x140601864 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1406018DC (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x140A994C4 (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x140A994FC (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x140A9A000 (ViDeadlockSearchThread.c)
 */

void __fastcall VfDeadlockAfterCallDriver(int a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 v2; // di
  __int64 v3; // rax

  if ( a1 && ViDeadlockDetectionEnabled && (unsigned int)KeNumberProcessors_0 <= 4 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = ViRaiseIrqlToDpcLevel();
    ViDeadlockDetectionLock(0LL);
    v3 = ViDeadlockSearchThread(CurrentThread);
    if ( v3 )
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 44));
    ViDeadlockDetectionUnlock(0LL);
    ViLowerIrql(v2);
  }
}
