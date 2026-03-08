/*
 * XREFs of _strrev @ 0x1403D3CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strrev(char *Str)
{
  char *v1; // r8
  char *v2; // r9
  char *v4; // r8
  char v5; // dl

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
