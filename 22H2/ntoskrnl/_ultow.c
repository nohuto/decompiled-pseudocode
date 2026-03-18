/*
 * XREFs of _ultow @ 0x1403D8DE0
 * Callers:
 *     AdtpBuildUlongString @ 0x140A5B65C (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x1403D8E04 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
