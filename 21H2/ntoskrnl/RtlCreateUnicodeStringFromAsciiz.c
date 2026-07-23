/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x1407A7240
 * Callers:
 *     CmpSetSystemRegistryString @ 0x1403B7F04 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x140891878 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140A3BAF4 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140A95990 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1403B7FB0 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406637D0 (RtlAnsiStringToUnicodeString.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, PCSTR SourceString)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, SourceString) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
