/*
 * XREFs of ?vOrNonAlignedGrayGlyphEven@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C02741D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vOrNonAlignedGrayGlyphEven(struct _GLYPHBITS *a1, __int64 a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // r10
  unsigned __int8 *v5; // r11
  unsigned __int8 *v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rsi
  BYTE *v9; // r9
  unsigned __int8 *v10; // r8
  BYTE v11; // dl
  char v12; // al
  char v13; // dl

  aj = a1->aj;
  v5 = a3;
  v6 = &a3[a1->sizlBitmap.cy * a4];
  if ( a3 < v6 )
  {
    v7 = (unsigned int)((a1->sizlBitmap.cx + 1) / 2);
    v8 = a4;
    do
    {
      v9 = aj;
      v10 = v5;
      aj += v7;
      v11 = 0;
      while ( 1 )
      {
        v13 = 16 * v11;
        if ( v9 >= aj )
          break;
        v12 = v13 + (*v9 >> 4);
        v11 = *v9;
        *v10++ |= v12;
        ++v9;
      }
      *v10 |= v13;
      v5 += v8;
    }
    while ( v5 < v6 );
  }
}
