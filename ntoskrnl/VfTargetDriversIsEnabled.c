/*
 * XREFs of VfTargetDriversIsEnabled @ 0x140AC8614
 * Callers:
 *     IoAllocateIrpEx @ 0x140352E90 (IoAllocateIrpEx.c)
 *     PipDmgGetDriverDmarCompatLevel @ 0x14084274C (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x140ACADD0 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x140ACEA8C (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x140AD0CE4 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x140ADB1D4 (ViWdBeforeCallDriver.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x140AC8528 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
