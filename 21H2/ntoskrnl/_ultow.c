/*
 * XREFs of _ultow @ 0x1403D1C40
 * Callers:
 *     AdtpBuildUlongString @ 0x14096E194 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x1403D1C64 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
