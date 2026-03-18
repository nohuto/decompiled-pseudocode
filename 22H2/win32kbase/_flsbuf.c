/*
 * XREFs of _flsbuf @ 0x1C00CE758
 * Callers:
 *     _vsnprintf_l @ 0x1C00CE0C4 (_vsnprintf_l.c)
 *     _vsnwprintf_l @ 0x1C00CE1A4 (_vsnwprintf_l.c)
 *     write_char @ 0x1C00CEFC0 (write_char.c)
 * Callees:
 *     <none>
 */

int __cdecl flsbuf(int Ch, FILE *File)
{
  File->_flag |= 0x20u;
  return -1;
}
