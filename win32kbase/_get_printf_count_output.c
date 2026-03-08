/*
 * XREFs of _get_printf_count_output @ 0x1C00DC4A4
 * Callers:
 *     _output_l @ 0x1C00DB018 (_output_l.c)
 *     _woutput_l @ 0x1C00DB98C (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C02D0960 == (_security_cookie | 1);
}
