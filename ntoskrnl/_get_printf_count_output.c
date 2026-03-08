/*
 * XREFs of _get_printf_count_output @ 0x1403D82CC
 * Callers:
 *     _woutput_l @ 0x1403D6800 (_woutput_l.c)
 *     _output_l @ 0x1403D7270 (_output_l.c)
 * Callees:
 *     <none>
 */

int __cdecl get_printf_count_output()
{
  return qword_140C0DEC0 == (_security_cookie | 1);
}
