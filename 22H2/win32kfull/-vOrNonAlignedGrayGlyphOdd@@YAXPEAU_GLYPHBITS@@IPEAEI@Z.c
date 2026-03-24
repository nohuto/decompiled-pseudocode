/*
 * XREFs of ?vOrNonAlignedGrayGlyphOdd@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C013A710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vOrNonAlignedGrayGlyphOdd(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // rdi
  unsigned __int8 *v5; // rbx
  unsigned __int8 *v6; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r14
  unsigned __int8 v10; // r9
  _BYTE *v11; // r8
  unsigned __int64 v12; // r10
  unsigned __int8 *v13; // rax
  unsigned __int8 v14; // dl

  aj = a1->aj;
  v5 = a3;
  v6 = &a3[a4 * a1->sizlBitmap.cy];
  if ( a3 < v6 )
  {
    v7 = (unsigned int)a1->sizlBitmap.cx >> 1;
    v8 = a4;
    v9 = a2;
    do
    {
      v10 = *aj;
      v11 = v5 + 1;
      v12 = v7;
      *v5 |= *aj >> 4;
      if ( v5 + 1 > &v5[v7 + 1] )
        v12 = 0LL;
      if ( v12 )
      {
        v13 = aj + 1;
        do
        {
          v14 = v10;
          v10 = *v13++;
          *v11++ |= (v10 >> 4) | (unsigned __int8)(16 * v14);
        }
        while ( (unsigned __int64)&v13[~(unsigned __int64)aj] < v12 );
      }
      v5 += v8;
      aj += v9;
    }
    while ( v5 < v6 );
  }
}
