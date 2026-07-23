/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x1409C98C0
 * Callers:
 *     VfPendingShouldForce @ 0x1409D69BC (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x1409D7E40 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x1409D850C (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x1409DB184 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
