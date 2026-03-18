/*
 * XREFs of MiChargeResident @ 0x1402E43A8
 * Callers:
 *     MmCreateKernelStack @ 0x140271580 (MmCreateKernelStack.c)
 *     MiObtainFaultCharges @ 0x140274A90 (MiObtainFaultCharges.c)
 *     MiObtainSystemCharges @ 0x1402E4250 (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x1402E4314 (MiAcquireNonPagedResources.c)
 *     MmAdjustWorkingSetSizeEx @ 0x1402E9C78 (MmAdjustWorkingSetSizeEx.c)
 *     MmChargeResources @ 0x140343560 (MmChargeResources.c)
 *     MiChargeForWriteInProgressPage @ 0x140349914 (MiChargeForWriteInProgressPage.c)
 *     MmGrowKernelStackEx @ 0x140360D00 (MmGrowKernelStackEx.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140368400 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmSetHardFaultBehavior @ 0x1403685A0 (MmSetHardFaultBehavior.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x1403B5A60 (MmStoreChargeResidentAvailableForRead.c)
 *     MmCreateKernelShadowStack @ 0x14064519C (MmCreateKernelShadowStack.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14066487C (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x140667A5C (MiCreateLargePfnList.c)
 *     MiGetSubsectionCharges @ 0x14066B218 (MiGetSubsectionCharges.c)
 *     MiInsertVadCharges @ 0x1406FA960 (MiInsertVadCharges.c)
 *     MiConstructLoaderEntry @ 0x140704A3C (MiConstructLoaderEntry.c)
 *     MmCreateProcessAddressSpace @ 0x140705F00 (MmCreateProcessAddressSpace.c)
 *     MiCreatePagingFileMap @ 0x140747EA4 (MiCreatePagingFileMap.c)
 *     MiInitializePartialVad @ 0x14076DBFC (MiInitializePartialVad.c)
 *     MiSessionCreate @ 0x1407A95BC (MiSessionCreate.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407AA178 (MiInitializeSystemWorkingSetList.c)
 *     MiAllocatePerSessionProtos @ 0x1407B6410 (MiAllocatePerSessionProtos.c)
 *     MmObtainChargesToLockPagedPool @ 0x140860B30 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x140A336B4 (MiChargeLargeProtoSubsection.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402E6278 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeResident(void *a1, unsigned __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // r11
  unsigned __int64 CachedResidentAvailable; // r10
  bool v5; // zf
  unsigned __int32 v6; // eax

  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && (_DWORD)CachedResidentAvailable != -1 )
    {
      v6 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
             CachedResidentAvailable - a2,
             CachedResidentAvailable);
      v5 = (_DWORD)CachedResidentAvailable == v6;
      CachedResidentAvailable = v6;
      if ( v5 )
        return 1LL;
    }
  }
  return MiChargePartitionResidentAvailable(a1, a2, a3);
}
