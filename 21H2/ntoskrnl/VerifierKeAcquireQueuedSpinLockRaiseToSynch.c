/*
 * XREFs of VerifierKeAcquireQueuedSpinLockRaiseToSynch @ 0x140A95CB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 *     ViKeIrqlLogAndTrimMemory @ 0x140A96894 (ViKeIrqlLogAndTrimMemory.c)
 */

__int64 __fastcall VerifierKeAcquireQueuedSpinLockRaiseToSynch(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  ++dword_140C29FC8;
  v2 = retaddr;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 164LL);
  LOBYTE(v2) = 12;
  v3 = ViKeIrqlLogAndTrimMemory(v2);
  result = ((__int64 (__fastcall *)(__int64))pXdvKeAcquireQueuedSpinLockRaiseToSynch)(a1);
  if ( v3 )
    *(_WORD *)(v3 + 10) = KeGetPcr()->Prcb.Number;
  return result;
}
