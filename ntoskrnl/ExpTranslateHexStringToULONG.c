/*
 * XREFs of ExpTranslateHexStringToULONG @ 0x1409FB538
 * Callers:
 *     ExpParseSignatureName @ 0x1409FA090 (ExpParseSignatureName.c)
 * Callees:
 *     towlower @ 0x1403D5C20 (towlower.c)
 */

__int64 __fastcall ExpTranslateHexStringToULONG(wint_t *a1, int *a2)
{
  __int64 v2; // rdi
  int v4; // ebx
  wint_t *v5; // r14
  unsigned int i; // esi
  wint_t v7; // ax
  int v8; // ebx

  v2 = -1LL;
  v4 = 0;
  v5 = a1;
  do
    ++v2;
  while ( a1[v2] );
  if ( (unsigned int)v2 > 8 )
    return 3221225485LL;
  for ( i = 0; i < (unsigned int)v2; ++v5 )
  {
    v7 = towlower(*v5);
    if ( (unsigned __int16)(v7 - 48) > 9u )
    {
      if ( (unsigned __int16)(v7 - 97) > 5u )
        return 3221225485LL;
      v8 = 16 * v4 - 87;
    }
    else
    {
      v8 = 16 * v4 - 48;
    }
    v4 = v7 + v8;
    ++i;
  }
  *a2 = v4;
  return 0LL;
}
