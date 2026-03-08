/*
 * XREFs of ?vOrNonAlignedGrayGlyphOdd@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C0274260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vOrNonAlignedGrayGlyphOdd(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // r10
  unsigned __int8 *v5; // rdi
  __int64 v6; // rbx
  unsigned __int8 *v7; // rdx
  BYTE *v8; // r8
  __int64 v9; // r15
  __int64 v10; // r14
  BYTE v11; // si
  unsigned __int8 *v12; // r9
  BYTE v13; // cl

  aj = a1->aj;
  v5 = &a3[a1->sizlBitmap.cy * a4];
  if ( a3 < v5 )
  {
    v6 = a2;
    v7 = a3 + 1;
    v8 = &a1->aj[1];
    v9 = (unsigned int)a1->sizlBitmap.cx >> 1;
    v10 = a4;
    do
    {
      v11 = *aj;
      v12 = v7;
      *(v7 - 1) |= *aj >> 4;
      if ( v7 < &v7[v9] )
      {
        do
        {
          v13 = v11;
          v11 = v12[v8 - v7];
          *v12++ |= (v11 >> 4) | (unsigned __int8)(16 * v13);
        }
        while ( v12 < &v7[v9] );
      }
      v7 += v10;
      aj += v6;
      v8 += v6;
    }
    while ( v7 - 1 < v5 );
  }
}
