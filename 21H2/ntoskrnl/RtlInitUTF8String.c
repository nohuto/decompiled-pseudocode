/*
 * XREFs of RtlInitUTF8String @ 0x140585490
 * Callers:
 *     PiGetDefaultMessageString @ 0x14076B024 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402502B0 (RtlInitAnsiString.c)
 */

void __fastcall RtlInitUTF8String(STRING *a1, const char *a2)
{
  RtlInitAnsiString(a1, a2);
}
