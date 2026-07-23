/*
 * XREFs of RtlReleaseRelativeName @ 0x18001A320
 * Callers:
 *     RtlDoesFileExists_UstrEx @ 0x18001A1F0 (RtlDoesFileExists_UstrEx.c)
 *     LdrpMapResourceFile @ 0x180058A3C (LdrpMapResourceFile.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180073650 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180073B9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpMUIEnumerateFolder @ 0x18008737C (RtlpMUIEnumerateFolder.c)
 *     LdrpCnvrtShortToLongFileName @ 0x1800E0E9C (LdrpCnvrtShortToLongFileName.c)
 *     LdrpResMapFile @ 0x1800E41D4 (LdrpResMapFile.c)
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     NtClose @ 0x18009D6C0 (NtClose.c)
 */

void __cdecl RtlReleaseRelativeName(PRTL_RELATIVE_NAME_U RelativeName)
{
  PRTLP_CURDIR_REF CurDirRef; // rbx

  CurDirRef = RelativeName->CurDirRef;
  if ( CurDirRef )
  {
    if ( _InterlockedExchangeAdd(&CurDirRef->ReferenceCount, 0xFFFFFFFF) == 1 )
    {
      NtClose(CurDirRef->DirectoryHandle);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, CurDirRef);
    }
    RelativeName->CurDirRef = 0LL;
  }
}
