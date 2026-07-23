/*
 * XREFs of ZwSetInformationFile @ 0x1403FAA60
 * Callers:
 *     CmpCmdHiveClose @ 0x1405E0548 (CmpCmdHiveClose.c)
 *     EtwpRealtimeSaveState @ 0x140622014 (EtwpRealtimeSaveState.c)
 *     CmpOpenHiveFile @ 0x1406A3938 (CmpOpenHiveFile.c)
 *     EtwpFinalizeHeader @ 0x1406B6A50 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x1406B6D8C (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1406B7088 (EtwpUpdateFileHeader.c)
 *     CmpDoFileSetSizeEx @ 0x1406FC9FC (CmpDoFileSetSizeEx.c)
 *     PopResizeHiberFile @ 0x140776E88 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x140792F70 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x1407B6B3C (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1407CD428 (EtwpRealtimeZeroTruncateLogfile.c)
 *     CmpFlushBackupHive @ 0x1408710A0 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14087178C (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140873148 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpCmdRenameHive @ 0x140876C3C (CmpCmdRenameHive.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1408A1830 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1408B447C (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x14092C13C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14092C89C (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x140948E5C (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x140A700E4 (IopFileUtilRename.c)
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
  return KiServiceInternal(FileHandle);
}
