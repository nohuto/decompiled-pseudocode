/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x1407A7470
 * Callers:
 *     CmpSetSystemRegistryString @ 0x1403B7734 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x140891768 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140A39F24 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140A94990 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1403B77E0 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1406F6920 (RtlAnsiStringToUnicodeString.c)
 */

BOOLEAN __cdecl RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, PCSTR SourceString)
{
  _STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, SourceString) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
