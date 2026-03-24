/*
 * XREFs of MiGetSharedProtos @ 0x1403A5B08
 * Callers:
 *     MiCompleteProtoPteFault @ 0x140213D50 (MiCompleteProtoPteFault.c)
 *     MiWalkEntireImage @ 0x140239E20 (MiWalkEntireImage.c)
 *     MiEmptyPageAccessLog @ 0x14025B4D0 (MiEmptyPageAccessLog.c)
 *     MiComputeImagePteIndex @ 0x14027D3C0 (MiComputeImagePteIndex.c)
 *     MiResolveMappedFileFault @ 0x140299B10 (MiResolveMappedFileFault.c)
 *     MiStartingOffset @ 0x14029EAA0 (MiStartingOffset.c)
 *     MiQueryAddressState @ 0x1402AFDC0 (MiQueryAddressState.c)
 *     MiGetProtoPteAddress @ 0x1402B11D0 (MiGetProtoPteAddress.c)
 *     MiIdentifyPfn @ 0x1402C9940 (MiIdentifyPfn.c)
 *     MiGetImageProtoProtection @ 0x1403141CC (MiGetImageProtoProtection.c)
 *     MiFaultGetFileExtents @ 0x140548330 (MiFaultGetFileExtents.c)
 *     MiMakePerSessionProtoPte @ 0x14055B3E0 (MiMakePerSessionProtoPte.c)
 *     MiPfAllocateMdls @ 0x1406363C0 (MiPfAllocateMdls.c)
 *     MiAddMappedPtes @ 0x140636970 (MiAddMappedPtes.c)
 *     MiPfPrepareSequentialReadList @ 0x14063B4F0 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     MiGetSharedProtosAtDpcLevel @ 0x1403A5B8C (MiGetSharedProtosAtDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiGetSharedProtos(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 SharedProtosAtDpcLevel; // rsi
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v7; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v9; // r8
  int v10; // eax
  bool v11; // zf

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
  }
  SharedProtosAtDpcLevel = MiGetSharedProtosAtDpcLevel(a1, a2, a3);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v7 = KeGetCurrentIrql();
      if ( v7 <= 0xFu && CurrentIrql <= 0xFu && v7 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v9 = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v11 = (v10 & v9[5]) == 0;
        v9[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(CurrentIrql);
  return SharedProtosAtDpcLevel;
}
