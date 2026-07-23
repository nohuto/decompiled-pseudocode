/*
 * XREFs of RtlInitUTF8StringEx @ 0x1405856A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1403B7FB0 (RtlInitAnsiStringEx.c)
 */

NTSTATUS __cdecl RtlInitUTF8StringEx(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  return RtlInitAnsiStringEx(DestinationString, SourceString);
}
