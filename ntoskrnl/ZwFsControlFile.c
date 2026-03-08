/*
 * XREFs of ZwFsControlFile @ 0x140412A30
 * Callers:
 *     DifZwFsControlFileWrapper @ 0x1405EE630 (DifZwFsControlFileWrapper.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1406392E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     CmpOpenHiveFile @ 0x1406C05C4 (CmpOpenHiveFile.c)
 *     RtlUnlockBootStatusData @ 0x14073D1B0 (RtlUnlockBootStatusData.c)
 *     PopCreateHiberFile @ 0x1407FBF00 (PopCreateHiberFile.c)
 *     PopSanityCheckHiberFile @ 0x1407FC518 (PopSanityCheckHiberFile.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14084F0A8 (FsRtlpRegisterProviderWithMUP.c)
 *     PfpQueryFileExtentsRequest @ 0x14097B4F0 (PfpQueryFileExtentsRequest.c)
 *     PopClearHiberFileSignature @ 0x14098544C (PopClearHiberFileSignature.c)
 *     SmKmStoreFileGetExtents @ 0x1409D70D4 (SmKmStoreFileGetExtents.c)
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
