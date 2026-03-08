/*
 * XREFs of _flsbuf @ 0x1C00DB008
 * Callers:
 *     _vsnprintf_l @ 0x1C00DA974 (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1C00DAA54 (_vsnwprintf_l.c)
 *     write_char @ 0x1C00DB870 (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
