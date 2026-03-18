/*
 * XREFs of RtlUpcaseUnicodeToMultiByteN_0 @ 0x1C00D7C56
 * Callers:
 *     toupper @ 0x1C00D6190 (toupper.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall RtlUpcaseUnicodeToMultiByteN_0(
        PCHAR MultiByteString,
        ULONG MaxBytesInMultiByteString,
        PULONG BytesInMultiByteString,
        PCWCH UnicodeString,
        ULONG BytesInUnicodeString)
{
  return RtlUpcaseUnicodeToMultiByteN(
           MultiByteString,
           MaxBytesInMultiByteString,
           BytesInMultiByteString,
           UnicodeString,
           BytesInUnicodeString);
}
