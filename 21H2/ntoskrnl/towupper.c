/*
 * XREFs of towupper @ 0x1403E3180
 * Callers:
 *     PfSnParametersVerify @ 0x1408505D0 (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1407CD620 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
