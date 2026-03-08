/*
 * XREFs of wcscpy @ 0x1403D5D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcscpy(wchar_t *Dest, const wchar_t *Source)
{
  signed __int64 v2; // r8
  wchar_t v3; // ax

  v2 = (char *)Dest - (char *)Source;
  do
  {
    v3 = *Source;
    *(const wchar_t *)((char *)Source + v2) = *Source;
    ++Source;
  }
  while ( v3 );
  return Dest;
}
