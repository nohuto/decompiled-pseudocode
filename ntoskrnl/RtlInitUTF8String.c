/*
 * XREFs of RtlInitUTF8String @ 0x1405A5260
 * Callers:
 *     PiGetDefaultMessageString @ 0x140847760 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x140299410 (RtlInitAnsiString.c)
 */

void __fastcall RtlInitUTF8String(STRING *a1, const char *a2)
{
  RtlInitAnsiString(a1, a2);
}
