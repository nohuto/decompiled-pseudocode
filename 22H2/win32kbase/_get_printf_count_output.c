/*
 * XREFs of _get_printf_count_output @ 0x1C00CFBF4
 * Callers:
 *     _output_l @ 0x1C00CE768 (_output_l.c)
 *     _woutput_l @ 0x1C00CF0DC (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_1C028F9A0 == (_security_cookie | 1);
}
