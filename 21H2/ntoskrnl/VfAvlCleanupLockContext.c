/*
 * XREFs of VfAvlCleanupLockContext @ 0x140371B24
 * Callers:
 *     VfTargetDriversAdd @ 0x140371A3C (VfTargetDriversAdd.c)
 *     VfTargetDriversRemove @ 0x14037E990 (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x1405A1D9C (VfTargetDriversGetNode.c)
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
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140371C0C (ViAvlReleaseTableLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F3684 (KiRemoveSystemWorkPriorityKick.c)
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
