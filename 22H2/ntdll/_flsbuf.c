/*
 * XREFs of _flsbuf @ 0x180092E6C
 * Callers:
 *     _snprintf @ 0x18008D7D0 (_snprintf.c)
 *     _snwprintf @ 0x18008D880 (_snwprintf.c)
 *     swprintf @ 0x18008DEC0 (swprintf.c)
 *     _vsprintf_l @ 0x18008DFF0 (_vsprintf_l.c)
 *     _vswprintf_l @ 0x18008E0C4 (_vswprintf_l.c)
 *     _vsnprintf_l @ 0x18008E18C (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x18008E25C (_vsnwprintf_l.c)
 *     sprintf @ 0x180090F00 (sprintf.c)
 *     write_char @ 0x1800936E0 (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
