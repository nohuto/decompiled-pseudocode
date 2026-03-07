__int64 __fastcall NtGdiEngTextOut(
        struct _SURFOBJ *a1,
        __int64 a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct _RECTL *a5,
        RECTL *a6,
        struct _BRUSHOBJ *a7,
        struct _BRUSHOBJ *a8,
        POINTL *a9,
        MIX mix)
{
  struct _W32THREAD *ThreadWin32Thread; // rax
  struct UMPDOBJ *ThreadCurrentObj; // rax
  UMPDOBJ *v13; // r14
  _DWORD *v14; // rdi
  SURFOBJ *v16; // r13
  struct _BRUSHOBJ *pboFore; // r15
  BRUSHOBJ *pboOpaque; // r12
  RECTL *v19; // rax
  struct _CLIPOBJ *DDIOBJ; // rax
  unsigned int v21; // esi
  FONTOBJ *pfoa; // [rsp+58h] [rbp-150h]
  STROBJ *pstroa; // [rsp+60h] [rbp-148h]
  POINTL *pptlOrg; // [rsp+68h] [rbp-140h] BYREF
  RECTL *prclOpaque; // [rsp+70h] [rbp-138h] BYREF
  _BYTE v28[8]; // [rsp+78h] [rbp-130h] BYREF
  CLIPOBJ *pco; // [rsp+80h] [rbp-128h]
  RECTL *prclExtra; // [rsp+88h] [rbp-120h]
  struct _BRUSHOBJ *v31; // [rsp+90h] [rbp-118h]
  struct _RECTL *v32; // [rsp+98h] [rbp-110h] BYREF
  struct _BRUSHOBJ *v33; // [rsp+A0h] [rbp-108h]
  struct _POINTL v34; // [rsp+A8h] [rbp-100h] BYREF
  struct _CLIPOBJ *v35; // [rsp+B0h] [rbp-F8h]
  struct UMPDOBJ *v36; // [rsp+B8h] [rbp-F0h]
  SURFOBJ *v37; // [rsp+C0h] [rbp-E8h]
  struct _BRUSHOBJ v38; // [rsp+C8h] [rbp-E0h] BYREF
  struct _BRUSHOBJ v39; // [rsp+E0h] [rbp-C8h] BYREF
  SURFOBJ *pso[8]; // [rsp+100h] [rbp-A8h] BYREF
  struct _RECTL v41; // [rsp+140h] [rbp-68h] BYREF
  struct _RECTL v42; // [rsp+150h] [rbp-58h] BYREF

  v35 = a4;
  pco = a4;
  v32 = a5;
  prclOpaque = a6;
  v33 = a8;
  pptlOrg = a9;
  v41 = 0LL;
  v42 = 0LL;
  v34 = 0LL;
  memset(&v38, 0, sizeof(v38));
  memset(&v39, 0, sizeof(v39));
  ThreadWin32Thread = (struct _W32THREAD *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  ThreadCurrentObj = UMPDOBJ::GetThreadCurrentObj(ThreadWin32Thread);
  v13 = ThreadCurrentObj;
  v36 = ThreadCurrentObj;
  v14 = (_DWORD *)((char *)ThreadCurrentObj + 420);
  if ( ThreadCurrentObj )
    ++*v14;
  prclExtra = (RECTL *)((char *)ThreadCurrentObj + 420);
  if ( !ThreadCurrentObj )
    return 0LL;
  UMPDSURFOBJ::UMPDSURFOBJ((UMPDSURFOBJ *)pso, a1, (struct _SURFOBJ **)ThreadCurrentObj);
  v16 = pso[0];
  v37 = pso[0];
  pstroa = (STROBJ *)UMPDOBJ::GetDDIOBJ<_STROBJ>((__int64)v13, a2);
  pfoa = (FONTOBJ *)UMPDOBJ::GetDDIOBJ<_FONTOBJ>((__int64)v13, a3);
  pboFore = (struct _BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a7);
  if ( !pboFore )
    pboFore = CaptureAndFakeBRUSHOBJ(a7, &v38);
  v31 = pboFore;
  pboOpaque = (BRUSHOBJ *)UMPDOBJ::GetDDIOBJ<_BRUSHOBJ>((__int64)v13, (__int64)a8);
  if ( !pboOpaque )
    pboOpaque = CaptureAndFakeBRUSHOBJ(v33, &v39);
  if ( v16 && pstroa && pfoa && pboFore && pptlOrg )
  {
    CaptureRECTL(&v32, &v41);
    CaptureRECTL(&prclOpaque, &v42);
    CapturePOINTL(&pptlOrg, &v34);
    v19 = v32;
    if ( (*((_DWORD *)v13 + 103) & 0x100) != 0 )
      v19 = 0LL;
    prclExtra = v19;
    DDIOBJ = UMPDOBJ::GetDDIOBJ(v13, v35, &v16->sizlBitmap);
    pco = DDIOBJ;
    if ( (((unsigned __int8)mix ^ BYTE1(mix)) & 0xF) != 0 && pboFore->iSolidColor != -1
      || (v21 = 1, !(unsigned int)bCheckSurfaceRect(v16, prclOpaque, DDIOBJ)) )
    {
      v21 = 0;
    }
    if ( v21 )
    {
      PUBLIC_PFTOBJ::PUBLIC_PFTOBJ((PUBLIC_PFTOBJ *)v28, (struct PFT *)pfoa);
      UMPDAcquireRFONTSem((struct RFONTOBJ *)v28, v13, 0, 0, 0LL);
      v21 = EngTextOut(v16, pstroa, pfoa, pco, prclExtra, prclOpaque, pboFore, pboOpaque, pptlOrg, mix);
      UMPDReleaseRFONTSem((struct RFONTOBJ *)v28, v13, 0LL, 0LL, 0LL);
      RFONTTMPOBJ::~RFONTTMPOBJ((RFONTTMPOBJ *)v28);
    }
  }
  else
  {
    v21 = 0;
  }
  UMPDSURFOBJ::~UMPDSURFOBJ((UMPDSURFOBJ *)pso);
  --*v14;
  return v21;
}
