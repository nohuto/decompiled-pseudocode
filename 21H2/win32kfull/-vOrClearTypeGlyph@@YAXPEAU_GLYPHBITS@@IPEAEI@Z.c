/*
 * XREFs of ?vOrClearTypeGlyph@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C02764F8
 * Callers:
 *     draw_clrt_f_ntb_o_to_temp_start @ 0x1C0277360 (draw_clrt_f_ntb_o_to_temp_start.c)
 * Callees:
 *     <none>
 */

void __fastcall vOrClearTypeGlyph(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // rsi
  unsigned __int8 *v5; // r11
  unsigned __int8 *v6; // rdi
  __int64 v7; // r15
  __int64 cx; // r13
  unsigned __int8 *v9; // rbx
  unsigned __int8 *v10; // rdi
  signed __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rax
  unsigned int v14; // r10d
  unsigned int v15; // r9d
  unsigned int v16; // r8d
  unsigned __int8 *v17; // [rsp+30h] [rbp+8h]

  aj = a1->aj;
  v5 = a3;
  v6 = &a3[a4 * a1->sizlBitmap.cy];
  v17 = v6;
  if ( a3 >= v6 )
    return;
  v7 = a4;
  cx = (unsigned int)a1->sizlBitmap.cx;
  do
  {
    v9 = v5;
    if ( v5 >= &v5[cx] )
      goto LABEL_17;
    v10 = (unsigned __int8 *)off_1C03260D0;
    do
    {
      v12 = *v9;
      v11 = aj - v5;
      v13 = v9[aj - v5];
      if ( (_BYTE)v12 )
      {
        if ( !(_BYTE)v13 )
          goto LABEL_15;
        v14 = v10[4 * v13] + v10[4 * v12];
        v15 = v10[4 * v12 + 1] + v10[4 * v9[v11] + 1];
        v16 = v10[4 * v12 + 2] + v10[4 * v9[v11] + 2];
        if ( v14 > 6 )
          v14 = 6;
        if ( v15 > 6 )
          v15 = 6;
        if ( v16 > 6 )
          v16 = 6;
        LOBYTE(v13) = gajStorage1[49 * v14 + 7 * v15 + v16];
      }
      *v9 = v13;
LABEL_15:
      ++v9;
    }
    while ( v9 < &v5[cx] );
    v6 = v17;
LABEL_17:
    v5 += v7;
    aj += a2;
  }
  while ( v5 < v6 );
}
