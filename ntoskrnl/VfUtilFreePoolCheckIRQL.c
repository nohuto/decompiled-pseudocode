/*
 * XREFs of VfUtilFreePoolCheckIRQL @ 0x140303240
 * Callers:
 *     VfTargetDriversRemove @ 0x140303260 (VfTargetDriversRemove.c)
 *     ViFreeMapRegisterFile @ 0x140AC5A90 (ViFreeMapRegisterFile.c)
 *     ViTargetTrackContiguousMemory @ 0x140AC8D80 (ViTargetTrackContiguousMemory.c)
 *     ViDevObjRemove @ 0x140ACF4C0 (ViDevObjRemove.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140ACF8CC (ViRemLockDeleteFirstTreeNode.c)
 *     VfLookasideAdd @ 0x140ADF240 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140ADF35C (VfLookasideDelete.c)
 *     VfCheckForResource @ 0x140AE138C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AE14D0 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AE15E4 (VfTrackResource.c)
 *     VfSpIoSetCompletionRoutineEx_Exit @ 0x140AE5670 (VfSpIoSetCompletionRoutineEx_Exit.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x1403031F8 (VfPoolDelayFreeIfPossible.c)
 */

void __fastcall VfUtilFreePoolCheckIRQL(struct _SLIST_ENTRY *a1)
{
  VfPoolDelayFreeIfPossible(a1, KeGetCurrentIrql() != 2);
}
