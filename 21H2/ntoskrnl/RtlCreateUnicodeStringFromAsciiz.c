/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x1407A7040
 * Callers:
 *     CmpSetSystemRegistryString @ 0x1403B7D94 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x140891718 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140A3AAF4 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140A94990 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1403B7E40 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x14062C640 (RtlAnsiStringToUnicodeString.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
