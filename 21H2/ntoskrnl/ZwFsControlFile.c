/*
 * XREFs of ZwFsControlFile @ 0x14041BE80
 * Callers:
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14059D170 (MiTrimUnusedPageFileRegionsWorker.c)
 *     DifZwFsControlFileWrapper @ 0x140620BA0 (DifZwFsControlFileWrapper.c)
 *     RtlUnlockBootStatusData @ 0x1406D6AD0 (RtlUnlockBootStatusData.c)
 *     CmpOpenHiveFile @ 0x140713F8C (CmpOpenHiveFile.c)
 *     PopClearHiberFileSignature @ 0x1408005A0 (PopClearHiberFileSignature.c)
 *     PopCreateHiberFile @ 0x140801108 (PopCreateHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x1408017F8 (PopSanityCheckHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1408568A0 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x1409876B8 (PfpQueryFileExtentsRequest.c)
 *     SmKmStoreFileGetExtents @ 0x1409D6CF4 (SmKmStoreFileGetExtents.c)
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
