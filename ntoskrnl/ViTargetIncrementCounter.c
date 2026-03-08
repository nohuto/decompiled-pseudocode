/*
 * XREFs of ViTargetIncrementCounter @ 0x140AC8BDC
 * Callers:
 *     VfCheckImageCompliance @ 0x140AC049C (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140AC07A0 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140AC0848 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x140AC08F0 (VfCheckPoolType.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140ACC5D0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VfHandlePoolAlloc @ 0x140ACDFB0 (VfHandlePoolAlloc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140AD2180 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140AD21E0 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x140AD2280 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140AD22E0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140AD2380 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140AD2410 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140AD2720 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140AD27A0 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140AD2840 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140AD28E0 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140AD2A00 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140AD2CEC (ViKeAcquireSpinLockCommon.c)
 *     ViFaultsInjectionNotification @ 0x140AD3958 (ViFaultsInjectionNotification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x140303680 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x1403039F0 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x14045DE58 (VfAvlInitializeLockContext.c)
 *     VfDriverIsKernelImageAddress @ 0x140AC7714 (VfDriverIsKernelImageAddress.c)
 *     ViTargetUpdateTreeAllowed @ 0x140AC8E94 (ViTargetUpdateTreeAllowed.c)
 */

void __fastcall ViTargetIncrementCounter(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // r8
  int v4; // eax
  unsigned int v5; // edx
  unsigned __int64 v6; // r8
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int128 v9; // [rsp+20h] [rbp-18h] BYREF

  v2 = (unsigned int)a2;
  v9 = 0LL;
  if ( (unsigned int)ViTargetUpdateTreeAllowed(a1, a2, a1) )
  {
    LOBYTE(v4) = VfDriverIsKernelImageAddress(v3);
    if ( !v4 )
    {
      VfAvlInitializeLockContext((__int64)&v9, 1);
      v7 = VfAvlLookupTreeNode((__int64 *)&ViTargetDriversAvl, (__int64)&v9, v6, v5);
      if ( v7 )
      {
        v8 = v7[7];
        if ( v8 )
          _InterlockedIncrement((volatile signed __int32 *)(v2 + v8));
      }
      VfAvlCleanupLockContext((__int64)&v9);
    }
  }
}
