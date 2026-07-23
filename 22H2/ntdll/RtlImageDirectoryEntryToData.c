/*
 * XREFs of RtlImageDirectoryEntryToData @ 0x18007E340
 * Callers:
 *     <none>
 * Callees:
 *     RtlpImageDirectoryEntryToDataEx @ 0x180032920 (RtlpImageDirectoryEntryToDataEx.c)
 */

PVOID __cdecl RtlImageDirectoryEntryToData(
        PVOID BaseOfImage,
        BOOLEAN MappedAsImage,
        USHORT DirectoryEntry,
        PULONG Size)
{
  NTSTATUS v4; // eax
  void *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF

  v4 = RtlpImageDirectoryEntryToDataEx((unsigned __int64)BaseOfImage, MappedAsImage, DirectoryEntry, Size, (char **)&v7);
  v5 = (void *)v7;
  if ( v4 < 0 )
    return 0LL;
  return v5;
}
