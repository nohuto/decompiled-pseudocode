/*
 * XREFs of ZwSetInformationFile @ 0x14041BC40
 * Callers:
 *     DifZwSetInformationFileWrapper @ 0x140627180 (DifZwSetInformationFileWrapper.c)
 *     CmpCmdHiveClose @ 0x14067C24C (CmpCmdHiveClose.c)
 *     CmpDoFileSetSizeEx @ 0x14068EC28 (CmpDoFileSetSizeEx.c)
 *     EtwpRealtimeSaveState @ 0x1406EA4C0 (EtwpRealtimeSaveState.c)
 *     EtwpCreateLogFile @ 0x1406F0614 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x1406F09A8 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x1406F1AC4 (EtwpFinalizeHeader.c)
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 *     PopCreateHiberFile @ 0x140801108 (PopCreateHiberFile.c)
 *     PopResizeHiberFile @ 0x140801624 (PopResizeHiberFile.c)
 *     MiCreatePagingFile @ 0x14084AA8C (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x14085CC28 (EtwpRealtimeZeroTruncateLogfile.c)
 *     CmpFlushBackupHive @ 0x140917A40 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x1409180B0 (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140919908 (CmpOpenFileWithExtremePrejudice.c)
 *     CmpCmdRenameHive @ 0x14091D570 (CmpCmdRenameHive.c)
 *     PpLastGoodDeleteFilesCallback @ 0x140946830 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14095A3E4 (IopFileUtilClearAttributes.c)
 *     SmKmStoreFileCreate @ 0x1409D64F8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1409D6C58 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1409ED100 (EtwpSavePersistedLogger.c)
 *     IopFileUtilRename @ 0x140B2AFB8 (IopFileUtilRename.c)
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
