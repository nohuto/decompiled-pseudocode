/*
 * XREFs of MiChargeResident @ 0x140348DE8
 * Callers:
 *     MmAdjustWorkingSetSizeEx @ 0x14020C61C (MmAdjustWorkingSetSizeEx.c)
 *     MiChargeForWriteInProgressPage @ 0x1402E44C4 (MiChargeForWriteInProgressPage.c)
 *     MmGrowKernelStackEx @ 0x1402F61F0 (MmGrowKernelStackEx.c)
 *     MmCreateKernelStack @ 0x140317B10 (MmCreateKernelStack.c)
 *     MiObtainFaultCharges @ 0x14031EEE0 (MiObtainFaultCharges.c)
 *     MiObtainSystemCharges @ 0x140348C90 (MiObtainSystemCharges.c)
 *     MiAcquireNonPagedResources @ 0x140348D54 (MiAcquireNonPagedResources.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403567C4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MmSetHardFaultBehavior @ 0x140356964 (MmSetHardFaultBehavior.c)
 *     MmChargeResources @ 0x140359F68 (MmChargeResources.c)
 *     MmStoreChargeResidentAvailableForRead @ 0x1403B0DD0 (MmStoreChargeResidentAvailableForRead.c)
 *     MmCreateKernelShadowStack @ 0x140642B98 (MmCreateKernelShadowStack.c)
 *     MiGetCrossPartitionCloneCharges @ 0x14066222C (MiGetCrossPartitionCloneCharges.c)
 *     MiCreateLargePfnList @ 0x14066540C (MiCreateLargePfnList.c)
 *     MiGetSubsectionCharges @ 0x140668BC8 (MiGetSubsectionCharges.c)
 *     MiInitializeSystemWorkingSetList @ 0x140726074 (MiInitializeSystemWorkingSetList.c)
 *     MmCreateProcessAddressSpace @ 0x1407289B8 (MmCreateProcessAddressSpace.c)
 *     MiConstructLoaderEntry @ 0x14072CE24 (MiConstructLoaderEntry.c)
 *     MiSessionCreate @ 0x140756EC8 (MiSessionCreate.c)
 *     MiAllocatePerSessionProtos @ 0x14075B9D4 (MiAllocatePerSessionProtos.c)
 *     MiInitializePartialVad @ 0x140760134 (MiInitializePartialVad.c)
 *     MiInsertVadCharges @ 0x1407D6A70 (MiInsertVadCharges.c)
 *     MiCreatePagingFileMap @ 0x1407F3500 (MiCreatePagingFileMap.c)
 *     MmObtainChargesToLockPagedPool @ 0x14085CC30 (MmObtainChargesToLockPagedPool.c)
 *     MiChargeLargeProtoSubsection @ 0x140A30984 (MiChargeLargeProtoSubsection.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x140348ED0 (MiChargePartitionResidentAvailable.c)
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
