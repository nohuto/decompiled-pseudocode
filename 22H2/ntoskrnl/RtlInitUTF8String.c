/*
 * XREFs of RtlInitUTF8String @ 0x1405853D0
 * Callers:
 *     PiGetDefaultMessageString @ 0x14076A644 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14024FB10 (RtlInitAnsiString.c)
 */

void __cdecl RtlInitUTF8String(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  RtlInitAnsiString(DestinationString, SourceString);
}
