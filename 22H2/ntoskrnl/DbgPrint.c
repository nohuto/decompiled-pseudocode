/*
 * XREFs of DbgPrint @ 0x140364360
 * Callers:
 *     SepCreateTokenEx @ 0x140201AA0 (SepCreateTokenEx.c)
 *     CcInitializeCacheMapEx @ 0x14022DF30 (CcInitializeCacheMapEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x140272EF8 (CcInsertIntoCleanSharedCacheMapList.c)
 *     x86BiosExecuteInterruptShadowed @ 0x140395CE0 (x86BiosExecuteInterruptShadowed.c)
 *     HalpAcpiGetFacsMapping @ 0x1403BA168 (HalpAcpiGetFacsMapping.c)
 *     HalReturnToFirmware @ 0x1404BE0F0 (HalReturnToFirmware.c)
 *     RtlpAllocateHeap @ 0x140588A70 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405893D0 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405897C0 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x140589EE4 (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x14058A024 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x14058A878 (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x14058B2EC (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x14058EBE8 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x140593C50 (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405940BC (RtlpPopulateListIndex.c)
 *     SepFilterToken @ 0x1405DB0FC (SepFilterToken.c)
 *     SepDuplicateToken @ 0x140651490 (SepDuplicateToken.c)
 *     CmpPostApc @ 0x140681440 (CmpPostApc.c)
 *     RtlpQueryRegistryValues @ 0x1406B9848 (RtlpQueryRegistryValues.c)
 *     CmNotifyRunDown @ 0x1406C5510 (CmNotifyRunDown.c)
 *     IopQueryLegacyBusInformation @ 0x14073A988 (IopQueryLegacyBusInformation.c)
 *     IopLoadDriver @ 0x14073CD08 (IopLoadDriver.c)
 *     RtlCreateHeap @ 0x140768180 (RtlCreateHeap.c)
 *     IopUnloadDriver @ 0x140768DB8 (IopUnloadDriver.c)
 *     RtlDestroyHeap @ 0x1407727F0 (RtlDestroyHeap.c)
 *     ExpSetPendingUILanguage @ 0x14078BF70 (ExpSetPendingUILanguage.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x140790108 (RtlpMuiRegLoadRegistryInfo.c)
 *     HalpTimerWatchdogLogReset @ 0x1407D5034 (HalpTimerWatchdogLogReset.c)
 *     CmpPostApcRunDown @ 0x14086A1E0 (CmpPostApcRunDown.c)
 *     KeSetTracepoint @ 0x1408BC3C0 (KeSetTracepoint.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1408DC900 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x140916070 (RtlLCIDToCultureName.c)
 *     PopWriteHeaderPages @ 0x140991478 (PopWriteHeaderPages.c)
 *     PoBroadcastSystemState @ 0x140992AC4 (PoBroadcastSystemState.c)
 *     HalpMapNvsArea @ 0x140998E18 (HalpMapNvsArea.c)
 *     PopWriteImageHeader @ 0x1409B1E60 (PopWriteImageHeader.c)
 *     ViIsBTSSupported @ 0x1409D8638 (ViIsBTSSupported.c)
 *     HalpAcpiFindRsdp @ 0x140A64290 (HalpAcpiFindRsdp.c)
 *     HalpAcpiTableCacheInit @ 0x140A64690 (HalpAcpiTableCacheInit.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1403643E0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, 0x65u, 3u, va, 1);
}
