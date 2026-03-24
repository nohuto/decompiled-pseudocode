/*
 * XREFs of VfTargetDriversIsEnabled @ 0x1409D6F40
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x14076DAD4 (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409D1898 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x1409D59CC (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x1409DA194 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x1409E0D58 (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409E11B0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409E1300 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409E1420 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D6E50 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
