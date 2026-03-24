/*
 * XREFs of _flsbuf @ 0x1C00C5744
 * Callers:
 *     _vsnprintf_l @ 0x1C00C5108 (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1C00C5254 (_vsnwprintf_l.c)
 *     write_char @ 0x1C00C5F90 (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
