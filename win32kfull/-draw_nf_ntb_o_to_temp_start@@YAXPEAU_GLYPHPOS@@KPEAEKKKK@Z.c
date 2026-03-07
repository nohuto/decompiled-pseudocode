void __fastcall draw_nf_ntb_o_to_temp_start(
        struct _GLYPHPOS *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7)
{
  __int64 v7; // rdi
  int v10; // ebx
  GLYPHBITS *pgb; // rbp
  unsigned int v13; // r10d
  int v14; // r11d
  int v15; // r9d
  int v16; // r11d
  __int64 v17; // r8
  __int64 v18; // rcx

  if ( a2 )
  {
    v7 = 0LL;
    v10 = a2;
    do
    {
      --v10;
      pgb = a1[v7].pgdf->pgb;
      v13 = (LOBYTE(pgb->ptlOrigin.x) + LOBYTE(a1[v7].ptl.x) - (_BYTE)a4) & 7;
      v14 = pgb->sizlBitmap.cx + 7;
      v15 = (int)(v13 + v14) >> 3;
      v16 = v14 >> 3;
      if ( v15 > 4 )
      {
        v18 = 0LL;
        if ( v15 > v16 )
          v18 = 2LL;
        off_1C030D708[(v13 == 0) | (unsigned __int64)v18](
          pgb->sizlBitmap.cy,
          v13,
          a5,
          pgb->aj,
          &a3[(int)(a5 * (a1[v7].ptl.y + pgb->ptlOrigin.y - a7))
            + ((__int64)(pgb->ptlOrigin.x + a1[v7].ptl.x - a4) >> 3)],
          v16,
          v15);
      }
      else
      {
        v17 = 0LL;
        if ( v15 > v16 )
          v17 = 2LL;
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, BYTE *, unsigned __int8 *, int))off_1C030C210[(v13 == 0) | (unsigned int)(4 * v15) | (unsigned __int64)v17])(
          (unsigned int)pgb->sizlBitmap.cy,
          v13,
          a5,
          pgb->aj,
          &a3[(int)(a5 * (a1[v7].ptl.y + pgb->ptlOrigin.y - a7))
            + ((__int64)(pgb->ptlOrigin.x + a1[v7].ptl.x - a4) >> 3)],
          v16);
      }
      v7 = (unsigned int)(v7 + 1);
    }
    while ( v10 );
  }
}
