/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLock @ 0x140A7F1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140A96894 (ViKeIrqlLogAndTrimMemory.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLock(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v4 = retaddr;
  ++dword_140C29FC8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 164LL);
  LOBYTE(v4) = 2;
  v5 = ViKeIrqlLogAndTrimMemory(v4);
  ((void (__fastcall *)(__int64, __int64))pXdvKeAcquireInStackQueuedSpinLock)(a1, a2);
  if ( v5 )
    *(_WORD *)(v5 + 10) = KeGetPcr()->Prcb.Number;
  return VfDeadlockAcquireResource(a1, retaddr);
}
