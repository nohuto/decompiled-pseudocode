/*
 * XREFs of CmpAllocateTransientPoolWithTag @ 0x140206F50
 * Callers:
 *     CmAllocateExtraParameter @ 0x1405D3740 (CmAllocateExtraParameter.c)
 *     CmpBuildAdminInformation @ 0x1405D9BE0 (CmpBuildAdminInformation.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x1405EC7E0 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpGetNameControlBlock @ 0x1405EFC10 (CmpGetNameControlBlock.c)
 *     CmpConstructNameWithStatus @ 0x1405F2FF0 (CmpConstructNameWithStatus.c)
 *     CmpConstructNameFromKeyNodes @ 0x1405F3210 (CmpConstructNameFromKeyNodes.c)
 *     CmQueryValueKey @ 0x1405F7700 (CmQueryValueKey.c)
 *     CmpParseKey @ 0x140646330 (CmpParseKey.c)
 *     CmpStartKcbStack @ 0x140648AA0 (CmpStartKcbStack.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14066EF68 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14066F364 (CmpLightWeightCreateSetValueData.c)
 *     CmLoadKey @ 0x14069DA54 (CmLoadKey.c)
 *     CmpAddToHiveFileList @ 0x1406A1CFC (CmpAddToHiveFileList.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1406A4E54 (CmpLogTransactionAbortedWithChildName.c)
 *     CmpStartKcbStackForTopLayerKcb @ 0x1406DEB20 (CmpStartKcbStackForTopLayerKcb.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1406E5AEC (CmpSetSecurityDescriptorInfo.c)
 *     CmLoadAppKey @ 0x1406E8CDC (CmLoadAppKey.c)
 *     CmpDoFileWrite @ 0x1406EA3AC (CmpDoFileWrite.c)
 *     CmpReorganizeHive @ 0x14071FE88 (CmpReorganizeHive.c)
 *     CmpSubtreeEnumeratorStart @ 0x14072AF4C (CmpSubtreeEnumeratorStart.c)
 *     CmpKeyEnumStackStart @ 0x14072B04C (CmpKeyEnumStackStart.c)
 *     CmpStartKeyNodeStack @ 0x14072B0A8 (CmpStartKeyNodeStack.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x140731D08 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x140778B38 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpCreateRegistryProcessToken @ 0x140798BF0 (CmpCreateRegistryProcessToken.c)
 *     CmpFinishSystemHivesLoad @ 0x1407A76E0 (CmpFinishSystemHivesLoad.c)
 *     CmpCreateGlobalKeyLockEntry @ 0x1407C3ABC (CmpCreateGlobalKeyLockEntry.c)
 *     CmpCreateSiloKeyLockEntry @ 0x1407C3B18 (CmpCreateSiloKeyLockEntry.c)
 *     CmpSaveBootControlSet @ 0x140867AD0 (CmpSaveBootControlSet.c)
 *     CmpReadBuildLab @ 0x14086BE64 (CmpReadBuildLab.c)
 *     CmpRecordShutdownStopTime @ 0x14086BFE0 (CmpRecordShutdownStopTime.c)
 *     CmReplaceKey @ 0x14086DA18 (CmReplaceKey.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140871B14 (CmpDoAccessCheckOnSubtree.c)
 *     CmpSnapshotKcbStackSecurity @ 0x1408720C4 (CmpSnapshotKcbStackSecurity.c)
 *     HvpPerformLogFileRecovery @ 0x14087410C (HvpPerformLogFileRecovery.c)
 *     HvpRecoverDataReadRoutine @ 0x140874730 (HvpRecoverDataReadRoutine.c)
 *     CmpReserveRollbackPacketSpace @ 0x140874FDC (CmpReserveRollbackPacketSpace.c)
 *     CmpDoReadTxRBigLogRecord @ 0x1408753C4 (CmpDoReadTxRBigLogRecord.c)
 *     CmpKeyEnumStackCreateResumeContext @ 0x14087A834 (CmpKeyEnumStackCreateResumeContext.c)
 *     CmpGetValueForAudit @ 0x14087B430 (CmpGetValueForAudit.c)
 *     CmpSortedValueEnumStackEntryStart @ 0x14087B778 (CmpSortedValueEnumStackEntryStart.c)
 *     CmpSortedValueEnumStackStartFromKeyNodeStack @ 0x14087B94C (CmpSortedValueEnumStackStartFromKeyNodeStack.c)
 *     CmpRefreshHive @ 0x14087D448 (CmpRefreshHive.c)
 *     CmpLightWeightCreateModificationData @ 0x14087F25C (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14087F660 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpPromoteKey @ 0x140880318 (CmpPromoteKey.c)
 *     VerifierExAllocatePoolEx @ 0x1409D4C60 (VerifierExAllocatePoolEx.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall CmpAllocateTransientPoolWithTag(
        POOL_TYPE PoolType,
        SIZE_T NumberOfBytes,
        ULONG Tag,
        PLOOKASIDE_LIST_EX Lookaside)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
