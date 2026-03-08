/*
 * XREFs of ?BltLnkReadPat1@@YAXPEAEKPEBEKKKK@Z @ 0x1C0306910
 * Callers:
 *     ?BltLnkSrcCopyMsk1@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z @ 0x1C0306E10 (-BltLnkSrcCopyMsk1@@YAXPEAUBLTINFO@@PEAU_BLTLNK_MASKINFO@@PEAK2@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall BltLnkReadPat1(
        unsigned __int8 *a1,
        char a2,
        const unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned int v6; // r10d
  unsigned int v8; // r9d
  __int64 v9; // r11
  unsigned __int8 v10; // di
  unsigned int v11; // ebx
  char i; // bp
  unsigned int v15; // edx
  char v16; // cl
  unsigned int v17; // r8d
  int v18; // edx
  unsigned int v19; // r10d
  unsigned int v20; // ecx

  v6 = a5;
  v8 = a6;
  v9 = a5 & 7;
  v10 = 0;
  v11 = a2 & 7;
  for ( i = a2; v8; v6 = v20 )
  {
    v15 = v8;
    v16 = byte_1C032BA20[v9] & a3[(unsigned __int64)v6 >> 3];
    if ( v11 <= (unsigned int)v9 )
    {
      if ( 8 - (int)v9 <= v8 )
        v15 = 8 - v9;
      v17 = a4 - v6;
      if ( v15 <= a4 - v6 )
        v17 = v15;
      v18 = (unsigned __int8)(v16 & byte_1C032AF40[v17 + 16 + (unsigned int)v9]) << (v9 - v11);
    }
    else
    {
      if ( 8 - v11 <= v8 )
        v15 = 8 - v11;
      v17 = a4 - v6;
      if ( v15 <= a4 - v6 )
        v17 = v15;
      v18 = (unsigned __int8)(v16 & byte_1C032AF40[v17 + 16 + (unsigned int)v9]) >> (v11 - v9);
    }
    v19 = v17 + v6;
    i += v17;
    v20 = 0;
    v10 |= v18;
    v8 -= v17;
    if ( v19 != a4 )
      v20 = v19;
    v9 = 0LL;
    if ( v19 != a4 )
      v9 = v19 & 7;
    v11 = i & 7;
    if ( (i & 7) == 0 || !v8 )
    {
      *a1++ = v10;
      v10 = 0;
    }
  }
}
