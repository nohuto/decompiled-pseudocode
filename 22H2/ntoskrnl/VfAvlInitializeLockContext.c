/*
 * XREFs of VfAvlInitializeLockContext @ 0x1405A2514
 * Callers:
 *     VfDevObjIsDeviceRemoved @ 0x1409D5FE8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1409D6058 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x1409D62DC (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x1409D635C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D64D0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x1409D671C (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D6814 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1409D68C0 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x1409D6DA4 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x1409D6F74 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x1409D7064 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x1409D72C0 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1409D73F4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1409D751C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D76C0 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1409D77FC (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1409D78C4 (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1409D98F0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x1409E1528 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1409E15C4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E16EC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409E1E30 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E2210 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E249C (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x1409E7F70 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     <none>
 */

void __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
}
