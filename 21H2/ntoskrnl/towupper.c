/*
 * XREFs of towupper @ 0x1403D3F40
 * Callers:
 *     PfSnParametersVerify @ 0x1407BFE4C (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1406F14F0 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
