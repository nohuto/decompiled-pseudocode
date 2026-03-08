/*
 * XREFs of strrchr @ 0x1403D5A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strrchr(const char *Str, int Ch)
{
  const char *v2; // r9
  char *v3; // r8

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  while ( --Str != v2 )
  {
    if ( *Str == (_BYTE)Ch )
      return (char *)Str;
  }
  if ( *Str == (_BYTE)Ch )
    return (char *)Str;
  return v3;
}
