/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x1403891CC
 * Callers:
 *     IopCreateArcName @ 0x14086D7D8 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140B54EB0 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
