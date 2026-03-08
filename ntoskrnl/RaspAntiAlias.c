/*
 * XREFs of RaspAntiAlias @ 0x140384090
 * Callers:
 *     BgpRasPrintGlyph @ 0x140381CD4 (BgpRasPrintGlyph.c)
 * Callees:
 *     BgpGxBlendColor @ 0x1403841F8 (BgpGxBlendColor.c)
 *     BgpGxFillRectangle @ 0x1403842E4 (BgpGxFillRectangle.c)
 */

__int64 __fastcall RaspAntiAlias(__int64 a1, unsigned int *a2, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // rsi
  __int64 v8; // rbx
  unsigned int v9; // r15d
  __int64 result; // rax
  unsigned int *v11; // r8
  unsigned int v12; // ebp
  _BYTE *v13; // r12
  int v14; // r8d
  unsigned int i; // r10d
  __int64 v16; // r9
  unsigned int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  unsigned int v21; // [rsp+70h] [rbp+18h]

  v5 = *(_QWORD *)(a1 + 24);
  v8 = a3;
  v9 = 0;
  v21 = a4 * a3;
  result = BgpGxFillRectangle(a2, *a5);
  v11 = a2;
  if ( *a2 )
  {
    result = *(_DWORD *)(a1 + 4) / a4;
    do
    {
      v12 = 0;
      v13 = (_BYTE *)(*((_QWORD *)v11 + 3) + 4 * v11[1] * v9);
      if ( (_DWORD)result )
      {
        do
        {
          v14 = 0;
          for ( i = 0; i < a4; ++i )
          {
            if ( (_DWORD)v8 )
            {
              v16 = v8;
              v17 = v8 * v12 + *(_DWORD *)(a1 + 4) * (i + a4 * v9);
              do
              {
                v18 = v14 + 1;
                if ( ((unsigned __int8)(128 >> (v17 & 7)) & *(_BYTE *)(((unsigned __int64)v17 >> 3) + v5)) == 0 )
                  v18 = v14;
                ++v17;
                v14 = v18;
                --v16;
              }
              while ( v16 );
            }
          }
          v19 = BgpGxBlendColor(*a5, a5[1], 255 * v14 / v21);
          *v13 = v19;
          v13[2] = BYTE2(v19);
          ++v12;
          v13[3] = -1;
          v13[1] = BYTE1(v19);
          v13 += 4;
          result = *(_DWORD *)(a1 + 4) / a4;
        }
        while ( v12 < (unsigned int)result );
        v11 = a2;
      }
      ++v9;
    }
    while ( v9 < *v11 );
  }
  return result;
}
