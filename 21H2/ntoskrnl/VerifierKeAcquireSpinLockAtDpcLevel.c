/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevel @ 0x140A95D30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevel(__int64 a1)
{
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ++dword_140C29FC8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 164LL);
  ((void (__fastcall *)(__int64))pXdvKeAcquireSpinLockAtDpcLevel)(a1);
  return VfDeadlockAcquireResource(a1, retaddr);
}
