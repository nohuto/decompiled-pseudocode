/*
 * XREFs of MiChargeResident @ 0x140259EB8
 * Callers:
 *     MiObtainFaultCharges @ 0x14021BA50 (MiObtainFaultCharges.c)
 *     MiChargeForWriteInProgressPage @ 0x140259E24 (MiChargeForWriteInProgressPage.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14026782C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmChargeResources @ 0x14026C85C (MmChargeResources.c)
 *     MmCreateKernelStack @ 0x1402AABF0 (MmCreateKernelStack.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x140312C04 (MmStoreChargeResidentAvailableForRead.c)
 *     MmAdjustWorkingSetSizeEx @ 0x14031711C (MmAdjustWorkingSetSizeEx.c)
 *     MmGrowKernelStackEx @ 0x1403244F0 (MmGrowKernelStackEx.c)
 *     MmSetHardFaultBehavior @ 0x14032AAE8 (MmSetHardFaultBehavior.c)
 *     MiObtainSystemCharges @ 0x14035701C (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x1403571F0 (MiAcquireNonPagedResources.c)
 *     MiGetSubsectionCharges @ 0x140554E08 (MiGetSubsectionCharges.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14055A8C4 (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14055DE3C (MiCreateLargePfnList.c)
 *     MiCreatePagingFileMap @ 0x14061C968 (MiCreatePagingFileMap.c)
 *     MiInsertVadCharges @ 0x14063A390 (MiInsertVadCharges.c)
 *     MiAllocatePerSessionProtos @ 0x14069F848 (MiAllocatePerSessionProtos.c)
 *     MmCreateProcessAddressSpace @ 0x1406FDDB4 (MmCreateProcessAddressSpace.c)
 *     MiConstructLoaderEntry @ 0x14075D5C0 (MiConstructLoaderEntry.c)
 *     MiInitializeSystemWorkingSetList @ 0x1407866BC (MiInitializeSystemWorkingSetList.c)
 *     MiSessionCreateInternal @ 0x140786B10 (MiSessionCreateInternal.c)
 *     MmObtainChargesToLockPagedPool @ 0x14079BB20 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x1408CFCC0 (MiChargeLargeProtoSubsection.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140308418 (MiChargePartitionResidentAvailable.c)
 */

__int64 __fastcall MiChargeResident(ULONG_PTR *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // r11
  unsigned __int64 CachedResidentAvailable; // r10
  bool v6; // zf
  unsigned __int32 v7; // eax

  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && (_DWORD)CachedResidentAvailable != -1 )
    {
      v7 = _InterlockedCompareExchange(
             (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
             CachedResidentAvailable - a2,
             CachedResidentAvailable);
      v6 = (_DWORD)CachedResidentAvailable == v7;
      CachedResidentAvailable = v7;
      if ( v6 )
        return 1LL;
    }
  }
  return MiChargePartitionResidentAvailable(a1, a2, a3, a4);
}
