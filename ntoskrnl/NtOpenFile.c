/*
 * XREFs of NtOpenFile @ 0x1407E1EC0
 * Callers:
 *     DifNtOpenFileWrapper @ 0x1405E5CA0 (DifNtOpenFileWrapper.c)
 *     PfSnGetPrefetchInstructions @ 0x1407E1BA4 (PfSnGetPrefetchInstructions.c)
 *     RtlpSysVolTakeOwnership @ 0x1409BBBD8 (RtlpSysVolTakeOwnership.c)
 * Callees:
 *     IopCreateFile @ 0x1407CE5A0 (IopCreateFile.c)
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  return IopCreateFile(
           FileHandle,
           DesiredAccess,
           (__int64)ObjectAttributes,
           (int *)&IoStatusBlock->0,
           0LL,
           0,
           ShareAccess,
           1u,
           OpenOptions,
           0LL,
           0,
           0,
           0LL,
           0,
           32,
           0LL);
}
