/*
 * XREFs of _vswprintf @ 0x1403D3DF0
 * Callers:
 *     <none>
 * Callees:
 *     _vswprintf_l @ 0x1403D3E0C (_vswprintf_l.c)
 */

int __cdecl vswprintf(wchar_t *Dest, const wchar_t *Format, va_list Args)
{
  return vswprintf_l(Dest, Format, 0LL, Args);
}
