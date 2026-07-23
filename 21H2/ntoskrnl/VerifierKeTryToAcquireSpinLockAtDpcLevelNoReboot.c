/*
 * XREFs of VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot @ 0x1409DC8C0
 * Callers:
 *     <none>
 * Callees:
 *     ViKeTryToAcquireSpinLockAtDpcLevelCommon @ 0x1409DD3D0 (ViKeTryToAcquireSpinLockAtDpcLevelCommon.c)
 */

__int64 __fastcall VerifierKeTryToAcquireSpinLockAtDpcLevelNoReboot(ULONG_PTR a1)
{
  return ViKeTryToAcquireSpinLockAtDpcLevelCommon(a1);
}
