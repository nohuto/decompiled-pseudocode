/*
 * XREFs of ?vOrClearTypeGlyph@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C02786C0
 * Callers:
 *     draw_clrt_f_ntb_o_to_temp_start @ 0x1C0278A00 (draw_clrt_f_ntb_o_to_temp_start.c)
 * Callees:
 *     <none>
 */

void __fastcall vOrClearTypeGlyph(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // rdi
  unsigned __int8 *v5; // r11
  unsigned __int8 *v6; // rbp
  __int64 v7; // r12
  unsigned __int64 cx; // r15
  unsigned __int64 v9; // r14
  unsigned __int8 *v10; // rbx
  unsigned __int8 *v11; // rbp
  signed __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  unsigned int v15; // r10d
  unsigned int v16; // r9d
  unsigned int v17; // r8d
  unsigned __int8 *v18; // [rsp+38h] [rbp+8h]
  __int64 v19; // [rsp+48h] [rbp+18h]

  aj = a1->aj;
  v5 = a3;
  v6 = &a3[a4 * a1->sizlBitmap.cy];
  v18 = v6;
  if ( a3 < v6 )
  {
    v7 = a4;
    cx = (unsigned int)a1->sizlBitmap.cx;
    v19 = a4;
    while ( 1 )
    {
      v9 = cx;
      v10 = v5;
      if ( v5 > &v5[cx] )
        v9 = 0LL;
      if ( v9 )
        break;
LABEL_19:
      v5 += v7;
      aj += a2;
      if ( v5 >= v6 )
        return;
    }
    v11 = (unsigned __int8 *)off_1C032A0D0;
    v12 = aj - v5;
    while ( 1 )
    {
      v13 = *v10;
      v14 = v10[v12];
      if ( !(_BYTE)v13 )
        goto LABEL_16;
      if ( (_BYTE)v14 )
        break;
LABEL_17:
      if ( ++v10 - v5 >= v9 )
      {
        v6 = v18;
        v7 = v19;
        goto LABEL_19;
      }
    }
    v15 = v11[4 * v14] + v11[4 * v13];
    v16 = v11[4 * v13 + 1] + v11[4 * v10[v12] + 1];
    v17 = v11[4 * v13 + 2] + v11[4 * v10[v12] + 2];
    if ( v15 > 6 )
      v15 = 6;
    if ( v16 > 6 )
      v16 = 6;
    if ( v17 > 6 )
      v17 = 6;
    LOBYTE(v14) = gajStorage1[49 * v15 + 7 * v16 + v17];
LABEL_16:
    *v10 = v14;
    goto LABEL_17;
  }
}
