/*
 * XREFs of VerifierKeTryToAcquireSpinLockAtDpcLevel @ 0x140A963C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 *     VfDeadlockAcquireResource @ 0x140A97900 (VfDeadlockAcquireResource.c)
 */

char __fastcall VerifierKeTryToAcquireSpinLockAtDpcLevel(__int64 a1)
{
  char v2; // bl
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  ++dword_140C29FC8;
  if ( (MmVerifierData & 0x1000) != 0 )
    ViTargetIncrementCounter(retaddr, 164LL);
  v2 = ((__int64 (__fastcall *)(__int64))pXdvKeTryToAcquireSpinLockAtDpcLevel)(a1);
  if ( v2 )
    VfDeadlockAcquireResource(a1, retaddr);
  return v2;
}
