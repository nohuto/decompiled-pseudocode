/*
 * XREFs of ZwFsControlFile @ 0x1403FAAC0
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140267690 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x1406718C8 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x14078C6B0 (RtlUnlockBootStatusData.c)
 *     PopSanityCheckHiberFile @ 0x14078E278 (PopSanityCheckHiberFile.c)
 *     PopClearHiberFileSignature @ 0x14078E694 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x1407919C0 (PopCreateHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407C7A10 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x1408DFD0C (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x14092C7D8 (SmKmStoreFileGetExtents.c)
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
  return KiServiceInternal(FileHandle, Event);
}
