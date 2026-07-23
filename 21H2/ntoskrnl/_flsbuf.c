/*
 * XREFs of _flsbuf @ 0x1403D4B08
 * Callers:
 *     _vsnwprintf_l @ 0x1403D1200 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1403D1320 (_vsnprintf_l.c)
 *     _snprintf @ 0x1403D1D40 (_snprintf.c)
 *     _snwprintf @ 0x1403D1E00 (_snwprintf.c)
 *     swprintf @ 0x1403D2090 (swprintf.c)
 *     _vswprintf_l @ 0x1403D217C (_vswprintf_l.c)
 *     sprintf @ 0x1403D3460 (sprintf.c)
 *     _vsprintf_l @ 0x1403D3F58 (_vsprintf_l.c)
 *     write_char_0 @ 0x1403D5D78 (write_char_0.c)
 *     _soutput_s @ 0x1403D90AC (_soutput_s.c)
 *     _swoutput_s @ 0x1403D9214 (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
