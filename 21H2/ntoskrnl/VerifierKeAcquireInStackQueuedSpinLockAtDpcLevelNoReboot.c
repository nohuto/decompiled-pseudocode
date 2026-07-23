/*
 * XREFs of VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot @ 0x1409DB660
 * Callers:
 *     <none>
 * Callees:
 *     VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon @ 0x1409DB598 (VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon.c)
 */

__int64 __fastcall VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelNoReboot(ULONG_PTR a1, ULONG_PTR a2)
{
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  return VerifierKeAcquireInStackQueuedSpinLockAtDpcLevelCommon(a1, retaddr, a2);
}
