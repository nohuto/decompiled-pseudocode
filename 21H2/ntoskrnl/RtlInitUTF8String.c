/*
 * XREFs of RtlInitUTF8String @ 0x1405856C0
 * Callers:
 *     PiGetDefaultMessageString @ 0x14076B1E4 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402713E0 (RtlInitAnsiString.c)
 */

void __cdecl RtlInitUTF8String(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  RtlInitAnsiString(DestinationString, SourceString);
}
