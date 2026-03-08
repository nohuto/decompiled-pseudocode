/*
 * XREFs of IoCreateFile @ 0x140781BC0
 * Callers:
 *     DifIoCreateFileWrapper @ 0x1405DC150 (DifIoCreateFileWrapper.c)
 *     NtCreateNamedPipeFile @ 0x140781A60 (NtCreateNamedPipeFile.c)
 *     PopCreateHiberFile @ 0x1407FBF00 (PopCreateHiberFile.c)
 *     MiCreatePagingFile @ 0x140834F7C (MiCreatePagingFile.c)
 *     NtCreateMailslotFile @ 0x140947BE0 (NtCreateMailslotFile.c)
 *     SmKmStoreFileCreateForIoType @ 0x1409D6D88 (SmKmStoreFileCreateForIoType.c)
 *     IopInitCrashDumpRegCallback @ 0x140B5E290 (IopInitCrashDumpRegCallback.c)
 * Callees:
 *     IopCreateFile @ 0x1407CE5A0 (IopCreateFile.c)
 */

NTSTATUS __stdcall IoCreateFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        PLARGE_INTEGER AllocationSize,
        ULONG FileAttributes,
        ULONG ShareAccess,
        ULONG Disposition,
        ULONG CreateOptions,
        PVOID EaBuffer,
        ULONG EaLength,
        CREATE_FILE_TYPE CreateFileType,
        PVOID InternalParameters,
        ULONG Options)
{
  return IopCreateFile(
           (int)FileHandle,
           DesiredAccess,
           (int)ObjectAttributes,
           (int)IoStatusBlock,
           (__int64)AllocationSize,
           FileAttributes,
           ShareAccess,
           Disposition,
           CreateOptions,
           (__int64)EaBuffer,
           EaLength,
           CreateFileType,
           (__int64)InternalParameters,
           Options,
           0,
           0LL);
}
