/*
 * XREFs of VerifierKeAcquireSpinLockAtDpcLevel @ 0x1409DB990
 * Callers:
 *     <none>
 * Callees:
 *     ViKeAcquireSpinLockAtDpcLevelCommon @ 0x1409DCEF0 (ViKeAcquireSpinLockAtDpcLevelCommon.c)
 *     VfDeadlockAcquireResource @ 0x1409DE5C8 (VfDeadlockAcquireResource.c)
 */

__int64 __fastcall VerifierKeAcquireSpinLockAtDpcLevel(ULONG_PTR a1)
{
  int v1; // ebx
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v1 = a1;
  ViKeAcquireSpinLockAtDpcLevelCommon(a1);
  return VfDeadlockAcquireResource(v1, retaddr);
}
