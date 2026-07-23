/*
 * XREFs of VfTargetDriversIsEnabled @ 0x1409D7F30
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x14076E5C4 (PipDmgGetDriverDmarCompatLevel.c)
 *     ViIrpCheckKernelAddressForIrp @ 0x1409D2888 (ViIrpCheckKernelAddressForIrp.c)
 *     VfPendingShouldForce @ 0x1409D69BC (VfPendingShouldForce.c)
 *     VfCheckUserHandle @ 0x1409DB184 (VfCheckUserHandle.c)
 *     ViWdBeforeCallDriver @ 0x1409E1D48 (ViWdBeforeCallDriver.c)
 *     VerifierExInitializeLookasideListEx @ 0x1409E21A0 (VerifierExInitializeLookasideListEx.c)
 *     VerifierExInitializeNPagedLookasideList @ 0x1409E22F0 (VerifierExInitializeNPagedLookasideList.c)
 *     VerifierExInitializePagedLookasideList @ 0x1409E2410 (VerifierExInitializePagedLookasideList.c)
 * Callees:
 *     VfTargetDriversGetVerifierData @ 0x1409D7E40 (VfTargetDriversGetVerifierData.c)
 */

__int64 __fastcall VfTargetDriversIsEnabled(unsigned __int64 a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( !VfSafeMode && ViTargetInitialized )
    LOBYTE(v1) = VfTargetDriversGetVerifierData(a1) != 0;
  return v1;
}
