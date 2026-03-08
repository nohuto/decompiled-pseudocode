/*
 * XREFs of VfAvlCleanupLockContext @ 0x1403039F0
 * Callers:
 *     VfTargetDriversRemove @ 0x140303260 (VfTargetDriversRemove.c)
 *     VfTargetDriversGetNode @ 0x140303628 (VfTargetDriversGetNode.c)
 *     VfTargetDriversAdd @ 0x140303834 (VfTargetDriversAdd.c)
 *     VfTargetRecoverIoCallbacks @ 0x1405CCDE4 (VfTargetRecoverIoCallbacks.c)
 *     VfTargetReplaceIoCallbacks @ 0x1405CCE38 (VfTargetReplaceIoCallbacks.c)
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
 *     ViAvlReleaseTableLockFromDpcLevel @ 0x140303B00 (ViAvlReleaseTableLockFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall VfAvlCleanupLockContext(__int64 a1)
{
  unsigned __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v6; // eax
  bool v7; // zf

  if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
    ViAvlReleaseTableLockFromDpcLevel(*(_QWORD *)a1, a1);
  if ( (*(_BYTE *)(a1 + 9) & 1) != 0 )
  {
    v2 = *(unsigned __int8 *)(a1 + 8);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v2 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v6 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v2 + 1));
        v7 = (v6 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v6;
        if ( v7 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v2);
    *(_BYTE *)(a1 + 9) &= ~1u;
    *(_BYTE *)(a1 + 8) = 0;
  }
}
