/*
 * XREFs of VfAvlInitializeLockContext @ 0x14045DE58
 * Callers:
 *     VfRemLockDeleteMemoryRange @ 0x140ABD1C2 (VfRemLockDeleteMemoryRange.c)
 *     VfTargetDriversDisableVerifier @ 0x140AC8410 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140AC8480 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140AC8648 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140AC8734 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140AC8994 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140AC8AC0 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140AC8BDC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140AC8D80 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140AC8EB8 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x140AC8F84 (ViTargetWMIRegister.c)
 *     VfDevObjIsDeviceRemoved @ 0x140ACF0A8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140ACF118 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x140ACF440 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140ACF4C0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140ACF620 (VerifierIoInitializeRemoveLockEx.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140ACF8CC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140ACF978 (ViRemLockFindSurrogate.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140AD744C (VfSuspectDriversGetVerifierInformation.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140AD9230 (VfAvlDeleteAllTreeNodes.c)
 *     VfCheckForLookaside @ 0x140ADF178 (VfCheckForLookaside.c)
 *     VfLookasideAdd @ 0x140ADF240 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140ADF35C (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140AE1080 (VerifierIoWMIRegistrationControl.c)
 *     VfCheckForResource @ 0x140AE138C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE14D0 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE15E4 (VfTrackResource.c)
 * Callees:
 *     <none>
 */

void __fastcall VfAvlInitializeLockContext(__int64 a1, int a2)
{
  *(_OWORD *)a1 = 0LL;
  if ( !a2 )
    *(_BYTE *)(a1 + 9) = 4;
}
