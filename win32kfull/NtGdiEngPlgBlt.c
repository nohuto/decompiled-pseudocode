__int64 __fastcall NtGdiEngPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        __int64 a5,
        COLORADJUSTMENT *a6,
        CLIPOBJ *a7,
        unsigned __int64 a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  struct _SURFOBJ **v15; // rsi
  _DWORD *v16; // r14
  SURFOBJ *v18; // r15
  SURFOBJ *v19; // r12
  struct tagSIZE *v20; // r10
  __int64 v21; // r13
  struct _XLATEOBJ *v22; // rax
  CLIPOBJ *v23; // r9
  XLATEOBJ *pxlo; // r13
  int v25; // edx
  RECTL *prcl; // rsi
  unsigned int v27; // edi
  struct _RECTL *v28; // rax
  unsigned int v29; // [rsp+60h] [rbp-1D8h] BYREF
  unsigned int v30; // [rsp+64h] [rbp-1D4h] BYREF
  CLIPOBJ *pco; // [rsp+68h] [rbp-1D0h] BYREF
  SURFOBJ *psoTrg; // [rsp+70h] [rbp-1C8h]
  RECTL *v33; // [rsp+78h] [rbp-1C0h] BYREF
  POINTL *pptl; // [rsp+80h] [rbp-1B8h] BYREF
  POINTL pptlBrushOrg; // [rsp+88h] [rbp-1B0h] BYREF
  COLORADJUSTMENT *pca; // [rsp+90h] [rbp-1A8h] BYREF
  struct _POINTL v37; // [rsp+98h] [rbp-1A0h] BYREF
  struct _CLIPOBJ *v38; // [rsp+A0h] [rbp-198h]
  __int64 v39; // [rsp+A8h] [rbp-190h]
  struct _SURFOBJ **v40; // [rsp+B0h] [rbp-188h]
  char *v41; // [rsp+B8h] [rbp-180h]
  SURFOBJ *v42; // [rsp+C0h] [rbp-178h]
  SURFOBJ *v43; // [rsp+C8h] [rbp-170h]
  struct _CLIPOBJ *v44; // [rsp+D0h] [rbp-168h]
  __int64 v45; // [rsp+D8h] [rbp-160h]
  SURFOBJ *psoMsk[8]; // [rsp+E0h] [rbp-158h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-118h] BYREF
  _QWORD v48[8]; // [rsp+160h] [rbp-D8h] BYREF
  struct _RECTL v49; // [rsp+1A0h] [rbp-98h] BYREF
  struct _RECTL v50; // [rsp+1B0h] [rbp-88h] BYREF
  tagCOLORADJUSTMENT v51; // [rsp+1C0h] [rbp-78h] BYREF
  POINTFIX pptfx[2]; // [rsp+1D8h] [rbp-60h] BYREF
  __int64 v53; // [rsp+1E8h] [rbp-50h]

  v38 = a4;
  psoTrg = a3;
  v44 = a4;
  v39 = a5;
  v45 = a5;
  pca = a6;
  pco = a7;
  v33 = a9;
  pptl = a10;
  v49 = 0LL;
  v37 = 0LL;
  pptlBrushOrg = 0LL;
  memset(&v51, 0, sizeof(v51));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v15 = ThreadCurrentObj;
  v40 = ThreadCurrentObj;
  v16 = (_DWORD *)ThreadCurrentObj + 105;
  if ( ThreadCurrentObj )
    ++*v16;
  v41 = (char *)ThreadCurrentObj + 420;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)v48, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v15);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMsk, psoTrg, v15);
  psoTrg = (SURFOBJ *)v48[0];
  v18 = psoSrc[0];
  v42 = psoSrc[0];
  v19 = psoMsk[0];
  v43 = psoMsk[0];
  if ( v48[0] && psoSrc[0] && v33 && a8 )
  {
    CaptureRECTL(&v33, &v49);
    CaptureCOLORADJUSTMENT(&pca, &v51);
    CapturePOINTL(&pptl, &v37);
    CapturePOINTL((struct _POINTL **)&pco, &pptlBrushOrg);
    if ( a8 + 24 < a8 || a8 + 24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)&pptfx[0].x = *(_OWORD *)a8;
    v53 = *(_QWORD *)(a8 + 16);
    v21 = v39;
    pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v15, v38, v20 + 4);
    v22 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v15, v21);
    pxlo = v22;
    v25 = 1;
    prcl = v33;
    if ( v33 && (v33->left > v33->right || v33->top > v33->bottom) )
      v25 = 0;
    v27 = v25 && (unsigned int)bCheckXlate(v18, v22);
    if ( v27 )
    {
      if ( v19 )
      {
        v50 = 0LL;
        v30 = 0;
        v29 = 0;
        v27 = bCheckSurfaceRectSize(v18, prcl, 0LL, &v30, &v29);
        if ( v27 )
        {
          v28 = pRect(pptl, &v50, v30, v29);
          v27 = bCheckMask(v19, v28);
        }
        v23 = pco;
      }
      if ( v27 )
        v27 = EngPlgBlt(psoTrg, v18, v19, v23, pxlo, pca, &pptlBrushOrg, pptfx, prcl, pptl, iMode);
    }
  }
  else
  {
    v27 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMsk);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)v48);
  --*v16;
  return v27;
}
