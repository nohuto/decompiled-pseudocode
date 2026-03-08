/*
 * XREFs of DbgPrint @ 0x1402BDD20
 * Callers:
 *     SepCreateTokenEx @ 0x1402079F0 (SepCreateTokenEx.c)
 *     CcInsertIntoCleanSharedCacheMapList @ 0x1402DC58C (CcInsertIntoCleanSharedCacheMapList.c)
 *     CcInitializeCacheMapInternal @ 0x140338F10 (CcInitializeCacheMapInternal.c)
 *     HalpAcpiGetFacsMapping @ 0x1403705F8 (HalpAcpiGetFacsMapping.c)
 *     x86BiosExecuteInterruptShadowed @ 0x1403B8450 (x86BiosExecuteInterruptShadowed.c)
 *     HalReturnToFirmware @ 0x140504990 (HalReturnToFirmware.c)
 *     RtlpAllocateHeap @ 0x1405A8E28 (RtlpAllocateHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x1405A97B8 (RtlpCoalesceFreeBlocks.c)
 *     RtlpCreateSplitBlock @ 0x1405A9BA8 (RtlpCreateSplitBlock.c)
 *     RtlpCreateUCREntry @ 0x1405AA2DC (RtlpCreateUCREntry.c)
 *     RtlpDeCommitFreeBlock @ 0x1405AA41C (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x1405AAC2C (RtlpFindAndCommitPages.c)
 *     RtlpInsertFreeBlock @ 0x1405AB78C (RtlpInsertFreeBlock.c)
 *     RtlpTraceDatabaseInternalAdd @ 0x1405AF220 (RtlpTraceDatabaseInternalAdd.c)
 *     RtlpFindUCREntry @ 0x1405B302C (RtlpFindUCREntry.c)
 *     RtlpPopulateListIndex @ 0x1405B3494 (RtlpPopulateListIndex.c)
 *     RtlpQueryRegistryValues @ 0x14069B3C0 (RtlpQueryRegistryValues.c)
 *     IopLoadDriver @ 0x14072A9DC (IopLoadDriver.c)
 *     SepFilterToken @ 0x14073FED0 (SepFilterToken.c)
 *     ExpSetPendingUILanguage @ 0x140749238 (ExpSetPendingUILanguage.c)
 *     CmpPostApc @ 0x140785260 (CmpPostApc.c)
 *     RtlCreateHeap @ 0x14078AD90 (RtlCreateHeap.c)
 *     IopQueryLegacyBusInformation @ 0x14079344C (IopQueryLegacyBusInformation.c)
 *     RtlDestroyHeap @ 0x14079A780 (RtlDestroyHeap.c)
 *     SepDuplicateToken @ 0x1407BCF00 (SepDuplicateToken.c)
 *     CmNotifyRunDown @ 0x1407D9F54 (CmNotifyRunDown.c)
 *     RtlpMuiRegLoadRegistryInfo @ 0x140843F90 (RtlpMuiRegLoadRegistryInfo.c)
 *     IopUnloadDriver @ 0x1408549C8 (IopUnloadDriver.c)
 *     HalpTimerWatchdogLogReset @ 0x140861838 (HalpTimerWatchdogLogReset.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140978240 (ObpShutdownCloseHandleProcedure.c)
 *     RtlLCIDToCultureName @ 0x1409BBD70 (RtlLCIDToCultureName.c)
 *     CmpPostApcRunDown @ 0x140A0CAC0 (CmpPostApcRunDown.c)
 *     HalpMapNvsArea @ 0x140A93E80 (HalpMapNvsArea.c)
 *     PopWriteHeaderPages @ 0x140AA2478 (PopWriteHeaderPages.c)
 *     PopWriteImageHeader @ 0x140AA2B28 (PopWriteImageHeader.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
 *     ViIsBTSSupported @ 0x140AD0ADC (ViIsBTSSupported.c)
 *     HalpAcpiTableCacheInit @ 0x140B3DDE0 (HalpAcpiTableCacheInit.c)
 *     HalpAcpiFindRsdp @ 0x140B6C7C8 (HalpAcpiFindRsdp.c)
 * Callees:
 *     vDbgPrintExWithPrefixInternal @ 0x1402BDDE0 (vDbgPrintExWithPrefixInternal.c)
 */

ULONG DbgPrint(PCSTR Format, ...)
{
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintExWithPrefixInternal((void *)&Src, va, 1);
}
