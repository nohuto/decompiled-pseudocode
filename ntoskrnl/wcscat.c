/*
 * XREFs of wcscat @ 0x1403D5D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcscat(wchar_t *Dest, const wchar_t *Source)
{
  wchar_t *i; // r8
  signed __int64 v3; // r8
  wchar_t v4; // ax

  for ( i = Dest; *i; ++i )
    ;
  v3 = (char *)i - (char *)Source;
  do
  {
    v4 = *Source;
    *(const wchar_t *)((char *)Source + v3) = *Source;
    ++Source;
  }
  while ( v4 );
  return Dest;
}
