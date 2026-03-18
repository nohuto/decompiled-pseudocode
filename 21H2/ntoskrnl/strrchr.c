/*
 * XREFs of strrchr @ 0x1403E2FA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strrchr(const char *Str, int Ch)
{
  const char *v2; // r8
  char v4; // al

  v2 = Str;
  while ( *Str++ )
    ;
  while ( 1 )
  {
    v4 = *--Str;
    if ( Str == v2 )
      break;
    if ( v4 == (_BYTE)Ch )
      return (char *)Str;
  }
  if ( v4 == (_BYTE)Ch )
    return (char *)Str;
  return 0LL;
}
