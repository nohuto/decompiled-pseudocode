/*
 * XREFs of towupper @ 0x1403D5C50
 * Callers:
 *     PfSnParametersVerify @ 0x1408457D4 (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1406EA4F0 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
