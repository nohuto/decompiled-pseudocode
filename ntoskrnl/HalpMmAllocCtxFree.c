/*
 * XREFs of HalpMmAllocCtxFree @ 0x14039F980
 * Callers:
 *     HalpAcpiCacheTable @ 0x14037ABF4 (HalpAcpiCacheTable.c)
 *     HalpIommuCreateDmarPageTable @ 0x14037CA68 (HalpIommuCreateDmarPageTable.c)
 *     IommupCreateDeviceId @ 0x14038C584 (IommupCreateDeviceId.c)
 *     HalpDmaAllocateDomain @ 0x14038C660 (HalpDmaAllocateDomain.c)
 *     HalpIommuFreeDeviceId @ 0x14038CD68 (HalpIommuFreeDeviceId.c)
 *     HalpIommuCloneDeviceId @ 0x14038D3A8 (HalpIommuCloneDeviceId.c)
 *     HalpIommuGetHardwareDomain @ 0x1403A414C (HalpIommuGetHardwareDomain.c)
 *     HalDmaAllocateCrashDumpRegistersEx @ 0x1403A9AD0 (HalDmaAllocateCrashDumpRegistersEx.c)
 *     IommupGetSystemContext @ 0x1403AB428 (IommupGetSystemContext.c)
 *     HalpAcpiPopulateTableCacheWork @ 0x1403B1840 (HalpAcpiPopulateTableCacheWork.c)
 *     HalpDmaAllocateMapRegisters @ 0x14045399E (HalpDmaAllocateMapRegisters.c)
 *     HalpBuddyAllocatorFreeLogicalAddress @ 0x140456A60 (HalpBuddyAllocatorFreeLogicalAddress.c)
 *     HalpAllocatePmcCounterSetEx @ 0x140504F80 (HalpAllocatePmcCounterSetEx.c)
 *     HalpFreePmcCounterSet @ 0x140505680 (HalpFreePmcCounterSet.c)
 *     IommupPasidDeviceCreate @ 0x14050C278 (IommupPasidDeviceCreate.c)
 *     IommupPasidDeviceDelete @ 0x14050C384 (IommupPasidDeviceDelete.c)
 *     HalFreeCommonBufferVector @ 0x14050CB90 (HalFreeCommonBufferVector.c)
 *     HalpAllocateCommonBufferVectorInternal @ 0x14050D000 (HalpAllocateCommonBufferVectorInternal.c)
 *     HalpDmaAllocateNewTranslationBuffer @ 0x14050E378 (HalpDmaAllocateNewTranslationBuffer.c)
 *     HalpDmaFreeChildAdapter @ 0x14050ED00 (HalpDmaFreeChildAdapter.c)
 *     HalpDmaDereferenceDomainObject @ 0x140510338 (HalpDmaDereferenceDomainObject.c)
 *     HalpDmaGetReservedRegionsForHybridPassthroughDomain @ 0x140510488 (HalpDmaGetReservedRegionsForHybridPassthroughDomain.c)
 *     HalpIommuBlockDevice @ 0x1405153C0 (HalpIommuBlockDevice.c)
 *     HalpIommuCreateIncreaseAliasTrack @ 0x1405154C8 (HalpIommuCreateIncreaseAliasTrack.c)
 *     HalpIommuDereferenceHardwareDomain @ 0x14051567C (HalpIommuDereferenceHardwareDomain.c)
 *     HalpIommuFreeDmaDomain @ 0x140515CC0 (HalpIommuFreeDmaDomain.c)
 *     HalpIommuUnblockDevice @ 0x140516330 (HalpIommuUnblockDevice.c)
 *     HalpNumaAddRangeProximity @ 0x140518980 (HalpNumaAddRangeProximity.c)
 *     EmonAddProfileSource @ 0x14051A480 (EmonAddProfileSource.c)
 *     EmonAllocateResources @ 0x14051A90C (EmonAllocateResources.c)
 *     EmonReleaseProfileResources @ 0x14051BBE0 (EmonReleaseProfileResources.c)
 *     EmonRemoveProfileSource @ 0x14051BF80 (EmonRemoveProfileSource.c)
 *     ExtEnvFreeMemory @ 0x14051D13C (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x14051D17C (ExtEnvFreePhysicalMemory.c)
 *     IommuDisableDevicePasid @ 0x14051FC00 (IommuDisableDevicePasid.c)
 *     IommuEnableDevicePasid @ 0x14051FFF0 (IommuEnableDevicePasid.c)
 *     IommuFreeLibraryContext @ 0x140520A48 (IommuFreeLibraryContext.c)
 *     IommuGetLibraryContext @ 0x140520AF0 (IommuGetLibraryContext.c)
 *     IommupFreeSystemContext @ 0x140521654 (IommupFreeSystemContext.c)
 *     IommupMapDeviceInternal @ 0x1405216F8 (IommupMapDeviceInternal.c)
 *     IommupUnmapDeviceInternal @ 0x140521AB8 (IommupUnmapDeviceInternal.c)
 *     IommuDomainAttachDevice @ 0x140523210 (IommuDomainAttachDevice.c)
 *     IommuDomainDetachDevice @ 0x140523720 (IommuDomainDetachDevice.c)
 *     IommuDomainDetachDeviceEx @ 0x1405238E0 (IommuDomainDetachDeviceEx.c)
 *     IommuFreeReservedLogicalAddressRange @ 0x1405239F0 (IommuFreeReservedLogicalAddressRange.c)
 *     IommuReserveLogicalAddressRange @ 0x140524080 (IommuReserveLogicalAddressRange.c)
 *     IommuUnregisterInterfaceStateChangeCallback @ 0x140524540 (IommuUnregisterInterfaceStateChangeCallback.c)
 *     HalpIommuCleanupPageTable @ 0x140524854 (HalpIommuCleanupPageTable.c)
 *     Amd64AddProfileSource @ 0x1405263A0 (Amd64AddProfileSource.c)
 *     Amd64InitializeUncoreStatus @ 0x140527558 (Amd64InitializeUncoreStatus.c)
 *     Amd64RemoveProfileSource @ 0x140527A10 (Amd64RemoveProfileSource.c)
 *     HalpBuddyAllocatorCleanUp @ 0x14052FFD0 (HalpBuddyAllocatorCleanUp.c)
 *     HalpBuddyAllocatorCreateAllocator @ 0x14053000C (HalpBuddyAllocatorCreateAllocator.c)
 *     HalpBuddyAllocatorDeleteSubtree @ 0x1405301B8 (HalpBuddyAllocatorDeleteSubtree.c)
 *     HalpBuddyAllocatorSplitNode @ 0x1405304E8 (HalpBuddyAllocatorSplitNode.c)
 *     HalpAcpiDetectPiix4Work @ 0x140801C80 (HalpAcpiDetectPiix4Work.c)
 *     HalpIommuCreateDevice @ 0x140822B28 (HalpIommuCreateDevice.c)
 *     HalpIommuDeleteDevice @ 0x140930ACC (HalpIommuDeleteDevice.c)
 *     HalpDmaAllocateLocalContiguousPool @ 0x140930FF0 (HalpDmaAllocateLocalContiguousPool.c)
 *     HalpDmaAllocateLocalScatterPool @ 0x1409312D8 (HalpDmaAllocateLocalScatterPool.c)
 *     HalpMceInitializeErrorPacket @ 0x140A87D2C (HalpMceInitializeErrorPacket.c)
 *     HalpMapCR3Ex @ 0x140A8D980 (HalpMapCR3Ex.c)
 *     HalpBuildResumeStructures @ 0x140A92E78 (HalpBuildResumeStructures.c)
 *     HalpFreeResumeStructures @ 0x140A92EF4 (HalpFreeResumeStructures.c)
 *     HalpFreeNvsBuffers @ 0x140A93E04 (HalpFreeNvsBuffers.c)
 *     HalpDmaInitializeMasterAdapter @ 0x140B60FAC (HalpDmaInitializeMasterAdapter.c)
 *     HalpDmaAllocateTranslationBuffer @ 0x140B610F0 (HalpDmaAllocateTranslationBuffer.c)
 *     HalpDmaAllocateEmergencyResources @ 0x140B61178 (HalpDmaAllocateEmergencyResources.c)
 *     HalpDmaAllocateMappingResources @ 0x140B6124C (HalpDmaAllocateMappingResources.c)
 *     HalpDmaAllocateReservedMapping @ 0x140B61370 (HalpDmaAllocateReservedMapping.c)
 *     HalpDmaAllocateReservedMappingArray @ 0x140B8DE04 (HalpDmaAllocateReservedMappingArray.c)
 *     HalpDmaFreeTranslationBuffer @ 0x140B8DED8 (HalpDmaFreeTranslationBuffer.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlClearBits @ 0x14030DE60 (RtlClearBits.c)
 *     HalpMmAllocCtxBufferCleanup @ 0x140503684 (HalpMmAllocCtxBufferCleanup.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
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
  __int64 v11; // rax
  __int64 result; // rax
  __int64 v13; // rcx
  int *v14; // rdx
  int v15; // r10d
  int *v16; // r8
  bool j; // zf
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9

  v3 = KeAcquireSpinLockRaiseToDpc(&qword_140C63A50);
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
    goto LABEL_36;
  *v9 = v8;
  *(_QWORD *)(v8 + 8) = v9;
  v10 = *v7;
  if ( !*v7 )
    goto LABEL_9;
  if ( v10 > 1 )
  {
    v14 = *(int **)(i + 40);
    v15 = *v14;
    v16 = &v14[(unsigned __int64)(v10 - 1) >> 5];
    if ( v14 == v16 )
    {
      if ( (v15 & (0xFFFFFFFF >> (32 - v10))) == 0 )
        goto LABEL_11;
    }
    else
    {
      for ( j = v15 == 0; ; j = *v14 == 0 )
      {
        if ( !j )
          goto LABEL_9;
        if ( ++v14 == v16 )
          break;
      }
      if ( ((0xFFFFFFFF >> ~(v10 - 1)) & *v14) == 0 )
        goto LABEL_11;
    }
LABEL_9:
    v11 = HalpNPPoolAllocCtx;
    if ( *(__int64 **)(HalpNPPoolAllocCtx + 8) == &HalpNPPoolAllocCtx )
    {
      *(_QWORD *)i = HalpNPPoolAllocCtx;
      *(_QWORD *)(i + 8) = &HalpNPPoolAllocCtx;
      *(_QWORD *)(v11 + 8) = i;
      HalpNPPoolAllocCtx = i;
      i = 0LL;
      goto LABEL_11;
    }
LABEL_36:
    __fastfail(3u);
  }
  if ( v10 != 1 || _bittest(*(const signed __int32 **)(i + 40), 0) )
    goto LABEL_9;
LABEL_11:
  result = KxReleaseSpinLock((volatile signed __int64 *)&qword_140C63A50);
  v13 = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v3 <= 0xFu
      && (unsigned __int8)result >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v13 = (unsigned int)(v3 + 1);
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v3 + 1));
      j = ((unsigned int)result & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= result;
      if ( j )
        result = KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v3);
  if ( i )
    return HalpMmAllocCtxBufferCleanup(v13, i);
  return result;
}
