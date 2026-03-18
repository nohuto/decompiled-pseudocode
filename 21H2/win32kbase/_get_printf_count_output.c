/*
 * XREFs of _get_printf_count_output @ 0x1C00D79B4
 * Callers:
 *     _output_l @ 0x1C00D6548 (_output_l.c)
 *     _woutput_l @ 0x1C00D6EA0 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C02947E0 == (_security_cookie | 1);
}
