/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x1402FD040
 * Callers:
 *     InsertEventEntryInLookUpTable @ 0x140212F80 (InsertEventEntryInLookUpTable.c)
 *     ExpSaAllocatorAllocate @ 0x1402236F0 (ExpSaAllocatorAllocate.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x140230340 (FsRtlLookupPerStreamContextInternal.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1402308C0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140230C40 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140230D90 (ExAcquirePushLockSharedEx.c)
 *     MiObtainReferencedVadEx @ 0x140274B90 (MiObtainReferencedVadEx.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1402751A0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVadShared @ 0x140275410 (MiLockVadShared.c)
 *     MiLockLoaderEntry @ 0x140292044 (MiLockLoaderEntry.c)
 *     MiZeroPage @ 0x1402D09F0 (MiZeroPage.c)
 *     MiWalkEntireImage @ 0x1402DAFE0 (MiWalkEntireImage.c)
 *     MiTrimSharedPageFromViews @ 0x1402EFC5C (MiTrimSharedPageFromViews.c)
 *     MiLockControlAreaFileObjectShared @ 0x1402F068C (MiLockControlAreaFileObjectShared.c)
 *     ExfAcquirePushLockShared @ 0x1402FD020 (ExfAcquirePushLockShared.c)
 *     MiUpdateImagePfnImportRelocations @ 0x140324F70 (MiUpdateImagePfnImportRelocations.c)
 *     FsRtlLookupPerFileObjectContext @ 0x140326430 (FsRtlLookupPerFileObjectContext.c)
 *     MiCoalesceFreeLargePages @ 0x140332C20 (MiCoalesceFreeLargePages.c)
 *     MiLockDynamicMemoryShared @ 0x140345EE4 (MiLockDynamicMemoryShared.c)
 *     ExpSaAllocatorFree @ 0x14035C324 (ExpSaAllocatorFree.c)
 *     MmSetPfnListInfo @ 0x140389DC0 (MmSetPfnListInfo.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x1403CD594 (ExpAcquireFannedOutPushLockShared.c)
 *     MmCheckProcessShadow @ 0x1403CFBE0 (MmCheckProcessShadow.c)
 *     DifExfAcquirePushLockSharedWrapper @ 0x1405DA3D0 (DifExfAcquirePushLockSharedWrapper.c)
 *     MiReferenceRemovePartition @ 0x14061BE1C (MiReferenceRemovePartition.c)
 *     MiAddPartitionHugeRange @ 0x14061F274 (MiAddPartitionHugeRange.c)
 *     MiRemoveBadPages @ 0x14062A4B0 (MiRemoveBadPages.c)
 *     MmMarkPhysicalMemoryAsBad @ 0x14062B620 (MmMarkPhysicalMemoryAsBad.c)
 *     MiLocateSharedPageViews @ 0x140636550 (MiLocateSharedPageViews.c)
 *     MiZeroPageMakeHot @ 0x140655C7C (MiZeroPageMakeHot.c)
 *     MiGetSpecialPurposeMemoryPartitionForCaching @ 0x140660294 (MiGetSpecialPurposeMemoryPartitionForCaching.c)
 *     CmFcpManagerProcessUsageDataProviders @ 0x14067FD84 (CmFcpManagerProcessUsageDataProviders.c)
 *     ExpWnfInvalidateDataStores @ 0x140682B5C (ExpWnfInvalidateDataStores.c)
 *     CmpInitCmRM @ 0x14068571C (CmpInitCmRM.c)
 *     HvLockHiveFlusherShared @ 0x1406892C8 (HvLockHiveFlusherShared.c)
 *     VrpTranslatePath @ 0x14068D49C (VrpTranslatePath.c)
 *     CmpLockCallbackListShared @ 0x14068F2D8 (CmpLockCallbackListShared.c)
 *     CmpLockContextListShared @ 0x14068F348 (CmpLockContextListShared.c)
 *     CmQueryMultipleValueKey @ 0x1406CFBE8 (CmQueryMultipleValueKey.c)
 *     CmpCreateChild @ 0x1406D1020 (CmpCreateChild.c)
 *     CmSetValueKey @ 0x1406D32F0 (CmSetValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x1406D8840 (CmpCreateKeyControlBlock.c)
 *     CmEnumerateKey @ 0x1406DC4F0 (CmEnumerateKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1406DD580 (CmpVEExecuteOpenLogic.c)
 *     CmpWalkOneLevel @ 0x1406DD8D0 (CmpWalkOneLevel.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1406E7F40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpCallCallBacksEx @ 0x1406E86A0 (CmpCallCallBacksEx.c)
 *     CmpDoParseKey @ 0x1406E91B0 (CmpDoParseKey.c)
 *     MiIsRangeFullyCommitted @ 0x1406F61C0 (MiIsRangeFullyCommitted.c)
 *     CmpVolumeManagerGetContextForFile @ 0x140701CB8 (CmpVolumeManagerGetContextForFile.c)
 *     CmpCreateHive @ 0x14070247C (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x1407030D0 (CmpReorganizeHive.c)
 *     CmpSetKeySecurity @ 0x14070C46C (CmpSetKeySecurity.c)
 *     CmDeleteValueKey @ 0x14070EFD4 (CmDeleteValueKey.c)
 *     NtDeleteKey @ 0x14070FD60 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x14071009C (CmDeleteKey.c)
 *     CmpGetKeyNodeForKcb @ 0x140710714 (CmpGetKeyNodeForKcb.c)
 *     ExpWnfNotifySubscription @ 0x140711148 (ExpWnfNotifySubscription.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140711D60 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140712024 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpNtUpdateWnfStateData @ 0x14071234C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfLookupNameInstance @ 0x140713240 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140713418 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x140713988 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140713AA0 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1407144D8 (ExpWnfNotifyNameSubscribers.c)
 *     MiRelocateImagePfn @ 0x1407447D0 (MiRelocateImagePfn.c)
 *     CmpTrimHive @ 0x14074ED94 (CmpTrimHive.c)
 *     CmpVolumeContextMustHiveFilePagesBeKeptLocal @ 0x140750CBC (CmpVolumeContextMustHiveFilePagesBeKeptLocal.c)
 *     HvHiveConvertLockedPagesToCowByPolicy @ 0x140751744 (HvHiveConvertLockedPagesToCowByPolicy.c)
 *     CmpGetNextActiveHive @ 0x140752570 (CmpGetNextActiveHive.c)
 *     WbRemoveWarbirdProcess @ 0x140761414 (WbRemoveWarbirdProcess.c)
 *     sub_140761F0C @ 0x140761F0C (sub_140761F0C.c)
 *     WbGetHeapExecutedBlock @ 0x140762E28 (WbGetHeapExecutedBlock.c)
 *     WbGetWarbirdThread @ 0x1407636B4 (WbGetWarbirdThread.c)
 *     WbGetWarbirdProcess @ 0x140763B10 (WbGetWarbirdProcess.c)
 *     WbAllocateUserMemory @ 0x140764478 (WbAllocateUserMemory.c)
 *     WbAllocateSlots @ 0x1407647B0 (WbAllocateSlots.c)
 *     CmpLockHashEntryShared @ 0x1407699EC (CmpLockHashEntryShared.c)
 *     CmpGetNextHive @ 0x14076A460 (CmpGetNextHive.c)
 *     CmpLockHashEntrySharedByKcb @ 0x14076A57C (CmpLockHashEntrySharedByKcb.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x14076CE2C (ExpWnfAcquireSubscriptionByName.c)
 *     VrpPostEnumerateKey @ 0x14077AEC8 (VrpPostEnumerateKey.c)
 *     VrpFindDiffHiveEntryForMountPoint @ 0x14077C57C (VrpFindDiffHiveEntryForMountPoint.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14077C688 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     CmFcManagerQueryFeatureConfigurationSectionInformation @ 0x1407C700C (CmFcManagerQueryFeatureConfigurationSectionInformation.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1407CA00C (ExpWnfEnumerateScopeInstances.c)
 *     WbGetWarbirdEncryptionSegment @ 0x1407D2990 (WbGetWarbirdEncryptionSegment.c)
 *     CmpUpdateHiveRootCellFlags @ 0x1407D8504 (CmpUpdateHiveRootCellFlags.c)
 *     CmpGetLastHive @ 0x1407D90F4 (CmpGetLastHive.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1407DCB34 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1407E27E8 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfAcquirePermanentDataStoreHandle @ 0x1407E2E00 (ExpWnfAcquirePermanentDataStoreHandle.c)
 *     ExRegisterExtension @ 0x140823170 (ExRegisterExtension.c)
 *     CmpLoadHiveThread @ 0x1408283D0 (CmpLoadHiveThread.c)
 *     CmpGlobalLockKeyForWrite @ 0x1408492DC (CmpGlobalLockKeyForWrite.c)
 *     CmpLockSiloKeyLockTrackerShared @ 0x140849558 (CmpLockSiloKeyLockTrackerShared.c)
 *     ExpKdPullRemoteFileForUser @ 0x14084FCC0 (ExpKdPullRemoteFileForUser.c)
 *     CmpVolumeContextSendDeviceUsageNotification @ 0x1408550BC (CmpVolumeContextSendDeviceUsageNotification.c)
 *     MiQuerySpecialPurposeMemoryInformation @ 0x140858394 (MiQuerySpecialPurposeMemoryInformation.c)
 *     CmpAssignKeySecurity @ 0x1408593F0 (CmpAssignKeySecurity.c)
 *     NtAreMappedFilesTheSame @ 0x140871B60 (NtAreMappedFilesTheSame.c)
 *     CmpCreateHiveRootCell @ 0x14087495C (CmpCreateHiveRootCell.c)
 *     CmRestoreKey @ 0x140A0ACF4 (CmRestoreKey.c)
 *     CmpRefreshHive @ 0x140A0C940 (CmpRefreshHive.c)
 *     CmSetKeyFlags @ 0x140A15A64 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140A15F98 (CmSetLastWriteTimeKey.c)
 *     CmpRecoverFlushProtocolStateFromFiles @ 0x140A1CF34 (CmpRecoverFlushProtocolStateFromFiles.c)
 *     CmpPromoteKey @ 0x140A2665C (CmpPromoteKey.c)
 *     CmFcpManagerPublishChangeNotifications @ 0x140A27D04 (CmFcpManagerPublishChangeNotifications.c)
 *     MiIsExtentDangling @ 0x140A33FB4 (MiIsExtentDangling.c)
 *     MiFindHotPatchRecord @ 0x140A36BEC (MiFindHotPatchRecord.c)
 *     MiFindProcessImageHotPatchRecord @ 0x140A36D7C (MiFindProcessImageHotPatchRecord.c)
 *     MiGetAllRegisteredPatches @ 0x140A3701C (MiGetAllRegisteredPatches.c)
 *     MiLogHotPatchRundown @ 0x140A39720 (MiLogHotPatchRundown.c)
 *     MiQueryLoadedPatches @ 0x140A3B330 (MiQueryLoadedPatches.c)
 *     MiQueryProcessActivePatches @ 0x140A3B60C (MiQueryProcessActivePatches.c)
 *     MiOpenSpecialPurposeMemory @ 0x140A476FC (MiOpenSpecialPurposeMemory.c)
 *     WheaConfigureErrorSource @ 0x140A90590 (WheaConfigureErrorSource.c)
 *     WheaUnconfigureErrorSource @ 0x140AAB990 (WheaUnconfigureErrorSource.c)
 *     CmLockHiveSecurityShared @ 0x140AF60A0 (CmLockHiveSecurityShared.c)
 *     CmpLockKcbShared @ 0x140AF6530 (CmpLockKcbShared.c)
 *     CmpDumpKeyToBuffer @ 0x140AF68F4 (CmpDumpKeyToBuffer.c)
 * Callees:
 *     KeAbPreAcquire @ 0x140230EE0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140243CC0 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1402FD270 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1402FD2B0 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1402FD330 (ExpOptimizePushLockList.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(
        signed __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4)
{
  int v4; // r15d
  __int64 v6; // r14
  signed __int64 v8; // rdi
  signed __int64 v9; // rcx
  signed __int64 result; // rax
  bool v11; // cl
  bool v12; // zf
  signed __int64 v13; // rax
  int i; // ecx
  unsigned __int64 v16; // r9
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int128 Object; // [rsp+30h] [rbp-40h] BYREF
  __int128 v20; // [rsp+40h] [rbp-30h]
  __int128 v21; // [rsp+50h] [rbp-20h]
  __int128 v22; // [rsp+60h] [rbp-10h] BYREF
  int v23; // [rsp+B8h] [rbp+48h] BYREF

  v23 = 0;
  Object = 0LL;
  v4 = a2 & 4;
  v20 = 0LL;
  v6 = a3;
  v21 = 0LL;
  v22 = 0LL;
  _m_prefetchw(a1);
  v8 = *a1;
  while ( (v8 & 3) != 0 && ((v8 & 1) != 0 || v4) && ((v8 & 3) != 1 || (v8 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    if ( v6 )
      KeAbPreWait(v6, a2, a3);
    v11 = 0;
    *((_QWORD *)&v22 + 1) = v6;
    DWORD1(v22) = 2;
    *((_QWORD *)&v21 + 1) = 0LL;
    if ( (v8 & 2) != 0 )
    {
      *(_QWORD *)&v21 = 0LL;
      LODWORD(v22) = -1;
      *((_QWORD *)&v20 + 1) = v8 & 0xFFFFFFFFFFFFFFF0uLL;
      a2 = (unsigned __int64)&Object | v8 & 9 | 6;
      v11 = (v8 & 4) == 0;
    }
    else
    {
      LODWORD(v22) = -2;
      *(_QWORD *)&v21 = &Object;
      a2 = (unsigned __int64)&Object + 3;
    }
    v13 = _InterlockedCompareExchange64(a1, a2, v8);
    v12 = v8 == v13;
    v8 = v13;
    if ( !v12 )
      goto LABEL_15;
    if ( v11 )
      ExpOptimizePushLockList(a1);
    *(_QWORD *)&v20 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    LOWORD(Object) = 1;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      if ( MEMORY[0xFFFFF78000000297] )
      {
        a3 = __rdtsc();
        v16 = a3 + (unsigned int)ExpSpinCycleCount;
        while ( 1 )
        {
          a2 = 0LL;
          __asm { monitorx rax, rcx, rdx }
          if ( (BYTE4(v22) & 2) == 0 )
            break;
          v17 = a3;
          v18 = __rdtsc();
          a2 = (unsigned __int64)HIDWORD(v18) << 32;
          a3 = v18;
          if ( v18 <= v17 || v18 >= v16 )
            break;
          __asm { mwaitx  rax, rcx, rbx }
        }
      }
      else
      {
        for ( i = 0; ; ++i )
        {
          a2 = DWORD1(v22);
          if ( (BYTE4(v22) & 2) == 0 || i == ExpSpinCycleCount / (unsigned int)MEMORY[0xFFFFF780000002D6] )
            break;
          _mm_pause();
        }
      }
    }
    if ( _interlockedbittestandreset((volatile signed __int32 *)&v22 + 1, 1u) )
      KeWaitForSingleObject(&Object, WrPushLock, 0, 0, 0LL);
LABEL_16:
    if ( v6 )
      v6 = KeAbPreAcquire(a4, v6);
  }
  v9 = (v8 | 1) + 16;
  if ( (v8 & 2) != 0 )
    v9 = v8 | 1;
  result = _InterlockedCompareExchange64(a1, v9, v8);
  if ( v8 != result )
  {
    if ( v6 )
      KeAbPreWait(v6, a2, a3);
LABEL_15:
    RtlBackoff(&v23);
    v8 = *a1;
    _m_prefetchw(a1);
    goto LABEL_16;
  }
  return result;
}
