/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x14037E440
 * Callers:
 *     VfTargetDriversRemove @ 0x14037E300 (VfTargetDriversRemove.c)
 *     VerifierIoSetCompletionRoutineEx @ 0x1409C9740 (VerifierIoSetCompletionRoutineEx.c)
 *     ViFreeMapRegisterFile @ 0x1409CE3D4 (ViFreeMapRegisterFile.c)
 *     ViDevObjRemove @ 0x1409D635C (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x1409D6814 (ViRemLockDeleteFirstTreeNode.c)
 *     ViTargetTrackContiguousMemory @ 0x1409D76C0 (ViTargetTrackContiguousMemory.c)
 *     ViLookasideAdd @ 0x1409E15C4 (ViLookasideAdd.c)
 *     ViLookasideDelete @ 0x1409E16EC (ViLookasideDelete.c)
 *     VerifierExDeleteResourceLite @ 0x1409E1E30 (VerifierExDeleteResourceLite.c)
 *     VerifierExInitializeResourceLite @ 0x1409E2210 (VerifierExInitializeResourceLite.c)
 *     VfCheckForResource @ 0x1409E249C (VfCheckForResource.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x14037E460 (VfPoolDelayFreeIfPossible.c)
 */

__int64 __fastcall VfUtilFreePoolCheckIRQL(_SLIST_ENTRY *a1)
{
  KeGetCurrentIrql();
  return VfPoolDelayFreeIfPossible(a1);
}
