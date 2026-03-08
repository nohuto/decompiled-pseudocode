/*
 * XREFs of ?draw_gray_f_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1C0273760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall draw_gray_f_ntb_o_to_temp_start(
        struct _GLYPHPOS *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int v8; // esi
  int v9; // ebp
  struct _GLYPHPOS *v10; // rdi
  struct _GLYPHPOS *v11; // r14
  struct _GLYPHBITS *pgb; // rbx

  v8 = a1->ptl.x - a4;
  v9 = a1->ptl.y - a7;
  v10 = a1;
  v11 = &a1[a2];
  if ( a1 < v11 )
  {
    do
    {
      pgb = v10->pgdf->pgb;
      (*(&off_1C030CA28[2 * (((_BYTE)v8 + LOBYTE(pgb->ptlOrigin.x)) & 1u)] + (pgb->sizlBitmap.cx & 1)))(
        pgb,
        (unsigned int)(pgb->sizlBitmap.cx + 1) >> 1,
        &a3[a5 * (__int64)(v9 + pgb->ptlOrigin.y) + (v8 + pgb->ptlOrigin.x) / 2],
        a5);
      v8 += a6;
      ++v10;
    }
    while ( v10 < v11 );
  }
}
