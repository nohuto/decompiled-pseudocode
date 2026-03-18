/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x140837640
 * Callers:
 *     CmpSetSystemRegistryString @ 0x1403C7CF8 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x1409346B0 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140AFB264 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140B54800 (VhdiInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x1403C7DA0 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x14075A5D0 (RtlAnsiStringToUnicodeString.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
