/*
 * XREFs of _flsbuf @ 0x1403D4298
 * Callers:
 *     _vsnwprintf_l @ 0x1403D0990 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1403D0AB0 (_vsnprintf_l.c)
 *     _snprintf @ 0x1403D14D0 (_snprintf.c)
 *     _snwprintf @ 0x1403D1590 (_snwprintf.c)
 *     swprintf @ 0x1403D1820 (swprintf.c)
 *     _vswprintf_l @ 0x1403D190C (_vswprintf_l.c)
 *     sprintf @ 0x1403D2BF0 (sprintf.c)
 *     _vsprintf_l @ 0x1403D36E8 (_vsprintf_l.c)
 *     write_char_0 @ 0x1403D5508 (write_char_0.c)
 *     _soutput_s @ 0x1403D883C (_soutput_s.c)
 *     _swoutput_s @ 0x1403D89A4 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
