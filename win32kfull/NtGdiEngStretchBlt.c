__int64 __fastcall NtGdiEngStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        unsigned __int64 a5,
        COLORADJUSTMENT *a6,
        CLIPOBJ *a7,
        RECTL *a8,
        RECTL *a9,
        POINTL *a10,
        ULONG iMode)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct _SURFOBJ **ThreadCurrentObj; // rax
  struct _SURFOBJ **v16; // r15
  _DWORD *v17; // rsi
  SURFOBJ *v18; // r13
  SURFOBJ *v19; // r14
  SURFOBJ *v20; // r12
  RECTL *prclSrc; // r15
  XLATEOBJ *pxlo; // rdx
  CLIPOBJ *v24; // r9
  unsigned int v25; // edi
  struct _RECTL *v26; // rax
  RECTL *v27; // [rsp+60h] [rbp-1C8h] BYREF
  struct _CLIPOBJ *v28; // [rsp+68h] [rbp-1C0h] BYREF
  unsigned __int64 v29; // [rsp+70h] [rbp-1B8h]
  RECTL *prclDest; // [rsp+78h] [rbp-1B0h] BYREF
  CLIPOBJ *pco; // [rsp+80h] [rbp-1A8h]
  POINTL *pptlMask; // [rsp+88h] [rbp-1A0h] BYREF
  POINTL *pptlHTOrg; // [rsp+90h] [rbp-198h] BYREF
  COLORADJUSTMENT *pca; // [rsp+98h] [rbp-190h] BYREF
  struct _POINTL v35; // [rsp+A0h] [rbp-188h] BYREF
  struct _POINTL v36; // [rsp+A8h] [rbp-180h] BYREF
  struct _SURFOBJ **v37; // [rsp+B0h] [rbp-178h]
  char *v38; // [rsp+B8h] [rbp-170h]
  SURFOBJ *v39; // [rsp+C0h] [rbp-168h]
  SURFOBJ *v40; // [rsp+C8h] [rbp-160h]
  SURFOBJ *v41; // [rsp+D0h] [rbp-158h]
  SURFOBJ *psoMask[8]; // [rsp+E0h] [rbp-148h] BYREF
  SURFOBJ *psoSrc[8]; // [rsp+120h] [rbp-108h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+160h] [rbp-C8h] BYREF
  struct _RECTL v45; // [rsp+1A0h] [rbp-88h] BYREF
  struct _RECTL v46; // [rsp+1B0h] [rbp-78h] BYREF
  struct _RECTL v47; // [rsp+1C0h] [rbp-68h] BYREF
  struct tagCOLORADJUSTMENT v48; // [rsp+1D0h] [rbp-58h] BYREF

  v28 = a4;
  pco = a7;
  *(_QWORD *)&v45.left = a4;
  v29 = a5;
  pca = a6;
  pptlHTOrg = (POINTL *)a7;
  prclDest = a8;
  v27 = a9;
  pptlMask = a10;
  v46 = 0LL;
  v47 = 0LL;
  v35 = 0LL;
  v36 = 0LL;
  memset(&v48, 0, sizeof(v48));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = (struct _SURFOBJ **)UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v16 = ThreadCurrentObj;
  v37 = ThreadCurrentObj;
  v17 = (_DWORD *)ThreadCurrentObj + 105;
  if ( ThreadCurrentObj )
    ++*v17;
  v38 = (char *)ThreadCurrentObj + 420;
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v16);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoMask, a3, v16);
  v18 = psoDest[0];
  v39 = psoDest[0];
  v19 = psoSrc[0];
  v40 = psoSrc[0];
  v20 = psoMask[0];
  v41 = psoMask[0];
  if ( !pco && iMode == 4 )
  {
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
    UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
    --*v17;
    return 0LL;
  }
  if ( psoDest[0] && psoSrc[0] && prclDest && v27 )
  {
    CaptureRECTL(&prclDest, &v46);
    CapturePOINTL(&pptlMask, &v35);
    CaptureRECTL(&v27, &v47);
    CaptureCOLORADJUSTMENT(&pca, &v48);
    CapturePOINTL(&pptlHTOrg, &v36);
    if ( !bCheckDestSurfaceOverlap(v18, prclDest) )
    {
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
      UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
      --*v17;
      return 1LL;
    }
    pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v16, v28, &v18->sizlBitmap);
    v29 = UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v16, v29);
    prclSrc = v27;
    v25 = bOrder(v27) && (unsigned int)bCheckXlate(v19, pxlo);
    if ( v25 )
    {
      if ( v20 )
      {
        v45 = 0LL;
        LODWORD(v27) = 0;
        LODWORD(v28) = 0;
        v25 = bCheckSurfaceRectSize(v19, prclSrc, 0LL, (unsigned int *)&v27, (unsigned int *)&v28);
        if ( v25 )
        {
          v26 = pRect(pptlMask, &v45, (int)v27, (int)v28);
          v25 = bCheckMask(v20, v26);
        }
        v24 = pco;
        pxlo = (XLATEOBJ *)v29;
      }
      if ( v25 )
        v25 = EngStretchBlt(v18, v19, v20, v24, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
    }
  }
  else
  {
    v25 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoMask);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  --*v17;
  return v25;
}
