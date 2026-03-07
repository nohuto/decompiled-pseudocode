void __fastcall draw_clrt_f_ntb_o_to_temp_start(
        struct _GLYPHPOS *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  int v8; // edi
  int v9; // esi
  struct _GLYPHPOS *v10; // rbx
  struct _GLYPHPOS *v11; // rbp

  v8 = a1->ptl.x - a4;
  v9 = a1->ptl.y - a7;
  v10 = a1;
  v11 = &a1[a2];
  if ( a1 < v11 )
  {
    do
    {
      vOrClearTypeGlyph(
        v10->pgdf->pgb,
        v10->pgdf->pgb->sizlBitmap.cx,
        &a3[a5 * (__int64)(v9 + v10->pgdf->pgb->ptlOrigin.y) + v8 + v10->pgdf->pgb->ptlOrigin.x],
        a5);
      v8 += a6;
      ++v10;
    }
    while ( v10 < v11 );
  }
}
