/*
 * XREFs of vsprintf @ 0x1403D5D00
 * Callers:
 *     <none>
 * Callees:
 *     _vsprintf_l @ 0x1403D5C68 (_vsprintf_l.c)
 */

int __cdecl vsprintf(char *Dest, const char *Format, va_list Args)
{
  return vsprintf_l(Dest, Format, 0LL, Args);
}
