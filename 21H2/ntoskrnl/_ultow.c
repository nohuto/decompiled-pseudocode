/*
 * XREFs of _ultow @ 0x1403E0E90
 * Callers:
 *     AdtpBuildUlongString @ 0x140A1BE50 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x1403E0EB4 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
