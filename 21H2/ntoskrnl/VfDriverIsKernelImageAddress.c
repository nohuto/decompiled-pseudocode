/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x1409C88C0
 * Callers:
 *     VfPendingShouldForce @ 0x1409D59BC (VfPendingShouldForce.c)
 *     VfTargetDriversGetVerifierData @ 0x1409D6E40 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x1409D750C (ViTargetIncrementCounter.c)
 *     VfCheckUserHandle @ 0x1409DA184 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
