/*
 * XREFs of ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C00EB7A0
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z @ 0x1C0032FD0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXK@Z.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1C028DCD8 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 *     ?bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@K4@Z @ 0x1C029647C (-bProxyDrvTextOut@@YAHAEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUS.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C012AA04 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C012ABD8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0160250 (_guard_dispatch_icall_nop.c)
 */

void __fastcall TextOutBitBlt(
        struct SURFACE *a1,
        struct RFONTOBJ *a2,
        struct _SURFOBJ *a3,
        struct _SURFOBJ *a4,
        struct _CLIPOBJ *a5,
        struct _XLATEOBJ *a6,
        struct _RECTL *a7,
        struct _POINTL *a8,
        struct _POINTL *a9,
        struct _BRUSHOBJ *a10,
        struct _POINTL *a11)
{
  int *v11; // rbx
  struct _RECTL *v12; // r8
  struct _BRUSHOBJ *v14; // r9
  unsigned int v15; // r14d
  struct _POINTL *v16; // r10
  unsigned int v17; // r15d
  int v18; // r12d
  int v19; // ecx
  int v21; // eax
  unsigned int v22; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v23; // [rsp+64h] [rbp-55h] BYREF
  int *v24; // [rsp+68h] [rbp-51h] BYREF
  struct _RECTL *v25; // [rsp+70h] [rbp-49h]
  struct _BRUSHOBJ *v26; // [rsp+78h] [rbp-41h]
  struct _POINTL *v27; // [rsp+80h] [rbp-39h]
  int v28[10]; // [rsp+88h] [rbp-31h] BYREF

  v11 = v28;
  v12 = a7;
  v14 = a10;
  v15 = 0;
  v16 = a11;
  v17 = 0;
  v18 = 0;
  v19 = *(_DWORD *)(*((_QWORD *)a1 + 6) + 40LL) & 0x8080;
  v25 = a7;
  v26 = a10;
  v27 = a11;
  v22 = 0;
  v23 = 0;
  v24 = v28;
  if ( v19 == 32896 && *(_QWORD *)a2 )
  {
    v21 = UMPDReleaseRFONTSem(a2, 0LL, &v22, &v23, &v24);
    v12 = v25;
    v18 = v21;
    v14 = v26;
    v16 = v27;
    v15 = v22;
    v17 = v23;
    v11 = v24;
  }
  if ( (*((_DWORD *)a1 + 28) & 1) != 0 )
    (*(void (__fastcall **)(unsigned __int64, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, struct _RECTL *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _POINTL *, int))(*((_QWORD *)a1 + 6) + 2808LL))(
      ((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL),
      0LL,
      0LL,
      a5,
      0LL,
      v12,
      0LL,
      0LL,
      v14,
      v16,
      61680);
  else
    ((void (__fastcall *)(unsigned __int64, _QWORD, _QWORD, struct _CLIPOBJ *, _QWORD, struct _RECTL *, _QWORD, _QWORD, struct _BRUSHOBJ *, struct _POINTL *, int))EngBitBlt)(
      ((unsigned __int64)a1 + 24) & -(__int64)(a1 != 0LL),
      0LL,
      0LL,
      a5,
      0LL,
      v12,
      0LL,
      0LL,
      v14,
      v16,
      61680);
  if ( v18 )
  {
    UMPDAcquireRFONTSem(a2, 0LL, v15, v17, v11);
    if ( v11 )
    {
      if ( v11 != v28 )
        Win32FreePool(v11);
    }
  }
}
