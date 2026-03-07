void __fastcall draw_f_tb_no_to_temp_start(
        struct _GLYPHPOS *a1,
        int a2,
        unsigned __int8 *a3,
        int a4,
        unsigned int a5,
        unsigned int a6)
{
  __int64 v6; // rsi
  int v8; // edi
  int v10; // ebx
  GLYPHBITS *pgb; // r14
  LONG cx; // eax
  int v13; // ecx
  __int64 v14; // rdx
  unsigned __int8 *v15; // r10
  int v16; // r11d
  int v17; // r9d
  __int64 v18; // r8
  __int64 v19; // rcx

  if ( a2 )
  {
    v6 = 0LL;
    v8 = a2;
    v10 = a1->ptl.x - a4;
    do
    {
      --v8;
      pgb = a1[v6].pgdf->pgb;
      cx = pgb->sizlBitmap.cx;
      v13 = v10 + pgb->ptlOrigin.x;
      v14 = ((_BYTE)v10 + LOBYTE(pgb->ptlOrigin.x)) & 7;
      v15 = &a3[(__int64)v13 >> 3];
      v16 = (cx + 7) >> 3;
      v17 = (cx + (int)v14 + 7) >> 3;
      if ( v17 > 4 )
      {
        v19 = 0LL;
        if ( v17 > v16 )
          v19 = 2LL;
        off_1C030D708[((_DWORD)v14 == 0) | (unsigned __int64)v19](pgb->sizlBitmap.cy, v14, a5, pgb->aj, v15, v16, v17);
      }
      else
      {
        v18 = 0LL;
        if ( v17 > v16 )
          v18 = 2LL;
        ((void (__fastcall *)(_QWORD, __int64, _QWORD, BYTE *, unsigned __int8 *, int))off_1C030D730[((_DWORD)v14 == 0) | (unsigned int)(4 * v17) | (unsigned __int64)v18])(
          (unsigned int)pgb->sizlBitmap.cy,
          v14,
          a5,
          pgb->aj,
          &a3[(__int64)v13 >> 3],
          v16);
      }
      v10 += a6;
      v6 = (unsigned int)(v6 + 1);
    }
    while ( v8 );
  }
}
