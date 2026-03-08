/*
 * XREFs of _flsbuf @ 0x1403D67F0
 * Callers:
 *     _vsnwprintf_l @ 0x1403D2E50 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1403D2F70 (_vsnprintf_l.c)
 *     _snprintf @ 0x1403D39D0 (_snprintf.c)
 *     _snwprintf @ 0x1403D3A90 (_snwprintf.c)
 *     swprintf @ 0x1403D3D20 (swprintf.c)
 *     _vswprintf_l @ 0x1403D3E0C (_vswprintf_l.c)
 *     sprintf @ 0x1403D50E0 (sprintf.c)
 *     _vsprintf_l @ 0x1403D5C68 (_vsprintf_l.c)
 *     write_char_0 @ 0x1403D7AC8 (write_char_0.c)
 *     _soutput_s @ 0x1403DAF04 (_soutput_s.c)
 *     _swoutput_s @ 0x1403DAFF8 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
