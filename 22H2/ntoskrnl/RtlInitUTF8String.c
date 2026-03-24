/*
 * XREFs of RtlInitUTF8String @ 0x1405853D0
 * Callers:
 *     PiGetDefaultMessageString @ 0x14076A644 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14024FB10 (RtlInitAnsiString.c)
 */

void __fastcall RtlInitUTF8String(STRING *a1, const char *a2)
{
  RtlInitAnsiString(a1, a2);
}
