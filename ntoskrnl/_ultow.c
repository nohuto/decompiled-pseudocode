/*
 * XREFs of _ultow @ 0x1403D38C0
 * Callers:
 *     AdtpBuildUlongString @ 0x140A589A8 (AdtpBuildUlongString.c)
 * Callees:
 *     xtow @ 0x1403D38E4 (xtow.c)
 */

wchar_t *__cdecl ultow(unsigned int Value, wchar_t *Dest, int Radix)
{
  xtow(Value, Dest, Radix, 0LL);
  return Dest;
}
