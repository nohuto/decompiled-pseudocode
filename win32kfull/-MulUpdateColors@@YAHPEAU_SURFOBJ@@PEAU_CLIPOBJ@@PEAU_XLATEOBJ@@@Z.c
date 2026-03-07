__int64 __fastcall MulUpdateColors(struct _SURFOBJ *a1, struct _CLIPOBJ *a2, struct _XLATEOBJ *a3)
{
  DHPDEV dhpdev; // rax
  unsigned int v6; // ebp
  RECTL rclBounds; // xmm0
  __int64 *v8; // rdi
  __int64 v9; // rbx
  struct _RECTL v10; // xmm0
  __int64 v11; // rax
  struct _SURFOBJ *v12; // r8
  bool v13; // zf
  int (*v14)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *); // rcx
  struct _POINTL v16; // [rsp+50h] [rbp-58h] BYREF
  struct _RECTL v17; // [rsp+58h] [rbp-50h] BYREF
  RECTL v18; // [rsp+68h] [rbp-40h] BYREF

  dhpdev = a1->dhpdev;
  v16 = 0LL;
  v17 = 0LL;
  v6 = 1;
  rclBounds = a2->rclBounds;
  v18 = rclBounds;
  v8 = *(__int64 **)dhpdev;
  if ( *(_QWORD *)dhpdev )
  {
    do
    {
      v9 = v8[6];
      if ( (*(_DWORD *)(v9 + 2140) & 0x100) != 0 && bIntersect(&v18, (const struct _RECTL *)((char *)v8 + 28), &v17) )
      {
        v10 = v17;
        a2->rclBounds = v17;
        v11 = *(_QWORD *)(v9 + 2528);
        v12 = (struct _SURFOBJ *)v8[8];
        v16.x = _mm_cvtsi128_si32((__m128i)v10);
        v13 = (*(_DWORD *)(v11 + 112) & 0x400) == 0;
        v16.y = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v10, 4));
        if ( v13 )
          v14 = EngCopyBits;
        else
          v14 = *(int (**)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(v9 + 2816);
        v6 &= OffCopyBitsInternal(v14, (struct _POINTL *)v8 + 9, v12, (struct _POINTL *)v8 + 9, v12, a2, a3, &v17, &v16);
      }
      v8 = (__int64 *)*v8;
    }
    while ( v8 );
    rclBounds = v18;
  }
  a2->rclBounds = rclBounds;
  return v6;
}
