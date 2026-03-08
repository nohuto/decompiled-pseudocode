/*
 * XREFs of ?bTextOutSimpleFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@AEAVRFONTOBJ@@PEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0288C60
 * Callers:
 *     ?GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x1C00AB7D0 (-GreExtTextOutWLocked@@YAHAEAVXDCOBJ@@HHIPEAUtagRECT@@PEAGHPEAHKPEAXKAEBUTag@RFONTOBJ@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     ?bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C0287840 (-bSimpleFill@EPATHOBJ@@QEAAHKPEAVPDEVOBJ@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@.c)
 *     ?UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z @ 0x1C02C24F8 (-UMPDAcquireRFONTSem@@YAXAEAVRFONTOBJ@@PEAVUMPDOBJ@@KKPEBH@Z.c)
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1C02C27CC (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

__int64 __fastcall EPATHOBJ::bTextOutSimpleFill(
        PATHOBJ *ppo,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        struct PDEVOBJ *a4,
        struct SURFACE *a5,
        struct _CLIPOBJ *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8)
{
  int *v8; // rbx
  unsigned int v10; // r14d
  unsigned int v11; // r15d
  int v12; // r12d
  __int64 v15; // rax
  __int64 v16; // rcx
  int v17; // eax
  unsigned int v18; // esi
  unsigned int v20; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v21; // [rsp+54h] [rbp-65h] BYREF
  int *v22; // [rsp+58h] [rbp-61h] BYREF
  struct _POINTL *v23; // [rsp+60h] [rbp-59h]
  BRUSHOBJ *pbo; // [rsp+68h] [rbp-51h]
  CLIPOBJ *pco; // [rsp+70h] [rbp-49h]
  struct SURFACE *v26; // [rsp+78h] [rbp-41h]
  struct PDEVOBJ *v27; // [rsp+80h] [rbp-39h]
  int v28[10]; // [rsp+88h] [rbp-31h] BYREF

  v8 = v28;
  v26 = a5;
  v10 = 0;
  pco = a6;
  v11 = 0;
  v12 = 0;
  pbo = a7;
  v23 = a8;
  v15 = *(_QWORD *)a2;
  v27 = a4;
  v20 = 0;
  v21 = 0;
  v16 = *(_QWORD *)(v15 + 48);
  v22 = v28;
  if ( (*(_DWORD *)(v16 + 40) & 0x8080) == 0x8080 && *(_QWORD *)a3 )
  {
    v17 = UMPDReleaseRFONTSem(a3, 0LL, &v20, &v21, &v22);
    v10 = v20;
    v12 = v17;
    v11 = v21;
    v8 = v22;
  }
  v18 = EPATHOBJ::bSimpleFill(ppo, *(_DWORD *)(*(_QWORD *)a2 + 72LL), v27, v26, pco, pbo, v23, 0xD0Du, 2u);
  if ( v12 )
  {
    UMPDAcquireRFONTSem(a3, 0LL, v10, v11, v8);
    if ( v8 )
    {
      if ( v8 != v28 )
        Win32FreePool(v8);
    }
  }
  return v18;
}
