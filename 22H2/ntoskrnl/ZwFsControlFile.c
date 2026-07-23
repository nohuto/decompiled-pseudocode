/*
 * XREFs of ZwFsControlFile @ 0x1403FA140
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1403306A0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x1406EA6B8 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x14078C5B0 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x14078E178 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14078E594 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x14079BC20 (PopCreateHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407C7930 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFD5C (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x14092C828 (SmKmStoreFileGetExtents.c)
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
