/*
 * XREFs of ViTargetIncrementCounter @ 0x140ACCBDC
 * Callers:
 *     VfCheckImageCompliance @ 0x140AC449C (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140AC47A0 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140AC4848 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x140AC48F0 (VfCheckPoolType.c)
 *     VerifierKeAcquireQueuedSpinLock @ 0x140AD05D0 (VerifierKeAcquireQueuedSpinLock.c)
 *     VfHandlePoolAlloc @ 0x140AD1FB0 (VfHandlePoolAlloc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140AD6180 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140AD61E0 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 *     VerifierKeAcquireInStackQueuedSpinLockForDpc @ 0x140AD6280 (VerifierKeAcquireInStackQueuedSpinLockForDpc.c)
 *     VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch @ 0x140AD62E0 (VerifierKeAcquireInStackQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140AD6380 (VerifierKeAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeAcquireSpinLockAtDpcLevel @ 0x140AD6410 (VerifierKeAcquireSpinLockAtDpcLevel.c)
 *     VerifierKeSynchronizeExecution @ 0x140AD6720 (VerifierKeSynchronizeExecution.c)
 *     VerifierKeTryToAcquireQueuedSpinLock @ 0x140AD67A0 (VerifierKeTryToAcquireQueuedSpinLock.c)
 *     VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch @ 0x140AD6840 (VerifierKeTryToAcquireQueuedSpinLockRaiseToSynch.c)
 *     VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140AD68E0 (VerifierKeTryToAcquireSpinLockAtDpcLevel.c)
 *     VerifierPortKeAcquireSpinLockNoXdv @ 0x140AD6A00 (VerifierPortKeAcquireSpinLockNoXdv.c)
 *     ViKeAcquireSpinLockCommon @ 0x140AD6CEC (ViKeAcquireSpinLockCommon.c)
 *     ViFaultsInjectionNotification @ 0x140AD7958 (ViFaultsInjectionNotification.c)
 * Callees:
 *     VfAvlLookupTreeNode @ 0x14020A004 (VfAvlLookupTreeNode.c)
 *     VfAvlCleanupLockContext @ 0x14020A374 (VfAvlCleanupLockContext.c)
 *     VfAvlInitializeLockContext @ 0x140465E48 (VfAvlInitializeLockContext.c)
 *     VfDriverIsKernelImageAddress @ 0x140ACB714 (VfDriverIsKernelImageAddress.c)
 *     ViTargetUpdateTreeAllowed @ 0x140ACCE94 (ViTargetUpdateTreeAllowed.c)
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
