/*
 * XREFs of _get_printf_count_output @ 0x1C00C6E74
 * Callers:
 *     _output_l @ 0x1C00C5AE4 (_output_l.c)
 *     _woutput_l @ 0x1C00C6450 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C024EA40 == (_security_cookie | 1);
}
