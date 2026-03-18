/*
 * XREFs of RtlInitUTF8String @ 0x1405A76F0
 * Callers:
 *     PiGetDefaultMessageString @ 0x140849DD8 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitAnsiString @ 0x1402F6C50 (RtlInitAnsiString.c)
 */

void __fastcall RtlInitUTF8String(STRING *a1, const char *a2)
{
  RtlInitAnsiString(a1, a2);
}
