int __fastcall MulCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6)
{
  struct _SURFOBJ *v9; // rdx
  struct _CLIPOBJ *v10; // r8
  int v11; // edi
  int i; // eax
  HDEV hdev; // rsi
  int v14; // eax
  struct _SURFOBJ *v15; // rcx
  __int64 v16; // r10
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // r10
  int v20; // eax
  int v21; // eax
  _QWORD v23[2]; // [rsp+60h] [rbp-A0h] BYREF
  HDEV v24; // [rsp+70h] [rbp-90h] BYREF
  __int64 v25; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v26[56]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v27; // [rsp+B8h] [rbp-48h]
  struct _SURFOBJ *v28; // [rsp+C0h] [rbp-40h]
  __int64 v29; // [rsp+C8h] [rbp-38h]
  _BYTE v30[88]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v31; // [rsp+138h] [rbp+38h]

  if ( !IsMetaRedirectionBitmap(a2) )
    return MulBitBlt(a1, v9, 0LL, v10, a4, a5, a6, 0LL, 0LL, 0LL, 0xCCCCu);
  v11 = 1;
  for ( i = MSURF::bFindSurface((MSURF *)v26, v9, v10, a5); i; i = MSURF::bNextSurface((MSURF *)v26) )
  {
    v23[0] = 0LL;
    hdev = v28->hdev;
    v24 = hdev;
    if ( ((_DWORD)hdev[524] & 0x8000) == 0 )
    {
      if ( (HIDWORD(a2[1].hsurf) & 0x10) != 0 )
        SURFREFVIEW::bMap((SURFREFVIEW *)v23, v28);
      if ( IsMetaDevBitmapForMirroring(a1) )
      {
        MULTISURF::MULTISURF((MULTISURF *)v30, a1);
        if ( ((__int64)v28[1].hsurf & 0x400) != 0 )
          v14 = (*(__int64 (__fastcall **)(__int64, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v27 + 56) + 2816LL))(
                  v31,
                  v28,
                  v29,
                  a4,
                  a5,
                  a6);
        else
          v14 = ((__int64 (__fastcall *)(__int64, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                  v31,
                  v28,
                  v29,
                  a4,
                  a5,
                  a6);
        v11 &= v14;
        MULTISURF::~MULTISURF((MULTISURF *)v30);
      }
    }
    if ( IsMetaDevBitmapForMirroring(a1) )
    {
      v17 = *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *(unsigned int *)(v27 + 16));
      if ( v17 )
      {
        if ( (*(_DWORD *)(v16 + 88) & 0x400) != 0 )
          v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v27 + 56) + 2816LL))(
                  v17,
                  v16,
                  v29,
                  a4,
                  a5,
                  a6);
        else
          v18 = ((__int64 (__fastcall *)(__int64, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                  v17,
                  v16,
                  v29,
                  a4,
                  a5,
                  a6);
        v11 &= v18;
      }
    }
    else if ( IsMetaRedirectionBitmap(v15) )
    {
      if ( (*(_DWORD *)(v19 + 88) & 0x400) != 0 )
        v20 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v27 + 56) + 2816LL))(
                *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *(unsigned int *)(v27 + 16)),
                v19,
                v29,
                a4,
                a5,
                a6);
      else
        v20 = ((__int64 (__fastcall *)(_QWORD, __int64, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
                *(_QWORD *)(*((_QWORD *)a1->dhsurf + 1) + 8LL * *(unsigned int *)(v27 + 16)),
                v19,
                v29,
                a4,
                a5,
                a6);
      v11 &= v20;
    }
    else if ( ((_DWORD)hdev[524] & 0x8000) == 0 || *(_WORD *)(v19 + 76) )
    {
      MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)&v25, (struct PDEVOBJ *)&v24, a1);
      v21 = ((__int64)v28[1].hsurf & 0x400) != 0
          ? (*(__int64 (__fastcall **)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))(*(_QWORD *)(v27 + 56) + 2816LL))(
              a1,
              v28,
              v29,
              a4,
              a5,
              a6)
          : ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, __int64, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *))EngCopyBits)(
              a1,
              v28,
              v29,
              a4,
              a5,
              a6);
      v11 &= v21;
      if ( v25 )
        *(_WORD *)(v25 + 78) &= ~0x8000u;
    }
    SURFREFVIEW::bUnMapImmediate((SURFREFVIEW *)v23);
    v23[0] = 0LL;
    SURFREFVIEW::bUnMap((SURFREFVIEW *)v23);
  }
  return v11;
}
