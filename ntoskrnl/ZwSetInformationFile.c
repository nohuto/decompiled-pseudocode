/*
 * XREFs of ZwSetInformationFile @ 0x1404127F0
 * Callers:
 *     DifZwSetInformationFileWrapper @ 0x1405F49F0 (DifZwSetInformationFileWrapper.c)
 *     EtwpRealtimeSaveState @ 0x14067F474 (EtwpRealtimeSaveState.c)
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 *     CmpDoFileSetSizeEx @ 0x140731FA4 (CmpDoFileSetSizeEx.c)
 *     CmpCmdHiveClose @ 0x14074B34C (CmpCmdHiveClose.c)
 *     EtwpFinalizeHeader @ 0x140771D34 (EtwpFinalizeHeader.c)
 *     EtwpCreateLogFile @ 0x140772270 (EtwpCreateLogFile.c)
 *     EtwpUpdateFileHeader @ 0x140772B94 (EtwpUpdateFileHeader.c)
 *     PopCreateHiberFile @ 0x1407FBF00 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     EtwpRealtimeZeroTruncateLogfile @ 0x1408540C0 (EtwpRealtimeZeroTruncateLogfile.c)
 *     PpLastGoodDeleteFilesCallback @ 0x1409552E0 (PpLastGoodDeleteFilesCallback.c)
 *     IopFileUtilClearAttributes @ 0x14096BE90 (IopFileUtilClearAttributes.c)
 *     PopResizeHiberFile @ 0x140985EE0 (PopResizeHiberFile.c)
 *     SmKmStoreFileCreate @ 0x1409D68D4 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1409D7038 (SmKmStoreFileDelete.c)
 *     EtwpSavePersistedLogger @ 0x1409EAC60 (EtwpSavePersistedLogger.c)
 *     CmpCmdRenameHive @ 0x140A0ED14 (CmpCmdRenameHive.c)
 *     CmpFlushBackupHive @ 0x140A17C48 (CmpFlushBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x140A182CC (CmpWriteOffsetArrayToFile.c)
 *     CmpOpenFileWithExtremePrejudice @ 0x140A1A060 (CmpOpenFileWithExtremePrejudice.c)
 *     IopFileUtilRename @ 0x140B6AD78 (IopFileUtilRename.c)
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
