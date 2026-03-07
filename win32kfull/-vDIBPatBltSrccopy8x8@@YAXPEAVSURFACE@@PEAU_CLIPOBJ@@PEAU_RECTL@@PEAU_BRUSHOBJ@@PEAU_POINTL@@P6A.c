void __fastcall vDIBPatBltSrccopy8x8(
        struct SURFACE *a1,
        struct _CLIPOBJ *a2,
        struct _RECTL *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        void (*a6)(struct _PATBLTFRAME *, int))
{
  _QWORD *pvRbrush; // rcx
  int v11; // ebx
  int v12; // r10d
  __int64 *v13; // rcx
  LONG v14; // edx
  LONG v15; // eax
  LONG v16; // r9d
  LONG v17; // eax
  LONG v18; // eax
  LONG v19; // r8d
  LONG v20; // r11d
  LONG v21; // r8d
  LONG left; // edx
  LONG right; // ecx
  LONG top; // r8d
  LONG bottom; // r9d
  _QWORD v26[2]; // [rsp+38h] [rbp-1F0h] BYREF
  int v27; // [rsp+48h] [rbp-1E0h]
  int v28; // [rsp+4Ch] [rbp-1DCh]
  __m128i *p_rclBounds; // [rsp+50h] [rbp-1D8h]
  int v30; // [rsp+58h] [rbp-1D0h]
  int v31; // [rsp+5Ch] [rbp-1CCh]
  __int128 v32; // [rsp+60h] [rbp-1C8h]
  struct _CLIPOBJ *v33; // [rsp+70h] [rbp-1B8h]
  struct _RECTL *v34; // [rsp+78h] [rbp-1B0h]
  void (*v35)(struct _PATBLTFRAME *, int); // [rsp+80h] [rbp-1A8h]
  unsigned int v36; // [rsp+90h] [rbp-198h] BYREF
  __m128i rclBounds; // [rsp+94h] [rbp-194h] BYREF

  v33 = a2;
  v34 = a3;
  v35 = a6;
  p_rclBounds = 0LL;
  v32 = 0LL;
  memset_0(&v36, 0, 0x144uLL);
  v26[0] = *((_QWORD *)a1 + 10);
  v27 = *((_DWORD *)a1 + 22);
  pvRbrush = a4[1].pvRbrush;
  v26[1] = pvRbrush[4];
  v28 = *((_DWORD *)pvRbrush + 7);
  v30 = a5->x & 7;
  v31 = a5->y & 7;
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
        p_rclBounds = &rclBounds;
        ((void (__fastcall *)(_QWORD *, __int64))a6)(v26, 1LL);
      }
    }
    else if ( a2->iDComplexity == 3 )
    {
      XCLIPOBJ::cEnumStart((XCLIPOBJ *)a2, 0, 0, 4u, 0x14u);
      do
      {
        v11 = XCLIPOBJ::bEnum((XCLIPOBJ *)a2, 0x144u, (char *)&v36, 0LL);
        if ( v36 - 1 <= 0x13 )
        {
          v12 = 0;
          v13 = &rclBounds.m128i_i64[1];
          while ( v12 < (int)v36 )
          {
            v14 = *((_DWORD *)v13 - 2);
            v15 = a3->left;
            if ( v14 < a3->left )
            {
              *((_DWORD *)v13 - 2) = v15;
              v14 = v15;
            }
            v16 = *(_DWORD *)v13;
            v17 = a3->right;
            if ( *(_DWORD *)v13 > v17 )
            {
              *(_DWORD *)v13 = v17;
              v16 = v17;
            }
            v18 = *((_DWORD *)v13 - 1);
            v19 = a3->top;
            if ( v18 < v19 )
            {
              *((_DWORD *)v13 - 1) = v19;
              v18 = v19;
            }
            v20 = *((_DWORD *)v13 + 1);
            v21 = a3->bottom;
            if ( v20 > v21 )
            {
              *((_DWORD *)v13 + 1) = v21;
              v20 = v21;
            }
            if ( v16 < v14 )
              *(_DWORD *)v13 = v14;
            if ( v20 < v18 )
              *((_DWORD *)v13 + 1) = v18;
            ++v12;
            v13 += 2;
          }
          p_rclBounds = &rclBounds;
          ((void (__fastcall *)(_QWORD *, _QWORD))a6)(v26, v36);
        }
      }
      while ( v11 );
    }
  }
  else
  {
    p_rclBounds = (__m128i *)a3;
    ((void (__fastcall *)(_QWORD *, __int64))a6)(v26, 1LL);
  }
}
