/*
 * XREFs of _get_printf_count_output @ 0x1403DD7EC
 * Callers:
 *     _woutput_l @ 0x1403DBD20 (_woutput_l.c)
 *     _output_l @ 0x1403DC790 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140C0DFC0 == (_security_cookie | 1);
}
