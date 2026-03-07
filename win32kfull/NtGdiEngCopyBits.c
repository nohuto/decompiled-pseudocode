__int64 __fastcall NtGdiEngCopyBits(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        RECTL *a5,
        POINTL *a6)
{
  unsigned int v8; // edi
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  struct _SURFOBJ **v11; // r13
  _DWORD *v12; // rsi
  SURFOBJ *v14; // r15
  SURFOBJ *v15; // r14
  RECTL *prclDest; // r12
  struct _CLIPOBJ *v17; // rdx
  struct _XLATEOBJ *v18; // rdi
  struct _CLIPOBJ *v19; // r10
  int v20; // eax
  POINTL *pptlSrc; // r13
  struct _RECTL *v22; // rax
  unsigned int v23; // [rsp+30h] [rbp-148h] BYREF
  unsigned int v24; // [rsp+34h] [rbp-144h] BYREF
  RECTL *v25; // [rsp+38h] [rbp-140h] BYREF
  POINTL *v26; // [rsp+40h] [rbp-138h] BYREF
  CLIPOBJ *pco; // [rsp+48h] [rbp-130h]
  XLATEOBJ *pxlo; // [rsp+50h] [rbp-128h]
  CLIPOBJ *v29; // [rsp+58h] [rbp-120h]
  struct _POINTL v30; // [rsp+60h] [rbp-118h] BYREF
  __int64 v31; // [rsp+68h] [rbp-110h]
  struct UMPDOBJ *v32; // [rsp+70h] [rbp-108h]
  SURFOBJ *v33; // [rsp+78h] [rbp-100h]
  SURFOBJ *v34; // [rsp+80h] [rbp-F8h]
  SURFOBJ *psoSrc[8]; // [rsp+90h] [rbp-E8h] BYREF
  SURFOBJ *psoDest[8]; // [rsp+D0h] [rbp-A8h] BYREF
  struct _RECTL v37; // [rsp+110h] [rbp-68h] BYREF
  struct _RECTL v38; // [rsp+120h] [rbp-58h] BYREF

  v29 = a4;
  v31 = a3;
  *(_QWORD *)&v37.left = a3;
  pco = a4;
  v25 = a5;
  v26 = a6;
  v38 = 0LL;
  v30 = 0LL;
  v24 = 0;
  v23 = 0;
  v8 = 1;
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v11 = (struct _SURFOBJ **)ThreadCurrentObj;
  v32 = ThreadCurrentObj;
  v12 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( ThreadCurrentObj )
    ++*v12;
  pxlo = (XLATEOBJ *)((char *)ThreadCurrentObj + 420);
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoDest, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc, a2, v11);
  v14 = psoDest[0];
  v33 = psoDest[0];
  v15 = psoSrc[0];
  v34 = psoSrc[0];
  if ( psoDest[0] && psoSrc[0] && !psoDest[0]->iType && v25 && v26 )
  {
    CaptureRECTL(&v25, &v38);
    CapturePOINTL(&v26, &v30);
    prclDest = v25;
    if ( bOrder(v25) )
    {
      pco = UMPDOBJ::GetDDIOBJ((UMPDOBJ *)v11, v17, &v14->sizlBitmap);
      v18 = (struct _XLATEOBJ *)UMPDOBJ::GetDDIOBJ<_XLATEOBJ>((__int64)v11, (__int64)v29);
      pxlo = v18;
      if ( !(unsigned int)bCheckSurfaceRectSize(v14, prclDest, v19, &v24, &v23)
        || (v20 = bCheckXlate(v15, v18), v8 = 1, !v20) )
      {
        v8 = 0;
      }
      if ( v8 )
      {
        v37 = 0LL;
        pptlSrc = v26;
        v22 = pRect(v26, &v37, v24, v23);
        v8 = bCheckSurfaceRect(v15, v22, 0LL);
        if ( v8 )
          v8 = EngCopyBits(v14, v15, pco, pxlo, prclDest, pptlSrc);
      }
    }
  }
  else
  {
    v8 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoSrc);
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)psoDest);
  --*v12;
  return v8;
}
