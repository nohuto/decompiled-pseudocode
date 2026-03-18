/*
 * XREFs of RtlInitUTF8String @ 0x1405E4060
 * Callers:
 *     PiGetDefaultMessageString @ 0x1408523B4 (PiGetDefaultMessageString.c)
 * Callees:
 *     RtlInitString @ 0x14036B950 (RtlInitString.c)
 */

void __fastcall RtlInitUTF8String(STRING *a1, const char *a2)
{
  RtlInitString(a1, a2);
}
