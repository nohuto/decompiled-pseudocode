/*
 * XREFs of AslStringPatternMatchExA @ 0x14075B5F0
 * Callers:
 *     AslStringPatternMatchExA @ 0x14075B5F0 (AslStringPatternMatchExA.c)
 *     SdbpFindFirstIndexedWildCardTag @ 0x1407A1870 (SdbpFindFirstIndexedWildCardTag.c)
 *     SdbpFindNextIndexedWildCardTag @ 0x1407A1E68 (SdbpFindNextIndexedWildCardTag.c)
 * Callees:
 *     toupper @ 0x1403D5BB0 (toupper.c)
 *     AslStringPatternMatchExA @ 0x14075B5F0 (AslStringPatternMatchExA.c)
 */

__int64 __fastcall AslStringPatternMatchExA(char *a1, _BYTE *a2)
{
  int v2; // eax
  char *v4; // rsi
  int v5; // ebx
  int v6; // ebx

  LOBYTE(v2) = *a1;
  v4 = a1;
  while ( (_BYTE)v2 || *a2 )
  {
    if ( (_BYTE)v2 == 63 )
      goto LABEL_12;
    if ( (_BYTE)v2 != 42 )
    {
      if ( (_BYTE)v2 != *a2 )
      {
        v6 = toupper((char)*a2);
        if ( toupper(*v4) != v6 )
          return 0LL;
      }
LABEL_12:
      ++v4;
      goto LABEL_9;
    }
    v2 = v4[1];
    if ( v4[1] == 42 )
    {
      ++v4;
    }
    else
    {
      if ( !(_BYTE)v2 )
        return 1LL;
      if ( (_BYTE)v2 == *a2 || (v5 = toupper(v2), v5 == toupper((char)*a2)) )
      {
        if ( (unsigned int)AslStringPatternMatchExA(v4 + 1, a2, 0LL, 0LL) )
          return 1LL;
      }
LABEL_9:
      if ( !*a2 )
        return 0LL;
      LOBYTE(v2) = *v4;
      ++a2;
    }
  }
  return 1LL;
}
