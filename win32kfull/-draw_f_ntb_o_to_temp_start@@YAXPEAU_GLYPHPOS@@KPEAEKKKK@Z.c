/*
 * XREFs of ?draw_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1C03048A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall draw_f_ntb_o_to_temp_start(
        struct _GLYPHPOS *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // rsi
  int v8; // ebx
  int v9; // r14d
  int v10; // edi
  GLYPHBITS *pgb; // r11
  LONG cx; // eax
  __int64 v14; // rdx
  int v15; // r10d
  int v16; // r9d
  unsigned __int8 *v17; // r12
  __int64 v18; // r8
  __int64 v19; // rcx
  unsigned __int8 *v20; // [rsp+80h] [rbp+18h]

  if ( a2 )
  {
    v20 = a3;
    v7 = 0LL;
    v8 = a1->ptl.x - a4;
    v9 = a1->ptl.y - a7;
    v10 = a2;
    do
    {
      --v10;
      pgb = a1[v7].pgdf->pgb;
      cx = pgb->sizlBitmap.cx;
      v14 = ((_BYTE)v8 + LOBYTE(pgb->ptlOrigin.x)) & 7;
      v15 = (cx + 7) >> 3;
      v16 = (cx + (int)v14 + 7) >> 3;
      v17 = &a3[(int)(a5 * (v9 + pgb->ptlOrigin.y)) + ((__int64)(v8 + pgb->ptlOrigin.x) >> 3)];
      if ( v16 > 4 )
      {
        v19 = 0LL;
        if ( v16 > v15 )
          v19 = 2LL;
        off_1C030D708[((_DWORD)v14 == 0) | (unsigned __int64)v19](pgb->sizlBitmap.cy, v14, a5, pgb->aj, v17, v15, v16);
      }
      else
      {
        v18 = 0LL;
        if ( v16 > v15 )
          v18 = 2LL;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, BYTE *, unsigned __int8 *, int))off_1C030C210[((_DWORD)v14 == 0) | (unsigned int)(4 * v16) | (unsigned __int64)v18])(
          (unsigned int)pgb->sizlBitmap.cy,
          v14,
          a5,
          pgb->aj,
          v17,
          v15);
      }
      v8 += a6;
      v7 = (unsigned int)(v7 + 1);
      a3 = v20;
    }
    while ( v10 );
  }
}
