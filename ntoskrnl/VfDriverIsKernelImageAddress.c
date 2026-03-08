/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x140AC7714
 * Callers:
 *     MmIsDriverVerifying @ 0x140303C10 (MmIsDriverVerifying.c)
 *     VfTargetDriversGetVerifierData @ 0x140AC8528 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x140AC8BDC (ViTargetIncrementCounter.c)
 *     VfPendingShouldForce @ 0x140ACEA8C (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x140AD0CE4 (VfCheckUserHandle.c)
 * Callees:
 *     <none>
 */

bool __fastcall VfDriverIsKernelImageAddress(unsigned __int64 a1)
{
  bool result; // al

  result = 0;
  if ( ViDriverKernelBase )
  {
    if ( a1 >= ViDriverKernelBase )
      return a1 < ViDriverKernelEnd;
  }
  return result;
}
