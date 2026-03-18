/*
 * XREFs of RtlIdnToAscii @ 0x1409BF3F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpNameprepAsciiWorker @ 0x1409BF4EC (RtlpNameprepAsciiWorker.c)
 */

NTSTATUS __stdcall RtlIdnToAscii(
        ULONG Flags,
        PCWSTR SourceString,
        LONG SourceStringLength,
        PWSTR DestinationString,
        PLONG DestinationStringLength)
{
  return RtlpNameprepAsciiWorker(
           Flags,
           (_DWORD)SourceString,
           SourceStringLength,
           (_DWORD)DestinationString,
           (__int64)DestinationStringLength,
           1);
}
