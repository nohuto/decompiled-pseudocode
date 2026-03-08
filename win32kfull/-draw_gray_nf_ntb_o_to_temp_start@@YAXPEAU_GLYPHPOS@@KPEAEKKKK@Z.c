/*
 * XREFs of ?draw_gray_nf_ntb_o_to_temp_start@@YAXPEAU_GLYPHPOS@@KPEAEKKKK@Z @ 0x1C0273840
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 */

void __fastcall draw_gray_nf_ntb_o_to_temp_start(
        struct _GLYPHPOS *a1,
        unsigned int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned __int64 v9; // rdx
  POINTL *p_ptl; // rsi
  unsigned __int64 v11; // rdi
  struct _GLYPHBITS *v12; // rbx

  v9 = 3LL * a2;
  if ( a1 < &a1[v9 / 3] )
  {
    p_ptl = &a1->ptl;
    v11 = (8 * v9 - 1) / 0x18 + 1;
    do
    {
      v12 = **(struct _GLYPHBITS ***)&p_ptl[-1];
      (*(&off_1C030CA28[2 * ((LOBYTE(v12->ptlOrigin.x) + LOBYTE(p_ptl->x) - (_BYTE)a4) & 1u)] + (v12->sizlBitmap.cx & 1)))(
        v12,
        (unsigned int)(v12->sizlBitmap.cx + 1) >> 1,
        &a3[a5 * (__int64)(int)(v12->ptlOrigin.y + p_ptl->y - a7) + (v12->ptlOrigin.x + p_ptl->x - a4) / 2],
        a5);
      p_ptl += 3;
      --v11;
    }
    while ( v11 );
  }
}
