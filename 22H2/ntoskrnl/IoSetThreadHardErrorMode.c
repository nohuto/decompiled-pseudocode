/*
 * XREFs of IoSetThreadHardErrorMode @ 0x14024FB60
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14026782C (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140325030 (FsRtlGetVirtualDiskNestingLevel.c)
 *     SmKmEtwAppendObjectName @ 0x14059DB88 (SmKmEtwAppendObjectName.c)
 *     EtwTraceProcess @ 0x14060330C (EtwTraceProcess.c)
 *     ObKillProcess @ 0x1406034EC (ObKillProcess.c)
 *     CmpCmdHiveOpen @ 0x140603588 (CmpCmdHiveOpen.c)
 *     FsRtlSetFileSize @ 0x140669A10 (FsRtlSetFileSize.c)
 *     FsRtlGetFileSize @ 0x140702130 (FsRtlGetFileSize.c)
 *     CmpCmdHiveClose @ 0x14071C1E4 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x140723DD0 (CmpDoFileSetSizeEx.c)
 *     EtwpKernelTraceRundown @ 0x1407922CC (EtwpKernelTraceRundown.c)
 *     SmKmFileInfoCleanup @ 0x14092B2C8 (SmKmFileInfoCleanup.c)
 *     SmKmFileInfoGetPath @ 0x14092B4F4 (SmKmFileInfoGetPath.c)
 *     SmKmIsVolumeIoPossible @ 0x14092B644 (SmKmIsVolumeIoPossible.c)
 *     SmKmStoreFileCreate @ 0x14092C02C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileCreateForIoType @ 0x14092C4DC (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileDelete @ 0x14092C78C (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14092C828 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileOpenVolume @ 0x14092CD24 (SmKmStoreFileOpenVolume.c)
 *     SmKmStoreFileWriteHeader @ 0x14092CEC4 (SmKmStoreFileWriteHeader.c)
 *     SmKmVolumeQueryUniqueId @ 0x14092D0EC (SmKmVolumeQueryUniqueId.c)
 *     EtwpPsProvCaptureState @ 0x14093EB28 (EtwpPsProvCaptureState.c)
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
