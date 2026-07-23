/*
 * XREFs of RtlDosLongPathNameToNtPathName_U_WithStatus @ 0x1800CC2F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpDosPathNameToRelativeNtPathName_U @ 0x18001A974 (RtlpDosPathNameToRelativeNtPathName_U.c)
 */

NTSTATUS __cdecl RtlDosLongPathNameToNtPathName_U_WithStatus(
        PCWSTR DosFileName,
        PUNICODE_STRING NtFileName,
        PWSTR *FilePart,
        PRTL_RELATIVE_NAME_U RelativeName)
{
  return RtlpDosPathNameToRelativeNtPathName_U(
           4,
           DosFileName,
           (int)NtFileName,
           (__int64)FilePart,
           (__int64)RelativeName);
}
