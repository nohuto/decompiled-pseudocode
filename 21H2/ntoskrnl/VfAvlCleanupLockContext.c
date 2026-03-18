/*
 * XREFs of VfAvlCleanupLockContext @ 0x1402D81DC
 * Callers:
 *     VfTargetDriversAdd @ 0x1402D8104 (VfTargetDriversAdd.c)
 *     VfTargetDriversGetNode @ 0x1402D86CC (VfTargetDriversGetNode.c)
 *     VfTargetDriversRemove @ 0x1402DB738 (VfTargetDriversRemove.c)
 *     VfTargetRecoverIoCallbacks @ 0x1405FEF04 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x1405FEF58 (VfTargetReplaceIoCallbacks.c)
 *     VfRemLockDeleteMemoryRange @ 0x140A7F132 (VfRemLockDeleteMemoryRange.c)
 *     VfTargetDriversDisableVerifier @ 0x140A8AAE0 (VfTargetDriversDisableVerifier.c)
 *     VfTargetDriversEnableVerifier @ 0x140A8AB50 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140A8AD1C (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140A8AE08 (VfTargetEtwUnregister.c)
 *     ViTargetAddToCounter @ 0x140A8B064 (ViTargetAddToCounter.c)
 *     ViTargetFreeContiguousMemory @ 0x140A8B190 (ViTargetFreeContiguousMemory.c)
 *     ViTargetIncrementCounter @ 0x140A8B2AC (ViTargetIncrementCounter.c)
 *     ViTargetTrackContiguousMemory @ 0x140A8B450 (ViTargetTrackContiguousMemory.c)
 *     ViTargetWMIDeregister @ 0x140A8B588 (ViTargetWMIDeregister.c)
 *     ViTargetWMIRegister @ 0x140A8B654 (ViTargetWMIRegister.c)
 *     VfDevObjIsDeviceRemoved @ 0x140A916B8 (VfDevObjIsDeviceRemoved.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140A91728 (VfDevObjMarkDeviceRemoved.c)
 *     ViDevObjAdd @ 0x140A91A50 (ViDevObjAdd.c)
 *     ViDevObjRemove @ 0x140A91AD0 (ViDevObjRemove.c)
 *     VerifierIoInitializeRemoveLockEx @ 0x140A91C30 (VerifierIoInitializeRemoveLockEx.c)
 *     ViRemLockDeleteFirstTreeNode @ 0x140A91EDC (ViRemLockDeleteFirstTreeNode.c)
 *     ViRemLockFindSurrogate @ 0x140A91F88 (ViRemLockFindSurrogate.c)
 *     VfSuspectDriversGetVerifierInformation @ 0x140A9A640 (VfSuspectDriversGetVerifierInformation.c)
 *     VfAvlDeleteAllTreeNodes @ 0x140A9B1BC (VfAvlDeleteAllTreeNodes.c)
 *     VfCheckForLookaside @ 0x140A9EFF8 (VfCheckForLookaside.c)
 *     VfLookasideAdd @ 0x140A9F0C0 (VfLookasideAdd.c)
 *     VfLookasideDelete @ 0x140A9F1DC (VfLookasideDelete.c)
 *     VerifierIoWMIRegistrationControl @ 0x140AA0F00 (VerifierIoWMIRegistrationControl.c)
 *     VfCheckForResource @ 0x140AA144C (VfCheckForResource.c)
 *     VfDeleteResource @ 0x140AA1590 (VfDeleteResource.c)
 *     VfTrackResource @ 0x140AA16A4 (VfTrackResource.c)
 * Callees:
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x1402D82D0 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall VfAvlCleanupLockContext(__int64 a1)
{
  int v1; // eax
  unsigned __int64 v3; // rdi
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  bool v6; // zf

  LOBYTE(v1) = *(_BYTE *)(a1 + 9);
  if ( (v1 & 2) != 0 )
  {
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a1, a1);
    LOBYTE(v1) = *(_BYTE *)(a1 + 9);
  }
  if ( (v1 & 1) != 0 )
  {
    LOBYTE(v1) = KiIrqlFlags;
    v3 = *(unsigned __int8 *)(a1 + 8);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        LOBYTE(v1) = KeGetCurrentIrql();
        if ( (unsigned __int8)v1 <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)v1 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v1 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
          v6 = (v1 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v1;
          if ( v6 )
            LOBYTE(v1) = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v3);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
  return v1;
}
