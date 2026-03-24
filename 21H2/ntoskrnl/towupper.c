/*
 * XREFs of towupper @ 0x1403D3DD0
 * Callers:
 *     PfSnParametersVerify @ 0x1407BF930 (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x140601D90 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
