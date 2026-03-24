/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x1409C88D0
 * Callers:
 *     VfPendingShouldForce @ 0x1409D59CC (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x1409D6E50 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x1409D751C (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x1409DA194 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
