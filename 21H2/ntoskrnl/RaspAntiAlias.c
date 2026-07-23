/*
 * XREFs of RaspAntiAlias @ 0x1403B202C
 * Callers:
 *     BgpRasPrintGlyph @ 0x1403B1CB8 (BgpRasPrintGlyph.c)
 * Callees:
 *     BgpGxFillRectangle @ 0x14039CB10 (BgpGxFillRectangle.c)
 *     BgpGxBlendColor @ 0x1403B2188 (BgpGxBlendColor.c)
 */

unsigned __int64 __fastcall RaspAntiAlias(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  __int64 v5; // rsi
  __int64 v7; // rbp
  unsigned int v9; // r12d
  unsigned int v10; // edi
  unsigned __int64 result; // rax
  unsigned int v12; // r13d
  _BYTE *v13; // r14
  unsigned int *v14; // rsi
  int v15; // r10d
  __int64 v16; // r9
  __int64 v17; // r11
  unsigned int v18; // r8d
  int v19; // eax
  __int64 v20; // rax
  __int64 v21; // [rsp+60h] [rbp+8h]

  v5 = a2;
  v21 = *(_QWORD *)(a1 + 24);
  v7 = a3;
  v9 = a4 * a3;
  v10 = 0;
  result = BgpGxFillRectangle(a2, *a5);
  if ( *(_DWORD *)v5 )
  {
    result = *(_DWORD *)(a1 + 4) / a4;
    do
    {
      v12 = 0;
      v13 = (_BYTE *)(*(_QWORD *)(v5 + 24) + 4 * v10 * *(_DWORD *)(v5 + 4));
      if ( (_DWORD)result )
      {
        v14 = a5;
        do
        {
          v15 = 0;
          v16 = 0LL;
          if ( a4 )
          {
            do
            {
              if ( (_DWORD)v7 )
              {
                v17 = v7;
                v18 = v7 * v12 + *(_DWORD *)(a1 + 4) * (v16 + a4 * v10);
                do
                {
                  v19 = v15 + 1;
                  if ( ((unsigned __int8)(128 >> (v18 & 7)) & *(_BYTE *)(((unsigned __int64)v18 >> 3) + v21)) == 0 )
                    v19 = v15;
                  ++v18;
                  v15 = v19;
                  --v17;
                }
                while ( v17 );
              }
              v16 = (unsigned int)(v16 + 1);
            }
            while ( (unsigned int)v16 < a4 );
            v14 = a5;
          }
          v20 = BgpGxBlendColor(*v14, v14[1], 255 * v15 / v9, v16);
          *v13 = v20;
          v13[2] = BYTE2(v20);
          ++v12;
          v13[3] = -1;
          v13[1] = BYTE1(v20);
          v13 += 4;
          result = *(_DWORD *)(a1 + 4) / a4;
        }
        while ( v12 < (unsigned int)result );
        v5 = a2;
      }
      ++v10;
    }
    while ( v10 < *(_DWORD *)v5 );
  }
  return result;
}
