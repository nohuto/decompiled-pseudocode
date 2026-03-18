/*
 * XREFs of _flsbuf @ 0x1C00D6538
 * Callers:
 *     _vsnprintf_l @ 0x1C00D5EB0 (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1C00D5F90 (_vsnwprintf_l.c)
 *     write_char @ 0x1C00D6D84 (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
