/*
 * XREFs of RtlDosPathNameToRelativeNtPathName_U @ 0x180016B80
 * Callers:
 *     LdrpIsReparsePoint @ 0x180053670 (LdrpIsReparsePoint.c)
 *     RtlpFileIsWin32WithRCManifest @ 0x180058DDC (RtlpFileIsWin32WithRCManifest.c)
 *     RtlpResolveAssemblyStorageMapEntry @ 0x180073650 (RtlpResolveAssemblyStorageMapEntry.c)
 *     RtlpProbeAssemblyStorageRootForAssembly @ 0x180073B9C (RtlpProbeAssemblyStorageRootForAssembly.c)
 *     RtlpMUIEnumerateFolder @ 0x18008737C (RtlpMUIEnumerateFolder.c)
 *     LdrpResMapFile @ 0x1800E41D4 (LdrpResMapFile.c)
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A974 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

BOOLEAN __cdecl RtlDosPathNameToRelativeNtPathName_U(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return (int)RtlpDosPathNameToRelativeNtPathName_U(
                2,
                (_DWORD)DosFileName,
                (_DWORD)NtFileName,
                (_DWORD)FilePart,
                (__int64)RelativeName) >= 0;
}
