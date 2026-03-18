/*
 * XREFs of _get_printf_count_output @ 0x1403E57CC
 * Callers:
 *     _woutput_l @ 0x1403E3D1C (_woutput_l.c)
 *     _output_l @ 0x1403E478C (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140C0DB00 == (_security_cookie | 1);
}
