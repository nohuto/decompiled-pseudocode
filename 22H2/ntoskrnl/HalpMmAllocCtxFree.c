/*
 * XREFs of HalpMmAllocCtxFree @ 0x140378ED0
 * Callers:
 *     HalpDmaFreeChildAdapter @ 0x14036CB10 (HalpDmaFreeChildAdapter.c)
 *     HalpIommuFreeDeviceId @ 0x14037948C (HalpIommuFreeDeviceId.c)
 *     HalpIommuAllocateDmaDomain @ 0x1403B3818 (HalpIommuAllocateDmaDomain.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x1403BAB10 (HalpAcpiPopulateTableCacheWork.c)
 *     HalpAcpiCacheTable @ 0x1403BB060 (HalpAcpiCacheTable.c)
 *     IommupGetSystemContext @ 0x1403CB914 (IommupGetSystemContext.c)
 *     HalpIommuCloneDeviceId @ 0x1403EF858 (HalpIommuCloneDeviceId.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1403EF980 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpAllocatePmcCounterSet @ 0x1404BE7B0 (HalpAllocatePmcCounterSet.c)
 *     HalpFreePmcCounterSet @ 0x1404BEBA0 (HalpFreePmcCounterSet.c)
 *     HalpDmaDereferenceDomainObject @ 0x1404C4A38 (HalpDmaDereferenceDomainObject.c)
 *     HalAllocateCommonBufferVector @ 0x1404C5640 (HalAllocateCommonBufferVector.c)
 *     HalFreeCommonBufferVector @ 0x1404C5F60 (HalFreeCommonBufferVector.c)
 *     HalpDmaAllocateMapRegisters @ 0x1404C683C (HalpDmaAllocateMapRegisters.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x1404C6F18 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpIommuBlockDevice @ 0x1404C8DA0 (HalpIommuBlockDevice.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x1404C904C (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuFreeDmaDomain @ 0x1404C94AC (HalpIommuFreeDmaDomain.c)
 *     HalpIommuGetHardwareDomain @ 0x1404C9534 (HalpIommuGetHardwareDomain.c)
 *     HalpIommuUnblockDevice @ 0x1404C9DC0 (HalpIommuUnblockDevice.c)
 *     HalpNumaAddRangeProximity @ 0x1404D1BA0 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x1404D2D00 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x1404D30F8 (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x1404D4040 (EmonReleaseProfileResources.c)
 *     EmonRemoveProfileSource @ 0x1404D4370 (EmonRemoveProfileSource.c)
 *     ExtEnvFreeMemory @ 0x1404D52FC (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x1404D533C (ExtEnvFreePhysicalMemory.c)
 *     IommuDisableDevicePasid @ 0x1404D7ED0 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x1404D81E0 (IommuEnableDevicePasid.c)
 *     IommuGetLibraryContext @ 0x1404D8D10 (IommuGetLibraryContext.c)
 *     IommuMapDevice @ 0x1404D8DD0 (IommuMapDevice.c)
 *     IommuUnmapDevice @ 0x1404D9AA0 (IommuUnmapDevice.c)
 *     IommuDomainAttachDevice @ 0x1404DA320 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x1404DA530 (IommuDomainDetachDevice.c)
 *     HalpLaDeleteBlt @ 0x1404DB004 (HalpLaDeleteBlt.c)
 *     HalpLaFreeState @ 0x1404DB104 (HalpLaFreeState.c)
 *     HalpLaInitializeState @ 0x1404DB140 (HalpLaInitializeState.c)
 *     HalpLapDeleteSubtree @ 0x1404DB530 (HalpLapDeleteSubtree.c)
 *     HalpLapSplitNode @ 0x1404DB5EC (HalpLapSplitNode.c)
 *     HalpIommuCleanupPageTable @ 0x1404DB790 (HalpIommuCleanupPageTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x1404DB8FC (HalpIommuCreateDmarPageTable.c)
 *     Amd64AddProfileSource @ 0x1404DD400 (Amd64AddProfileSource.c)
 *     Amd64RemoveProfileSource @ 0x1404DDF60 (Amd64RemoveProfileSource.c)
 *     HalpIommuCreateDevice @ 0x140864A14 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140864CA0 (HalpIommuDeleteDevice.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140864DE0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1408650C8 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpFreeResumeStructures @ 0x1409982CC (HalpFreeResumeStructures.c)
 *     HalpBuildResumeStructures @ 0x14099834C (HalpBuildResumeStructures.c)
 *     HalpFreeNvsBuffers @ 0x140998EA8 (HalpFreeNvsBuffers.c)
 *     HalpMmFreeTiledMemoryMap @ 0x14099A140 (HalpMmFreeTiledMemoryMap.c)
 *     HalpMapCR3Ex @ 0x14099A290 (HalpMapCR3Ex.c)
 *     HalpMceInitializeErrorPacket @ 0x1409A0D50 (HalpMceInitializeErrorPacket.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140A65B2C (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140A65C64 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaAllocateMappingResources @ 0x140A65DA8 (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140A65ECC (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140A65F28 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140A8C8F4 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140A8C9C8 (HalpDmaFreeTranslationBuffer.c)
 * Callees:
 *     RtlClearBits @ 0x140206DC0 (RtlClearBits.c)
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x1403A5720 (HalpMmAllocCtxBufferCleanup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall HalpMmAllocCtxFree(__int64 a1, __int64 a2)
{
  unsigned __int64 v3; // rbp
  __int64 i; // rbx
  ULONG v5; // r8d
  __int64 v6; // rsi
  unsigned int *v7; // rdi
  __int64 v8; // rcx
  __int64 *v9; // rax
  unsigned int v10; // ecx
  int *v11; // rdx
  int v12; // r9d
  int *v13; // r8
  bool j; // zf
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C4BA50);
  if ( (a2 & 0xFFF) == 0 )
  {
    for ( i = HalpNPPoolAllocCtx; (__int64 *)i != &HalpNPPoolAllocCtx; i = *(_QWORD *)i )
    {
      if ( a2 == *(_QWORD *)(i + 16) )
      {
        v5 = *(_DWORD *)(i + 28);
        LODWORD(v6) = 0;
        *(_DWORD *)(i + 28) = 0;
        goto LABEL_3;
      }
    }
  }
  i = *(_QWORD *)(a2 - 16);
  v5 = *(_DWORD *)(a2 - 8);
  v6 = (a2 - 16 - *(_QWORD *)(i + 16)) / 16;
LABEL_3:
  v7 = (unsigned int *)(i + 32);
  RtlClearBits((PRTL_BITMAP)(i + 32), v6, v5);
  *(_DWORD *)(i + 24) = v6;
  v8 = *(_QWORD *)i;
  v9 = *(__int64 **)(i + 8);
  if ( *(_QWORD *)(*(_QWORD *)i + 8LL) != i || *v9 != i )
    goto LABEL_35;
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  v10 = *v7;
  if ( !*v7 )
  {
LABEL_13:
    v15 = HalpNPPoolAllocCtx;
    if ( *(__int64 **)(HalpNPPoolAllocCtx + 8) == &HalpNPPoolAllocCtx )
    {
      *(_QWORD *)i = HalpNPPoolAllocCtx;
      *(_QWORD *)(i + 8) = &HalpNPPoolAllocCtx;
      *(_QWORD *)(v15 + 8) = i;
      HalpNPPoolAllocCtx = i;
      i = 0LL;
      goto LABEL_15;
    }
LABEL_35:
    __fastfail(3u);
  }
  if ( v10 <= 1 )
  {
    if ( !_bittest(*(const signed __int32 **)(i + 40), 0) )
      goto LABEL_15;
    goto LABEL_13;
  }
  v11 = *(int **)(i + 40);
  v12 = *v11;
  v13 = &v11[(unsigned __int64)(v10 - 1) >> 5];
  if ( v11 == v13 )
  {
    if ( (v12 & (0xFFFFFFFF >> (32 - v10))) == 0 )
      goto LABEL_15;
    goto LABEL_13;
  }
  for ( j = v12 == 0; ; j = *v11 == 0 )
  {
    if ( !j )
      goto LABEL_13;
    if ( ++v11 == v13 )
      break;
  }
  if ( ((0xFFFFFFFF >> ~(v10 - 1)) & *v11) != 0 )
    goto LABEL_13;
LABEL_15:
  KxReleaseSpinLock(&qword_140C4BA50);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v3 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v16 = (unsigned int)(v3 + 1);
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
        j = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( j )
          result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
  }
  __writecr8(v3);
  if ( i )
    return HalpMmAllocCtxBufferCleanup(v16, i);
  return result;
}
