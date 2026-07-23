/*
 * XREFs of ZwFsControlFile @ 0x1403FACA0
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140255630 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x1406A3938 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x14078C870 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x14078E438 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14078E854 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140792F70 (PopCreateHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407C7D30 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFE6C (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x14092C938 (SmKmStoreFileGetExtents.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFsControlFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG FsControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle);
}
