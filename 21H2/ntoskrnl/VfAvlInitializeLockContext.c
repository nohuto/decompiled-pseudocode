/*
 * XREFs of VfAvlInitializeLockContext @ 0x1405A2804
 * Callers:
 *     VfDevObjIsDeviceRemoved @ 0x1409D6FD8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1409D7048 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x1409D72CC (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x1409D734C (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x1409D74C0 (VerifierIoInitializeRemoveLockEx.c)
 *     VfRemLockDeleteMemoryRange @ 0x1409D770C (VfRemLockDeleteMemoryRange.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D7804 (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x1409D78B0 (ViRemLockFindSurrogate.c)
 *     VfTargetDriversEnableVerifier @ 0x1409D7D94 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x1409D7F64 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x1409D8054 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x1409D82B0 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x1409D83E4 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x1409D850C (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D86B0 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x1409D87EC (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x1409D88B4 (ViTargetWMIRegister.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x1409DA8E0 (VfSuspectDriversGetVerifierInformation.c)
 *     VfCheckForLookaside @ 0x1409E2518 (VfCheckForLookaside.c)
 *     ViLookasideAdd @ 0x1409E25B4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E26DC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409E2E20 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E3200 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E348C (VfCheckForResource.c)
 *     VerifierIoWMIRegistrationControl @ 0x1409E8F60 (VerifierIoWMIRegistrationControl.c)
 * Callees:
 *     <none>
 */

void __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
}
