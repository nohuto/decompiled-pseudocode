/*
 * XREFs of RtlInitUTF8StringEx @ 0x1405853B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1403B77E0 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __cdecl RtlInitUTF8StringEx(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
