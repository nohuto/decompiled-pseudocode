/*
 * XREFs of NtOpenFile @ 0x18009DB40
 * Callers:
 *     RtlpCheckRelativeDrive @ 0x18004A4B8 (RtlpCheckRelativeDrive.c)
 *     LdrpMapResourceFile @ 0x180058A3C (LdrpMapResourceFile.c)
 *     RtlpCreateNewDirectoryReference @ 0x18005FCFC (RtlpCreateNewDirectoryReference.c)
 *     LdrpMapDllNtFileName @ 0x1800610A4 (LdrpMapDllNtFileName.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180073650 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180073B9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     LdrpFindLoadedDllByMappingFile @ 0x1800755A0 (LdrpFindLoadedDllByMappingFile.c)
 *     RtlpMUIEnumerateFolder @ 0x18008737C (RtlpMUIEnumerateFolder.c)
 *     RtlpSysVolTakeOwnership @ 0x1800889FC (RtlpSysVolTakeOwnership.c)
 *     LdrpCheckAppDirType @ 0x1800D054C (LdrpCheckAppDirType.c)
 *     AvrfMiniLoadDll @ 0x1800DB560 (AvrfMiniLoadDll.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0E9C (LdrpCnvrtShortToLongFileName.c)
 *     RtlpOpenAndMapCustomCultureFile @ 0x1800FD510 (RtlpOpenAndMapCustomCultureFile.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall NtOpenFile(
        PHANDLE FileHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        PIO_STATUS_BLOCK IoStatusBlock,
        ULONG ShareAccess,
        ULONG OpenOptions)
{
  NTSTATUS result; // eax

  result = 51;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
