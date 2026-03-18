/*
 * XREFs of _flsbuf @ 0x1403E3D0C
 * Callers:
 *     _vsnwprintf_l @ 0x1403E0460 (_vsnwprintf_l.c)
 *     _vsnprintf_l @ 0x1403E0580 (_vsnprintf_l.c)
 *     _snprintf @ 0x1403E0F90 (_snprintf.c)
 *     _snwprintf @ 0x1403E1050 (_snwprintf.c)
 *     swprintf @ 0x1403E12E0 (swprintf.c)
 *     _vswprintf_l @ 0x1403E13CC (_vswprintf_l.c)
 *     sprintf @ 0x1403E26A0 (sprintf.c)
 *     _vsprintf_l @ 0x1403E3198 (_vsprintf_l.c)
 *     write_char_0 @ 0x1403E4FC8 (write_char_0.c)
 *     _soutput_s @ 0x1403E8394 (_soutput_s.c)
 *     _swoutput_s @ 0x1403E847C (_swoutput_s.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
