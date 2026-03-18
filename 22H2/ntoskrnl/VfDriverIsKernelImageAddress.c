/*
 * XREFs of VfDriverIsKernelImageAddress @ 0x140ACB714
 * Callers:
 *     MmIsDriverVerifying @ 0x14020A590 (MmIsDriverVerifying.c)
 *     VfTargetDriversGetVerifierData @ 0x140ACC528 (VfTargetDriversGetVerifierData.c)
 *     ViTargetIncrementCounter @ 0x140ACCBDC (ViTargetIncrementCounter.c)
 *     VfPendingShouldForce @ 0x140AD2A8C (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x140AD4CE4 (VfCheckUserHandle.c)
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
