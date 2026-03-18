/*
 * XREFs of VfAvlInitializeLockContext @ 0x140465E48
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140AC11C2 (VfRemLockDeleteMemoryRange.c)
 *     VfTargetDriversDisableVerifier @ 0x140ACC410 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140ACC480 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140ACC648 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140ACC734 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140ACC994 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140ACCAC0 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140ACCBDC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140ACCD80 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140ACCEB8 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x140ACCF84 (ViTargetWMIRegister.c)
 *     VfDevObjIsDeviceRemoved @ 0x140AD30A8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140AD3118 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x140AD3440 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140AD34C0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140AD3620 (VerifierIoInitializeRemoveLockEx.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140AD38CC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140AD3978 (ViRemLockFindSurrogate.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140ADB44C (VfSuspectDriversGetVerifierInformation.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140ADD230 (VfAvlDeleteAllTreeNodes.c)
 *     VfCheckForLookaside @ 0x140AE3178 (VfCheckForLookaside.c)
 *     VfLookasideAdd @ 0x140AE3240 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140AE335C (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140AE5080 (VerifierIoWMIRegistrationControl.c)
 *     VfCheckForResource @ 0x140AE538C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE54D0 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE55E4 (VfTrackResource.c)
 * Callees:
 *     <none>
 */

void __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
}
