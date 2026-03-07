__int64 __fastcall OffCopyBitsInternal(
        int (*a1)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *),
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _POINTL *a4,
        struct _SURFOBJ *a5,
        struct _CLIPOBJ *a6,
        struct _XLATEOBJ *a7,
        struct _RECTL *a8,
        struct _POINTL *a9)
{
  struct _XLATEOBJ *v11; // r10
  LONG x; // ebx
  LONG y; // edi
  int v14; // r8d
  int v15; // ecx
  unsigned int v16; // ebp
  struct _POINTL v18; // [rsp+40h] [rbp-78h]
  _DWORD v19[2]; // [rsp+48h] [rbp-70h] BYREF
  struct _XLATEOBJ *v20; // [rsp+50h] [rbp-68h]
  _DWORD v21[4]; // [rsp+58h] [rbp-60h] BYREF

  v11 = a7;
  x = a2->x;
  y = a2->y;
  v18 = *a4;
  v20 = a7;
  if ( a6 )
  {
    CLIPOBJ_vOffset(a6, x, y);
    v11 = v20;
  }
  v14 = a9->y + v18.y;
  v21[0] = x + a8->left;
  v15 = x + a8->right;
  v19[1] = v14;
  v21[2] = v15;
  v21[1] = y + a8->top;
  v21[3] = y + a8->bottom;
  v16 = 0;
  v19[0] = a9->x + v18.x;
  if ( a1 )
    v16 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, _DWORD *, _DWORD *))a1)(
            a3,
            a5,
            a6,
            v11,
            v21,
            v19);
  if ( a6 )
    CLIPOBJ_vOffset(a6, -x, -y);
  return v16;
}
