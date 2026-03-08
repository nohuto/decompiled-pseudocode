/*
 * XREFs of IoSetThreadHardErrorMode @ 0x140244770
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403567C4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1403BE180 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x1405C8DF4 (SmKmEtwAppendObjectName.c)
 *     ObKillProcess @ 0x1406C0F5C (ObKillProcess.c)
 *     CmpCmdHiveOpen @ 0x1406C0FC8 (CmpCmdHiveOpen.c)
 *     CmpDoFileSetSizeEx @ 0x140731FA4 (CmpDoFileSetSizeEx.c)
 *     CmpCmdHiveClose @ 0x14074B34C (CmpCmdHiveClose.c)
 *     FsRtlSetFileSize @ 0x14079BDF4 (FsRtlSetFileSize.c)
 *     EtwTraceProcess @ 0x1407E93B4 (EtwTraceProcess.c)
 *     FsRtlGetFileSize @ 0x1407F4020 (FsRtlGetFileSize.c)
 *     EtwpKernelTraceRundown @ 0x14080D9F8 (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x1409D5B90 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x1409D5DBC (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x1409D5F0C (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x1409D68D4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D6D88 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x1409D7038 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1409D70D4 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x1409D75D8 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x1409D7778 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x1409D79A8 (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x1409ECBF4 (EtwpPsProvCaptureState.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall IoSetThreadHardErrorMode(BOOLEAN EnableHardErrors)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int8 v2; // cf

  CurrentThread = KeGetCurrentThread();
  if ( EnableHardErrors )
    v2 = _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  else
    v2 = _interlockedbittestandset((volatile signed __int32 *)&CurrentThread[1].SwapListEntry + 2, 4u);
  return v2 == 0;
}
