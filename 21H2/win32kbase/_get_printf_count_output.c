/*
 * XREFs of _get_printf_count_output @ 0x1C00C6AE4
 * Callers:
 *     _output_l @ 0x1C00C5754 (_output_l.c)
 *     _woutput_l @ 0x1C00C60C0 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C024FA40 == (_security_cookie | 1);
}
