/*
 * XREFs of ?draw_nf_tb_no_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1C0304B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall draw_nf_tb_no_to_temp_start(struct _GLYPHPOS *a1, int a2, unsigned __int8 *a3, int a4, unsigned int a5)
{
  __int64 v5; // rdi
  int v8; // ebx
  GLYPHBITS *pgb; // rsi
  LONG cx; // eax
  __int64 v12; // rdx
  unsigned __int8 *v13; // r11
  int v14; // r9d
  int v15; // r10d
  __int64 v16; // r8
  __int64 v17; // rcx

  if ( a2 )
  {
    v5 = 0LL;
    v8 = a2;
    do
    {
      --v8;
      pgb = a1[v5].pgdf->pgb;
      cx = pgb->sizlBitmap.cx;
      v12 = (LOBYTE(pgb->ptlOrigin.x) + LOBYTE(a1[v5].ptl.x) - (_BYTE)a4) & 7;
      v13 = &a3[(__int64)(pgb->ptlOrigin.x + a1[v5].ptl.x - a4) >> 3];
      v14 = ((int)v12 + cx + 7) >> 3;
      v15 = (cx + 7) >> 3;
      if ( v14 > 4 )
      {
        v17 = 0LL;
        if ( v14 > v15 )
          v17 = 2LL;
        off_1C030D708[((_DWORD)v12 == 0) | (unsigned __int64)v17](pgb->sizlBitmap.cy, v12, a5, pgb->aj, v13, v15, v14);
      }
      else
      {
        v16 = 0LL;
        if ( v14 > v15 )
          v16 = 2LL;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, BYTE *, unsigned __int8 *, int))off_1C030D730[((_DWORD)v12 == 0) | (unsigned int)(4 * v14) | (unsigned __int64)v16])(
          (unsigned int)pgb->sizlBitmap.cy,
          v12,
          a5,
          pgb->aj,
          v13,
          v15);
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( v8 );
  }
}
