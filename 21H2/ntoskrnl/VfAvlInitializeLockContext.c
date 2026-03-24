/*
 * XREFs of VfAvlInitializeLockContext @ 0x1405A25D4
 * Callers:
 *     VfDevObjIsDeviceRemoved @ 0x1409D5FD8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1409D6048 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x1409D62CC (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x1409D634C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D64C0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x1409D670C (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D6804 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1409D68B0 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x1409D6D94 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x1409D6F64 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x1409D7054 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x1409D72B0 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1409D73E4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1409D750C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D76B0 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1409D77EC (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1409D78B4 (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1409D98E0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x1409E1518 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1409E15B4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E16DC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409E1E20 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E2200 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E248C (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x1409E7F60 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     <none>
 */

void __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
}
