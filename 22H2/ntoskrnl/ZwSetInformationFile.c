/*
 * XREFs of ZwSetInformationFile @ 0x1403F9F00
 * Callers:
 *     EtwpRealtimeSaveState @ 0x1406A5D48 (EtwpRealtimeSaveState.c)
 *     CmpOpenHiveFile @ 0x1406EA6B8 (CmpOpenHiveFile.c)
 *     EtwpFinalizeHeader @ 0x140713010 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x14071334C (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x140713648 (EtwpUpdateFileHeader.c)
 *     CmpCmdHiveClose @ 0x14071C1E4 (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x140723DD0 (CmpDoFileSetSizeEx.c)
 *     PopResizeHiberFile @ 0x140773D58 (PopResizeHiberFile.c)
 *     PopCreateHiberFile @ 0x14079BC20 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x1407B6DDC (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1407CD1D8 (EtwpRealtimeZeroTruncateLogfile.c)
 *     CmpFlushBackupHive @ 0x140870F90 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x14087167C (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140873038 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpCmdRenameHive @ 0x140876B2C (CmpCmdRenameHive.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1408A1720 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x1408B436C (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x14092C02C (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14092C78C (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x140948CDC (EtwpSavePersistedLogger.c)
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
  return KiServiceInternal(FileHandle);
}
