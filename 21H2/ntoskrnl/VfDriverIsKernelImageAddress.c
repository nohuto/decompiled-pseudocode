/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x140A89D2C
 * Callers:
 *     MmIsDriverVerifying @ 0x1402D87B0 (MmIsDriverVerifying.c)
 *     VfTargetDriversGetVerifierData @ 0x140A8ABF8 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 *     VfPendingShouldForce @ 0x140A910FC (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x140A9466C (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  return ViDriverKernelBase && a1 >= ViDriverKernelBase && a1 < ViDriverKernelEnd;
}
