/*
 * XREFs of MiDereferenceControlAreaFile @ 0x1402D7994
 * Callers:
 *     MiFlushSectionInternal @ 0x140219D70 (MiFlushSectionInternal.c)
 *     MiWriteComplete @ 0x1402549D0 (MiWriteComplete.c)
 *     MiGatherMappedPages @ 0x140255428 (MiGatherMappedPages.c)
 *     MiCompleteRestrictedImageFault @ 0x14029D730 (MiCompleteRestrictedImageFault.c)
 *     MiMakeSystemCachePteValid @ 0x1402F3648 (MiMakeSystemCachePteValid.c)
 *     MmFlushSection @ 0x14033D70C (MmFlushSection.c)
 *     MiCreateSystemSection @ 0x1403728BC (MiCreateSystemSection.c)
 *     MiDeprioritizeVad @ 0x1403817D4 (MiDeprioritizeVad.c)
 *     MiDeleteCachedSubsection @ 0x140528CEC (MiDeleteCachedSubsection.c)
 *     MiSetPagesModified @ 0x140534FF0 (MiSetPagesModified.c)
 *     MmCreateSpecialImageSection @ 0x140608BE4 (MmCreateSpecialImageSection.c)
 *     MiAllowImageMap @ 0x14061DE10 (MiAllowImageMap.c)
 *     MiUnmapViewOfSection @ 0x14061E510 (MiUnmapViewOfSection.c)
 *     MiUnmapVad @ 0x14061E840 (MiUnmapVad.c)
 *     MiCreateSectionCommon @ 0x140654AC0 (MiCreateSectionCommon.c)
 *     MiParseImageLoadConfig @ 0x140662858 (MiParseImageLoadConfig.c)
 *     MiLogRelocationFaults @ 0x14066321C (MiLogRelocationFaults.c)
 *     MmFlushVirtualMemory @ 0x140668FB4 (MmFlushVirtualMemory.c)
 *     MmExtendSection @ 0x14066933C (MmExtendSection.c)
 *     MiMapImageInSystemSpace @ 0x14066BCCC (MiMapImageInSystemSpace.c)
 *     NtAreMappedFilesTheSame @ 0x1406A0330 (NtAreMappedFilesTheSame.c)
 *     MiParseComAndCetHeaders @ 0x1407000C4 (MiParseComAndCetHeaders.c)
 *     MmLoadSystemImageEx @ 0x14075B2EC (MmLoadSystemImageEx.c)
 *     MiDriverLoadSucceeded @ 0x14075BE34 (MiDriverLoadSucceeded.c)
 *     MiLoadUserSymbols @ 0x1407D0D2C (MiLoadUserSymbols.c)
 *     MmGetFileNameForSection @ 0x1408C41AC (MmGetFileNameForSection.c)
 *     MiFillMapFileInfo @ 0x1408C45BC (MiFillMapFileInfo.c)
 *     MiAllocateFileExtents @ 0x1408CF560 (MiAllocateFileExtents.c)
 *     MmIsFileMapped @ 0x1408D1070 (MmIsFileMapped.c)
 *     MmSectionToSectionObjectPointers @ 0x1408D1200 (MmSectionToSectionObjectPointers.c)
 *     MiMapImageForEnclaveUse @ 0x1408D3A0C (MiMapImageForEnclaveUse.c)
 * Callees:
 *     ObDereferenceObjectDeferDelete @ 0x1402C3BD0 (ObDereferenceObjectDeferDelete.c)
 */

void __fastcall MiDereferenceControlAreaFile(__int64 a1, unsigned __int64 a2)
{
  signed __int64 v2; // rax
  signed __int64 v3; // rtt

  _m_prefetchw((const void *)(a1 + 64));
  v2 = *(_QWORD *)(a1 + 64);
  if ( (a2 ^ v2) >= 0xF )
  {
LABEL_4:
    ObDereferenceObjectDeferDelete((PVOID)a2);
  }
  else
  {
    while ( 1 )
    {
      v3 = v2;
      v2 = _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 64), v2 + 1, v2);
      if ( v3 == v2 )
        break;
      if ( (a2 ^ v2) >= 0xF )
        goto LABEL_4;
    }
  }
}
