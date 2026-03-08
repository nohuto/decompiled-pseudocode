/*
 * XREFs of __ascii_stricmp @ 0x1403D3B7C
 * Callers:
 *     _stricmp @ 0x1403D3BD0 (_stricmp.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _ascii_stricmp(unsigned __int8 *a1, unsigned __int8 *a2)
{
  int v4; // r8d
  int v5; // edx
  int v6; // r9d
  int v7; // eax

  do
  {
    v4 = *a1++;
    v5 = *a2;
    v6 = v4 + 32;
    if ( (unsigned int)(v4 - 65) > 0x19 )
      v6 = v4;
    v7 = v5 + 32;
    ++a2;
    if ( (unsigned int)(v5 - 65) > 0x19 )
      v7 = v5;
  }
  while ( v6 && v6 == v7 );
  return (unsigned int)(v6 - v7);
}
