/*
 * XREFs of _wcsrev @ 0x1403D4140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsrev(wchar_t *Str)
{
  wchar_t *v1; // r8
  wchar_t *v2; // r9
  wchar_t *v4; // r8
  wchar_t v5; // dx

  v1 = Str;
  v2 = Str;
  while ( *v1++ )
    ;
  v4 = v1 - 2;
  if ( Str < v4 )
  {
    do
    {
      v5 = *v2;
      *v2++ = *v4;
      *v4-- = v5;
    }
    while ( v2 < v4 );
  }
  return Str;
}
