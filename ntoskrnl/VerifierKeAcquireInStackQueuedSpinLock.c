/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLock @ 0x140ABD260
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockCommon @ 0x140AD21E0 (VerifierKeAcquireInStackQueuedSpinLockCommon.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLock(__int64 a1, __int64 a2)
{
  void *retaddr; // [rsp+28h] [rbp+0h]

  return VerifierKeAcquireInStackQueuedSpinLockCommon(a1, retaddr, a2);
}
