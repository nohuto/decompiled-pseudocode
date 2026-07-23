/*
 * XREFs of RtlInitUTF8String @ 0x180086030
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl RtlInitUTF8String(PUTF8_STRING DestinationString, PCSZ SourceString)
{
  RtlInitAnsiString(DestinationString, SourceString);
}
