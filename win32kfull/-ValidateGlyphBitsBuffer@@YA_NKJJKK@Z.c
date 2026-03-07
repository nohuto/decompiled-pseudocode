bool __fastcall ValidateGlyphBitsBuffer(unsigned int a1, int a2, int a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 v6; // rdx
  unsigned int v7; // ecx

  if ( !a4 )
    return 1;
  if ( a2 < 0 )
    return 0;
  if ( a3 < 0 )
    return 0;
  v6 = a4 * (unsigned __int64)(unsigned int)a3;
  if ( v6 > 0xFFFFFFFF )
    return 0;
  v7 = (v6 + 3) & 0xFFFFFFFC;
  if ( v7 < (unsigned int)v6 || v7 + a5 < a5 )
    return 0;
  return v7 + a5 <= a1;
}
