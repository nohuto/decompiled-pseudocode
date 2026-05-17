/*
 * XREFs of _get_printf_count_output @ 0x180096680
 * Callers:
 *     _output_l @ 0x180092E80 (_output_l.c)
 *     _woutput_l @ 0x180093810 (_woutput_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_18016A430 == (_security_cookie | 1);
}
