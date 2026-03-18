/*
 * XREFs of towupper @ 0x1403DB170
 * Callers:
 *     PfSnParametersVerify @ 0x140848934 (PfSnParametersVerify.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1406DA330 (RtlUpcaseUnicodeChar.c)
 */

wint_t __cdecl towupper(wint_t C)
{
  return RtlUpcaseUnicodeChar(C);
}
