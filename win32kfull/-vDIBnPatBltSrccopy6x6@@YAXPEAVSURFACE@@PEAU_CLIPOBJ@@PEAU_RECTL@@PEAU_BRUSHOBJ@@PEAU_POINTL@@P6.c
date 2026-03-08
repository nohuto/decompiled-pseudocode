/*
 * XREFs of ?vDIBnPatBltSrccopy6x6@@YAXPEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_RECTL@@PEAU_BRUSHOBJ@@PEAU_POINTL@@P6AXPEAU_PATBLTFRAME@@H@Z@Z @ 0x1C02E7530
 * Callers:
 *     EngBitBlt @ 0x1C0088BA0 (EngBitBlt.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C00032F8 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1C00B5E70 (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0130B00 (_guard_dispatch_icall_nop.c)
 *     memset_0 @ 0x1C0130E80 (memset_0.c)
 *     ?vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z @ 0x1C02E7890 (-vPatCpyRect1_6x6@@YAXPEAU_PATBLTFRAME@@H@Z.c)
 */

void __fastcall vDIBnPatBltSrccopy6x6(
        struct SURFACE *a1,
        struct _CLIPOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5)
{
  LONG x; // r8d
  LONG y; // ecx
  int v11; // ebx
  unsigned int v12; // edx
  LONG *v13; // rcx
  LONG v14; // eax
  LONG v15; // eax
  LONG v16; // eax
  LONG left; // edx
  LONG right; // ecx
  LONG top; // r8d
  LONG bottom; // r9d
  _QWORD v21[2]; // [rsp+38h] [rbp-1F0h] BYREF
  int v22; // [rsp+48h] [rbp-1E0h]
  _BYTE v23[12]; // [rsp+4Ch] [rbp-1DCh] BYREF
  int v24; // [rsp+58h] [rbp-1D0h]
  int v25; // [rsp+5Ch] [rbp-1CCh]
  __int128 v26; // [rsp+60h] [rbp-1C8h]
  struct _CLIPOBJ *v27; // [rsp+70h] [rbp-1B8h]
  struct _RECTL *v28; // [rsp+78h] [rbp-1B0h]
  void (__fastcall *v29)(struct _PATBLTFRAME *, int); // [rsp+80h] [rbp-1A8h]
  unsigned int v30; // [rsp+90h] [rbp-198h] BYREF
  __m128i rclBounds; // [rsp+94h] [rbp-194h] BYREF

  v27 = a2;
  v28 = a3;
  v29 = vPatCpyRect1_6x6;
  memset(v23, 0, sizeof(v23));
  v26 = 0LL;
  memset_0(&v30, 0, 0x144uLL);
  v21[0] = *((_QWORD *)a1 + 10);
  v22 = *((_DWORD *)a1 + 22);
  v21[1] = *((_QWORD *)a4[1].pvRbrush + 4);
  x = a5->x;
  if ( a5->x < 0 )
    v24 = 5 - ~x % 6;
  else
    v24 = x % 6;
  y = a5->y;
  if ( y < 0 )
    v25 = 5 - ~y % 6;
  else
    v25 = y % 6;
  if ( a2 && a2->iDComplexity )
  {
    if ( a2->iDComplexity == 1 )
    {
      rclBounds = (__m128i)a2->rclBounds;
      left = _mm_cvtsi128_si32(rclBounds);
      if ( left <= a3->left )
        left = a3->left;
      rclBounds.m128i_i32[0] = left;
      right = rclBounds.m128i_i32[2];
      if ( rclBounds.m128i_i32[2] >= a3->right )
        right = a3->right;
      rclBounds.m128i_i32[2] = right;
      top = rclBounds.m128i_i32[1];
      if ( rclBounds.m128i_i32[1] <= a3->top )
        top = a3->top;
      rclBounds.m128i_i32[1] = top;
      bottom = rclBounds.m128i_i32[3];
      if ( rclBounds.m128i_i32[3] >= a3->bottom )
        bottom = a3->bottom;
      rclBounds.m128i_i32[3] = bottom;
      if ( left < right && top < bottom )
      {
        *(_QWORD *)&v23[4] = &rclBounds;
        vPatCpyRect1_6x6((struct _PATBLTFRAME *)v21, 1);
      }
    }
    else if ( a2->iDComplexity == 3 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
      do
      {
        v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)&v30, 0LL);
        if ( v30 - 1 <= 0x13 )
        {
          v12 = 0;
          v13 = &rclBounds.m128i_i32[1];
          while ( v12 < v30 )
          {
            if ( *(v13 - 1) < a3->left )
              *(v13 - 1) = a3->left;
            v14 = a3->right;
            if ( v13[1] > v14 )
              v13[1] = v14;
            v15 = a3->top;
            if ( *v13 < v15 )
              *v13 = v15;
            v16 = a3->bottom;
            if ( v13[2] > v16 )
              v13[2] = v16;
            ++v12;
            v13 += 4;
          }
          *(_QWORD *)&v23[4] = &rclBounds;
          vPatCpyRect1_6x6((struct _PATBLTFRAME *)v21, v30);
        }
      }
      while ( v11 );
    }
  }
  else
  {
    *(_QWORD *)&v23[4] = a3;
    vPatCpyRect1_6x6((struct _PATBLTFRAME *)v21, 1);
  }
}
