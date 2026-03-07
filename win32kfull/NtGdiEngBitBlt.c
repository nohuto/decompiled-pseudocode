__int64 __fastcall NtGdiEngBitBlt(
        struct _SURFOBJ *a1,
        XLATEOBJ *a2,
        SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        RECTL *a6,
        POINTL *a7,
        POINTL *a8,
        struct _BRUSHOBJ *a9,
        POINTL *a10,
        ROP4 a11)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct _SURFOBJ **v14; // r15
  _DWORD *v15; // rsi
  SURFOBJ *v16; // r12
  struct _BRUSHOBJ *v17; // rax
  BRUSHOBJ *pbo; // r14
  __int64 v19; // r10
  __int64 v20; // r11
  char v21; // al
  struct tagSIZE *v22; // r11
  unsigned int v23; // edi
  int v24; // r9d
  int v25; // r8d
  POINTL *pptlSrc; // r13
  struct _RECTL *v27; // r11
  SURFOBJ *v28; // rdi
  POINTL *pptlMask; // r15
  struct _BRUSHOBJ *v31; // [rsp+60h] [rbp-1D8h] BYREF
  POINTL *v32; // [rsp+68h] [rbp-1D0h] BYREF
  SURFOBJ *psoTrg; // [rsp+70h] [rbp-1C8h]
  unsigned int v34[2]; // [rsp+78h] [rbp-1C0h] BYREF
  ROP4 rop4; // [rsp+80h] [rbp-1B8h]
  RECTL *prclTrg; // [rsp+88h] [rbp-1B0h] BYREF
  SURFOBJ *psoMask; // [rsp+90h] [rbp-1A8h]
  XLATEOBJ *pxlo; // [rsp+98h] [rbp-1A0h]
  POINTL *v39; // [rsp+A0h] [rbp-198h] BYREF
  POINTL *pptlBrush; // [rsp+A8h] [rbp-190h] BYREF
  CLIPOBJ *pco; // [rsp+B0h] [rbp-188h]
  struct _POINTL v42; // [rsp+B8h] [rbp-180h] BYREF
  struct _POINTL v43; // [rsp+C0h] [rbp-178h] BYREF
  struct _POINTL v44; // [rsp+C8h] [rbp-170h] BYREF
  struct _CLIPOBJ *v45; // [rsp+D0h] [rbp-168h]
  struct UMPDOBJ *v46; // [rsp+D8h] [rbp-160h]
  struct _BRUSHOBJ v47; // [rsp+E0h] [rbp-158h] BYREF
  _QWORD v48[8]; // [rsp+100h] [rbp-138h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+140h] [rbp-F8h] BYREF
  _QWORD v50[8]; // [rsp+180h] [rbp-B8h] BYREF
  struct _RECTL v51; // [rsp+1C0h] [rbp-78h] BYREF
  struct _RECTL v52; // [rsp+1D0h] [rbp-68h] BYREF
  struct _RECTL v53; // [rsp+1E0h] [rbp-58h] BYREF

  v45 = a4;
  psoTrg = a3;
  pxlo = a2;
  *(_QWORD *)&v52.left = a4;
  *(_QWORD *)v34 = a5;
  prclTrg = a6;
  v32 = a7;
  v39 = a8;
  v31 = a9;
  pptlBrush = a10;
  rop4 = a11;
  v53 = 0LL;
  v42 = 0LL;
  v43 = 0LL;
  v44 = 0LL;
  memset(&v47, 0, sizeof(v47));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v14 = (struct _SURFOBJ **)ThreadCurrentObj;
  v46 = ThreadCurrentObj;
  v15 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( ThreadCurrentObj )
    ++*v15;
  pco = (CLIPOBJ *)((char *)ThreadCurrentObj + 420);
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v50, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, (struct _SURFOBJ *)pxlo, v14);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v48, psoTrg, v14);
  psoTrg = (SURFOBJ *)v50[0];
  v16 = psoSrc[0];
  *(SURFOBJ **)&v51.left = psoSrc[0];
  psoMask = (SURFOBJ *)v48[0];
  v17 = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v14, (__int64)a9);
  pbo = v17;
  if ( !v17 )
  {
    v17 = CaptureAndFakeBRUSHOBJ(v31, &v47);
    pbo = v17;
  }
  v31 = v17;
  pxlo = (XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v14, *(__int64 *)v34);
  if ( (a11 & 0xFFFF0000) != 0
    || !prclTrg
    || (v21 = gajRop3[(unsigned __int8)a11] | gajRop3[BYTE1(a11)], (v21 & 0xE8) != 0)
    && (!pbo || pbo->iSolidColor == -1 && !pptlBrush)
    || (v21 & 0xD4) != 0 && (!v32 || !v16)
    || (unsigned __int8)a11 != BYTE1(a11) && !v19 && (!pbo || pbo->iSolidColor != -1) )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v48);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v50);
    --*v15;
    return 0LL;
  }
  if ( v20 )
  {
    CaptureRECTL(&prclTrg, &v53);
    CapturePOINTL(&v32, &v42);
    CapturePOINTL(&v39, &v43);
    CapturePOINTL(&pptlBrush, &v44);
    v34[0] = 0;
    LODWORD(v31) = 0;
    pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v14, v45, v22 + 4);
    v23 = (unsigned int)bCheckSurfaceRectSize(psoTrg, prclTrg, pco, v34, (unsigned int *)&v31)
       && (unsigned int)bCheckXlate(v16, pxlo);
    if ( v23 )
    {
      v52 = 0LL;
      v51 = 0LL;
      v24 = (int)v31;
      v25 = v34[0];
      pptlSrc = v32;
      if ( v16 )
        v27 = pRect(v32, &v52, v34[0], (int)v31);
      else
        v27 = 0LL;
      v28 = psoMask;
      pptlMask = v39;
      if ( psoMask )
        v32 = (POINTL *)pRect(v39, &v51, v25, v24);
      else
        v32 = 0LL;
      v23 = (unsigned int)bCheckSurfaceRect(v16, v27, 0LL) && (unsigned int)bCheckMask(v28, (struct _RECTL *)v32);
      if ( v23 )
        v23 = EngBitBlt(psoTrg, v16, psoMask, pco, pxlo, prclTrg, pptlSrc, pptlMask, pbo, pptlBrush, rop4);
    }
  }
  else
  {
    v23 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v48);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v50);
  --*v15;
  return v23;
}
