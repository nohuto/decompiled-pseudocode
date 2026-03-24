/*
 * XREFs of ZwSetInformationFile @ 0x1403FA880
 * Callers:
 *     CmpOpenHiveFile @ 0x1406718C8 (CmpOpenHiveFile.c)
 *     EtwpRealtimeSaveState @ 0x1406C340C (EtwpRealtimeSaveState.c)
 *     EtwpFinalizeHeader @ 0x1406DF770 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1406DFAAC (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1406DFDA8 (EtwpUpdateFileHeader.c)
 *     CmpCmdHiveClose @ 0x14071CE14 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x140724A00 (CmpDoFileSetSizeEx.c)
 *     PopResizeHiberFile @ 0x140776CC8 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x1407919C0 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x1407B661C (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1407CD2B8 (EtwpRealtimeZeroTruncateLogfile.c)
 *     CmpFlushBackupHive @ 0x140870F40 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14087162C (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140872FE8 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpCmdRenameHive @ 0x140876ADC (CmpCmdRenameHive.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1408A16D0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1408B431C (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x14092BFDC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14092C73C (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x140948C8C (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x140A6F0E4 (IopFileUtilRename.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwSetInformationFile(
        HANDLE FileHandle,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID FileInformation,
        ULONG Length,
        FILE_INFORMATION_CLASS FileInformationClass)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, IoStatusBlock);
}
