/*
 * XREFs of _get_printf_count_output @ 0x1403D64DC
 * Callers:
 *     _woutput_l @ 0x1403D4B18 (_woutput_l.c)
 *     _output_l @ 0x1403D553C (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140C13000 == (_security_cookie | 1);
}
