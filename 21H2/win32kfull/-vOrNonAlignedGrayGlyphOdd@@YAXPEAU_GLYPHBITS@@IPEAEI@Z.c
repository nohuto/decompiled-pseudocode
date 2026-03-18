/*
 * XREFs of ?vOrNonAlignedGrayGlyphOdd@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C012DCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vOrNonAlignedGrayGlyphOdd(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // rdi
  unsigned int v5; // r10d
  unsigned __int8 *v6; // rbp
  unsigned __int8 *v7; // r11
  BYTE *v8; // rbx
  __int64 v9; // rsi
  BYTE v10; // r8
  unsigned __int8 *i; // rax
  BYTE v12; // dl

  aj = a1->aj;
  v6 = &a3[a4 * a1->sizlBitmap.cy];
  if ( a3 < v6 )
  {
    v7 = a3 + 1;
    v8 = &a1->aj[1];
    v5 = (unsigned int)a1->sizlBitmap.cx >> 1;
    v9 = a2;
    do
    {
      v10 = *aj;
      *(v7 - 1) |= *aj >> 4;
      for ( i = v7; i < &v7[v5]; ++i )
      {
        v12 = v10;
        v10 = i[v8 - v7];
        *i |= (v10 >> 4) | (unsigned __int8)(16 * v12);
      }
      v7 += a4;
      aj += v9;
      v8 += v9;
    }
    while ( v7 - 1 < v6 );
  }
}
