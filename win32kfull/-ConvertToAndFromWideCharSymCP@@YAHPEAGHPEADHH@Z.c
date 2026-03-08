/*
 * XREFs of ?ConvertToAndFromWideCharSymCP@@YAHPEAGHPEADHH@Z @ 0x1C027BC1C
 * Callers:
 *     ?ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z @ 0x1C00BCE20 (-ConvertToAndFromWideChar@@YAHIPEAGHPEADHH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertToAndFromWideCharSymCP(unsigned __int16 *a1, int a2, char *a3, int a4, int a5)
{
  __int64 v7; // r9
  int v9; // eax
  __int64 v10; // rcx
  unsigned __int16 v11; // ax
  __int64 v12; // rcx
  unsigned __int16 v13; // ax

  v7 = 0LL;
  if ( a2 && !a1 || a4 && !a3 )
    return 0LL;
  v9 = a2 / 2;
  if ( a5 )
  {
    if ( a4 < v9 )
      v9 = a4;
    v10 = v9;
    if ( v9 > 0 )
    {
      do
      {
        v11 = (unsigned __int8)a3[v7];
        if ( (unsigned __int8)v11 >= 0x20u )
          v11 |= 0xF000u;
        else
          v11 = (char)v11;
        a1[v7++] = v11;
      }
      while ( v7 < v10 );
    }
    return (unsigned int)(2 * v10);
  }
  else
  {
    if ( v9 < a4 )
      a4 = a2 / 2;
    if ( a4 <= 0 )
    {
      return (unsigned int)a4;
    }
    else
    {
      v12 = 0LL;
      while ( 1 )
      {
        v13 = a1[v12];
        if ( v13 >= 0x20u && (unsigned __int16)(v13 + 4064) > 0xDFu )
          break;
        LODWORD(v7) = v7 + 1;
        a3[v12] = a1[v12];
        if ( ++v12 >= a4 )
          return (unsigned int)a4;
      }
      return (unsigned int)v7;
    }
  }
}
