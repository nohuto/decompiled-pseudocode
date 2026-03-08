/*
 * XREFs of ?vOrClearTypeGlyph@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C02740A4
 * Callers:
 *     ?draw_clrt_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1C02736C0 (-draw_clrt_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vOrClearTypeGlyph(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // rbp
  unsigned int cx; // r8d
  unsigned __int8 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  unsigned __int8 *v11; // r15
  unsigned __int8 *v12; // rdi
  __int64 v13; // r14
  unsigned __int8 v14; // al
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rcx
  unsigned int v19; // r11d
  int v20; // r9d
  unsigned int v21; // r10d
  unsigned int v22; // r9d
  __int64 v23; // [rsp+50h] [rbp+8h]

  aj = a1->aj;
  cx = a1->sizlBitmap.cx;
  v7 = &a3[a1->sizlBitmap.cy * a4];
  if ( a3 >= v7 )
    return;
  v8 = cx;
  v9 = a4;
  v23 = cx;
  v10 = a2;
  do
  {
    v11 = &a3[v8];
    v12 = a3;
    if ( a3 >= &a3[v8] )
      goto LABEL_17;
    v13 = aj - a3;
    do
    {
      v14 = v12[v13];
      if ( *v12 )
      {
        if ( !v14 )
          goto LABEL_15;
        v15 = SGDGetSessionState(a1);
        v16 = v12[v13];
        v17 = *(_QWORD *)(*(_QWORD *)(v15 + 32) + 8592LL);
        v18 = *v12;
        v19 = *(unsigned __int8 *)(v17 + 4 * v16) + *(unsigned __int8 *)(v17 + 4 * v18);
        v20 = *(unsigned __int8 *)(v17 + 4 * v18 + 2);
        v21 = *(unsigned __int8 *)(v17 + 4 * v16 + 1) + *(unsigned __int8 *)(v17 + 4 * v18 + 1);
        a1 = (struct _GLYPHBITS *)byte_1C03193A0;
        v22 = *(unsigned __int8 *)(v17 + 4 * v16 + 2) + v20;
        if ( v19 > 6 )
          v19 = 6;
        if ( v21 > 6 )
          v21 = 6;
        if ( v22 > 6 )
          v22 = 6;
        v14 = byte_1C03193A0[49 * v19 + 7 * v21 + v22];
      }
      *v12 = v14;
LABEL_15:
      ++v12;
    }
    while ( v12 < v11 );
    v8 = v23;
LABEL_17:
    a3 += v9;
    aj += v10;
  }
  while ( a3 < v7 );
}
