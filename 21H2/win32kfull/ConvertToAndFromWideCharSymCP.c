/*
 * XREFs of ConvertToAndFromWideCharSymCP @ 0x1C027D7AC
 * Callers:
 *     ConvertToAndFromWideChar @ 0x1C00A4AF4 (ConvertToAndFromWideChar.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ConvertToAndFromWideCharSymCP(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  __int64 v7; // r9
  int v9; // eax
  __int16 v10; // cx
  __int64 v11; // rcx
  unsigned __int16 v12; // ax

  v7 = 0LL;
  if ( a2 && !a1 || a4 && !a3 )
    return 0LL;
  v9 = a2 / 2;
  if ( a5 )
  {
    if ( a4 < v9 )
      v9 = a4;
    if ( v9 > 0 )
    {
      do
      {
        v10 = *(unsigned __int8 *)(v7 + a3);
        if ( (unsigned __int8)v10 >= 0x20u )
          v10 |= 0xF000u;
        else
          v10 = (char)v10;
        *(_WORD *)(a1 + 2 * v7++) = v10;
      }
      while ( v7 < v9 );
    }
    return (unsigned int)(2 * v9);
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
      v11 = 0LL;
      while ( 1 )
      {
        v12 = *(_WORD *)(a1 + 2 * v11);
        if ( v12 >= 0x20u && (unsigned __int16)(v12 + 4064) > 0xDFu )
          break;
        LODWORD(v7) = v7 + 1;
        *(_BYTE *)(v11 + a3) = *(_BYTE *)(a1 + 2 * v11);
        if ( ++v11 >= a4 )
          return (unsigned int)a4;
      }
      return (unsigned int)v7;
    }
  }
}
