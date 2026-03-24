/*
 * XREFs of VfDeadlockAfterCallDriver @ 0x1409DDCB4
 * Callers:
 *     VfAfterCallDriver @ 0x1409D0E84 (VfAfterCallDriver.c)
 * Callees:
 *     ViLowerIrql @ 0x1405A24B8 (ViLowerIrql.c)
 *     ViRaiseIrqlToDpcLevel @ 0x1405A2530 (ViRaiseIrqlToDpcLevel.c)
 *     ViDeadlockDetectionLock @ 0x1409DF2AC (ViDeadlockDetectionLock.c)
 *     ViDeadlockDetectionUnlock @ 0x1409DF2E4 (ViDeadlockDetectionUnlock.c)
 *     ViDeadlockSearchThread @ 0x1409DFDD8 (ViDeadlockSearchThread.c)
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
