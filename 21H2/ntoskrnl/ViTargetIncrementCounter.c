/*
 * XREFs of ViTargetIncrementCounter @ 0x140A8B2AC
 * Callers:
 *     VerifierKeAcquireInStackQueuedSpinLock @ 0x140A7F1D0 (VerifierKeAcquireInStackQueuedSpinLock.c)
 *     VfCheckImageCompliance @ 0x140A82B0C (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140A82E08 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140A82EB0 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x140A82F58 (VfCheckPoolType.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140A8ECA0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VfHandlePoolAlloc @ 0x140A90660 (VfHandlePoolAlloc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140A95B00 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x140A95B80 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140A95C00 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140A95CB0 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140A95D30 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeRaiseIrqlToDpcLevel @ 0x140A95F50 (VerifierKeRaiseIrqlToDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140A96220 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140A962A0 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140A96330 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140A963C0 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierKfRaiseIrql @ 0x140A96540 (VerifierKfRaiseIrql.c)
 *     VerifierPortKeAcquireSpinLock @ 0x140A965D0 (VerifierPortKeAcquireSpinLock.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140A96660 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViFaultsInjectionNotification @ 0x140A974B4 (ViFaultsInjectionNotification.c)
 * Callees:
 *     VfAvlCleanupLockContext @ 0x1402D81DC (VfAvlCleanupLockContext.c)
 *     VfAvlLookupTreeNode @ 0x1402D8518 (VfAvlLookupTreeNode.c)
 *     VfAvlInitializeLockContext @ 0x14045F6C8 (VfAvlInitializeLockContext.c)
 *     VfDriverIsKernelImageAddress @ 0x140A89D2C (VfDriverIsKernelImageAddress.c)
 *     ViTargetUpdateTreeAllowed @ 0x140A8B564 (ViTargetUpdateTreeAllowed.c)
 */

char __fastcall ViTargetIncrementCounter(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int updated; // eax
  unsigned __int64 v4; // r8
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int128 v10; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned int)a2;
  v10 = 0LL;
  updated = ViTargetUpdateTreeAllowed(a1, a2, a1);
  if ( updated )
  {
    updated = VfDriverIsKernelImageAddress(v4);
    if ( !updated )
    {
      VfAvlInitializeLockContext((__int64)&v10, 1);
      v7 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v10, v6, v5);
      if ( v7 )
      {
        v8 = v7[7];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v2 + v8));
      }
      LOBYTE(updated) = VfAvlCleanupLockContext((__int64)&v10);
    }
  }
  return updated;
}
