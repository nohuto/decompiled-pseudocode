/*
 * XREFs of IopCreateUnicodeFromAnsiBuffer @ 0x1403B7ED4
 * Callers:
 *     IopCreateArcName @ 0x140780218 (IopCreateArcName.c)
 *     IopMarkBootPartition @ 0x140A61890 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14024FB10 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406F6920 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall IopCreateUnicodeFromAnsiBuffer(PUNICODE_STRING DestinationString, const CHAR *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  RtlInitAnsiString(&DestinationStringa, a2);
  return RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u);
}
