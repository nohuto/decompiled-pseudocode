/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x1402413F0
 * Callers:
 *     MiUpdateImagePfnImportRelocations @ 0x140209498 (MiUpdateImagePfnImportRelocations.c)
 *     ExfAcquirePushLockShared @ 0x1402413D0 (ExfAcquirePushLockShared.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140241910 (FsRtlLookupPerStreamContextInternal.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1402621D0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140262550 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1402626A0 (ExAcquirePushLockSharedEx.c)
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 *     MiWalkEntireImage @ 0x1402862C0 (MiWalkEntireImage.c)
 *     ExpSaAllocatorFree @ 0x140295774 (ExpSaAllocatorFree.c)
 *     ExpSaAllocatorAllocate @ 0x140296390 (ExpSaAllocatorAllocate.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MiLockControlAreaFileObjectShared @ 0x1402A0D4C (MiLockControlAreaFileObjectShared.c)
 *     MiLockLoaderEntry @ 0x1402A6B58 (MiLockLoaderEntry.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1402C1360 (FsRtlLookupPerFileObjectContext.c)
 *     MiCoalesceFreeLargePages @ 0x1402C89C0 (MiCoalesceFreeLargePages.c)
 *     MiLockDynamicMemoryShared @ 0x1402DAC90 (MiLockDynamicMemoryShared.c)
 *     MiObtainReferencedVadEx @ 0x14031EFE0 (MiObtainReferencedVadEx.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14031F600 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVadShared @ 0x14031F870 (MiLockVadShared.c)
 *     InsertEventEntryInLookUpTable @ 0x14035EE9C (InsertEventEntryInLookUpTable.c)
 *     MmSetPfnListInfo @ 0x140387180 (MmSetPfnListInfo.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x1403C8A74 (ExpAcquireFannedOutPushLockShared.c)
 *     MmCheckProcessShadow @ 0x1403CA630 (MmCheckProcessShadow.c)
 *     DifExfAcquirePushLockSharedWrapper @ 0x1405D7F20 (DifExfAcquirePushLockSharedWrapper.c)
 *     MiReferenceRemovePartition @ 0x140619970 (MiReferenceRemovePartition.c)
 *     MiAddPartitionHugeRange @ 0x14061CDC4 (MiAddPartitionHugeRange.c)
 *     MiRemoveBadPages @ 0x140628020 (MiRemoveBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x1406291A0 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x1406340C0 (MiLocateSharedPageViews.c)
 *     MiZeroPageMakeHot @ 0x140653630 (MiZeroPageMakeHot.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x14065DC44 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     ExpWnfInvalidateDataStores @ 0x14067F77C (ExpWnfInvalidateDataStores.c)
 *     WbGetWarbirdProcess @ 0x1406AEEB8 (WbGetWarbirdProcess.c)
 *     WbGetWarbirdThread @ 0x1406AF248 (WbGetWarbirdThread.c)
 *     WbGetHeapExecutedBlock @ 0x1406AFAAC (WbGetHeapExecutedBlock.c)
 *     NtDeleteKey @ 0x1406B72F0 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1406B762C (CmDeleteKey.c)
 *     CmpGetKeyNodeForKcb @ 0x1406B7CA4 (CmpGetKeyNodeForKcb.c)
 *     CmpSetKeySecurity @ 0x1406B7E3C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x1406B9764 (CmDeleteValueKey.c)
 *     CmpGetNextActiveHive @ 0x1406BD940 (CmpGetNextActiveHive.c)
 *     CmpGetNextHive @ 0x1406BE36C (CmpGetNextHive.c)
 *     VrpTranslatePath @ 0x1406C1EF8 (VrpTranslatePath.c)
 *     CmpCallCallBacksEx @ 0x1406E0B20 (CmpCallCallBacksEx.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E1630 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1406E1D90 (CmpDoParseKey.c)
 *     MiRelocateImagePfn @ 0x1406EBA20 (MiRelocateImagePfn.c)
 *     WbRemoveWarbirdProcess @ 0x14070546C (WbRemoveWarbirdProcess.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140718E50 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140719114 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14071943C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfLookupNameInstance @ 0x14071A330 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x14071A508 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x14071AA78 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x14071AB90 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x14071B5C8 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfNotifySubscription @ 0x14071C224 (ExpWnfNotifySubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14071D36C (ExpWnfAcquireSubscriptionByName.c)
 *     CmpVolumeManagerGetContextForFile @ 0x14072B8A0 (CmpVolumeManagerGetContextForFile.c)
 *     CmpCreateHive @ 0x14072C06C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x14072C970 (CmpReorganizeHive.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x14072F528 (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     CmpTrimHive @ 0x1407317CC (CmpTrimHive.c)
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x140731984 (HvHiveConvertLockedPagesToCowByPolicy.c)
 *     CmpInitCmRM @ 0x1407334D4 (CmpInitCmRM.c)
 *     VrpPostEnumerateKey @ 0x140736428 (VrpPostEnumerateKey.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x140737B9C (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x140737CA8 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     CmpLockCallbackListShared @ 0x140738E68 (CmpLockCallbackListShared.c)
 *     CmpLockContextListShared @ 0x140738ED8 (CmpLockContextListShared.c)
 *     HvLockHiveFlusherShared @ 0x14074A8FC (HvLockHiveFlusherShared.c)
 *     CmpLockHashEntryShared @ 0x14074BE4C (CmpLockHashEntryShared.c)
 *     WbAllocateUserMemory @ 0x140754868 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x140754BA0 (WbAllocateSlots.c)
 *     WbGetWarbirdEncryptionSegment @ 0x140755824 (WbGetWarbirdEncryptionSegment.c)
 *     sub_140773AA8 @ 0x140773AA8 (sub_140773AA8.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x140777B1C (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14077972C (ExpWnfEnumerateScopeInstances.c)
 *     CmpUpdateHiveRootCellFlags @ 0x140789E54 (CmpUpdateHiveRootCellFlags.c)
 *     CmpGetLastHive @ 0x14078A7EC (CmpGetLastHive.c)
 *     ExpWnfDispatchKernelSubscription @ 0x14078D724 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140793108 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x140793770 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     CmQueryMultipleValueKey @ 0x1407A6F60 (CmQueryMultipleValueKey.c)
 *     CmpCreateChild @ 0x1407A7590 (CmpCreateChild.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1407A898C (CmpLockHashEntrySharedByKcb.c)
 *     CmSetValueKey @ 0x1407A9870 (CmSetValueKey.c)
 *     CmEnumerateKey @ 0x1407ACAE0 (CmEnumerateKey.c)
 *     CmpCreateKeyControlBlock @ 0x1407AFAA0 (CmpCreateKeyControlBlock.c)
 *     CmpWalkOneLevel @ 0x1407B1C90 (CmpWalkOneLevel.c)
 *     CmpVEExecuteOpenLogic @ 0x1407B6770 (CmpVEExecuteOpenLogic.c)
 *     MiIsRangeFullyCommitted @ 0x1407C4160 (MiIsRangeFullyCommitted.c)
 *     ExRegisterExtension @ 0x14080ECD0 (ExRegisterExtension.c)
 *     CmpLoadHiveThread @ 0x140820360 (CmpLoadHiveThread.c)
 *     CmpGlobalLockKeyForWrite @ 0x14084617C (CmpGlobalLockKeyForWrite.c)
 *     CmpLockSiloKeyLockTrackerShared @ 0x1408463F8 (CmpLockSiloKeyLockTrackerShared.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084C910 (ExpKdPullRemoteFileForUser.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x14085184C (CmpVolumeContextSendDeviceUsageNotification.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x140854164 (MiQuerySpecialPurposeMemoryInformation.c)
 *     CmpAssignKeySecurity @ 0x140854E7C (CmpAssignKeySecurity.c)
 *     NtAreMappedFilesTheSame @ 0x14086F640 (NtAreMappedFilesTheSame.c)
 *     CmpCreateHiveRootCell @ 0x140871A9C (CmpCreateHiveRootCell.c)
 *     CmRestoreKey @ 0x140A08004 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A09C50 (CmpRefreshHive.c)
 *     CmSetKeyFlags @ 0x140A12D14 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A13248 (CmSetLastWriteTimeKey.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1A1E0 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpPromoteKey @ 0x140A238FC (CmpPromoteKey.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A24FA4 (CmFcpManagerPublishChangeNotifications.c)
 *     MiIsExtentDangling @ 0x140A31284 (MiIsExtentDangling.c)
 *     MiFindHotPatchRecord @ 0x140A33EBC (MiFindHotPatchRecord.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A3404C (MiFindProcessImageHotPatchRecord.c)
 *     MiGetAllRegisteredPatches @ 0x140A342EC (MiGetAllRegisteredPatches.c)
 *     MiLogHotPatchRundown @ 0x140A36A34 (MiLogHotPatchRundown.c)
 *     MiQueryLoadedPatches @ 0x140A38650 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x140A3892C (MiQueryProcessActivePatches.c)
 *     MiOpenSpecialPurposeMemory @ 0x140A44A2C (MiOpenSpecialPurposeMemory.c)
 *     WheaConfigureErrorSource @ 0x140A8D100 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140AA8760 (WheaUnconfigureErrorSource.c)
 *     CmpLockKcbShared @ 0x140AF20D0 (CmpLockKcbShared.c)
 *     CmLockHiveSecurityShared @ 0x140AF2590 (CmLockHiveSecurityShared.c)
 *     CmpDumpKeyToBuffer @ 0x140AF28C4 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     KeAbPreWait @ 0x140241620 (KeAbPreWait.c)
 *     RtlBackoff @ 0x140241660 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1402416E0 (ExpOptimizePushLockList.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(signed __int64 *a1, char a2, __int64 a3, __int64 a4)
{
  int v8; // r15d
  signed __int64 v9; // rdi
  signed __int64 v10; // rcx
  signed __int64 result; // rax
  bool v12; // cl
  char *v13; // rdx
  bool v14; // zf
  signed __int64 v15; // rax
  int i; // ecx
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // r9
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  _QWORD Object[8]; // [rsp+30h] [rbp-40h] BYREF
  int v23; // [rsp+B8h] [rbp+48h] BYREF

  memset(Object, 0, sizeof(Object));
  v23 = 0;
  v8 = a2 & 4;
  _m_prefetchw(a1);
  v9 = *a1;
  while ( (v9 & 3) != 0 && ((v9 & 1) != 0 || v8) && ((v9 & 3) != 1 || (v9 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    if ( a3 )
      KeAbPreWait(a3);
    v12 = 0;
    Object[7] = a3;
    HIDWORD(Object[6]) = 2;
    Object[5] = 0LL;
    if ( (v9 & 2) != 0 )
    {
      Object[4] = 0LL;
      LODWORD(Object[6]) = -1;
      Object[3] = v9 & 0xFFFFFFFFFFFFFFF0uLL;
      v13 = (char *)((unsigned __int64)Object | v9 & 9 | 6);
      v12 = (v9 & 4) == 0;
    }
    else
    {
      LODWORD(Object[6]) = -2;
      Object[4] = Object;
      v13 = (char *)Object + 3;
    }
    v15 = _InterlockedCompareExchange64(a1, (signed __int64)v13, v9);
    v14 = v9 == v15;
    v9 = v15;
    if ( !v14 )
      goto LABEL_15;
    if ( v12 )
      ExpOptimizePushLockList(a1);
    Object[2] = &Object[1];
    Object[1] = &Object[1];
    LOWORD(Object[0]) = 1;
    BYTE2(Object[0]) = 6;
    HIDWORD(Object[0]) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        v18 = __rdtsc();
        v19 = v18 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          __asm { monitorx rax, rcx, rdx }
          if ( (Object[6] & 0x200000000LL) == 0 )
            break;
          v20 = v18;
          v21 = __rdtsc();
          v18 = v21;
          if ( v21 <= v20 || v21 >= v19 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0;
              (Object[6] & 0x200000000LL) != 0 && i != ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6];
              ++i )
        {
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&Object[6] + 1, 1u) )
      KeWaitForSingleObject(Object, WrPushLock, 0, 0, 0LL);
LABEL_16:
    if ( a3 )
      a3 = KeAbPreAcquire(a4, a3, 0LL);
  }
  v10 = (v9 | 1) + 16;
  if ( (v9 & 2) != 0 )
    v10 = v9 | 1;
  result = _InterlockedCompareExchange64(a1, v10, v9);
  if ( v9 != result )
  {
    if ( a3 )
      KeAbPreWait(a3);
LABEL_15:
    RtlBackoff(&v23);
    v9 = *a1;
    _m_prefetchw(a1);
    goto LABEL_16;
  }
  return result;
}
