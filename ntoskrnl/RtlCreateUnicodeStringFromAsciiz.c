/*
 * XREFs of RtlCreateUnicodeStringFromAsciiz @ 0x140817BE0
 * Callers:
 *     CmpSetSystemRegistryString @ 0x140388BB0 (CmpSetSystemRegistryString.c)
 *     IopInitializeBootLogging @ 0x140941EE0 (IopInitializeBootLogging.c)
 *     InitBootProcessor @ 0x140B47864 (InitBootProcessor.c)
 *     VhdiInitializeBootDisk @ 0x140B97B20 (VhdiInitializeBootDisk.c)
 *     CimfsInitializeBootDisk @ 0x140B97F70 (CimfsInitializeBootDisk.c)
 * Callees:
 *     RtlInitAnsiStringEx @ 0x140388C60 (RtlInitAnsiStringEx.c)
 *     RtlAnsiStringToUnicodeString @ 0x1407A39E0 (RtlAnsiStringToUnicodeString.c)
 */

bool __fastcall RtlCreateUnicodeStringFromAsciiz(PUNICODE_STRING DestinationString, const char *a2)
{
  STRING DestinationStringa; // [rsp+20h] [rbp-18h] BYREF

  DestinationStringa = 0LL;
  return RtlInitAnsiStringEx(&DestinationStringa, a2) >= 0
      && RtlAnsiStringToUnicodeString(DestinationString, &DestinationStringa, 1u) >= 0;
}
