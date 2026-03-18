/*
 * XREFs of GreHintSpriteShape @ 0x1C002198C
 * Callers:
 *     HintSpriteShape @ 0x1C00210C4 (HintSpriteShape.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00357C0 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0020C2C (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C0020C74 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C0022038 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C0022938 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0022A50 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C00807CC (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0083D4C (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0086C6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00B5F68 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00ED5E8 (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00ED78C (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00ED824 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00FE390 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C026B4BC (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026B550 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 GreHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, __int64 a4, int a5, ...)
{
  HDEV v5; // rdi
  __int64 v6; // r14
  HBITMAP v8; // r15
  HWND v9; // rbx
  struct PDEVOBJ *v10; // rdx
  int v11; // r13d
  DWMSPRITE *v12; // r12
  __int64 v13; // rbx
  __int64 v14; // rdx
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // rax
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int64 v33; // rax
  int v34; // eax
  struct SFMLOGICALSURFACE *v35; // r13
  HLSURF HLSURFClone; // rax
  HDEV v37; // rdx
  HDEV v38; // rdx
  int v39; // xmm1_4
  unsigned int v40; // r12d
  int v41; // ecx
  int v42; // edx
  int v43; // r8d
  int v44; // edx
  int v45; // ecx
  int v46; // edx
  __int64 v47; // r15
  int v48; // r14d
  void *v49; // rax
  int updated; // eax
  BOOL v52; // [rsp+68h] [rbp-A0h]
  unsigned int v53; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v54; // [rsp+70h] [rbp-98h] BYREF
  int v55; // [rsp+74h] [rbp-94h] BYREF
  int v56; // [rsp+78h] [rbp-90h]
  _BYTE v57[32]; // [rsp+80h] [rbp-88h] BYREF
  DWMSPRITE *v58; // [rsp+A0h] [rbp-68h]
  _BYTE v59[48]; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v60[32]; // [rsp+D8h] [rbp-30h] BYREF
  struct SFMLOGICALSURFACE *v61; // [rsp+F8h] [rbp-10h]
  __int128 v62; // [rsp+108h] [rbp+0h]
  __int128 v63; // [rsp+118h] [rbp+10h]
  __int128 v64; // [rsp+128h] [rbp+20h]
  __int128 v65; // [rsp+138h] [rbp+30h]
  __int128 v66; // [rsp+148h] [rbp+40h]
  __int128 v67; // [rsp+158h] [rbp+50h]
  __int128 v68; // [rsp+168h] [rbp+60h]
  __int128 v69; // [rsp+178h] [rbp+70h]
  __int64 v70; // [rsp+188h] [rbp+80h]
  __int64 v75; // [rsp+210h] [rbp+108h] BYREF
  va_list va; // [rsp+210h] [rbp+108h]
  __int64 v77; // [rsp+218h] [rbp+110h]
  va_list va1; // [rsp+220h] [rbp+118h] BYREF

  va_start(va1, a5);
  va_start(va, a5);
  v75 = va_arg(va1, _QWORD);
  v77 = va_arg(va1, _QWORD);
  v56 = 1;
  v5 = a1;
  v52 = 0;
  v54 = 0;
  v53 = 0;
  v6 = 0LL;
  v55 = 0;
  v8 = a3;
  v9 = a2;
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v60);
  if ( (_DWORD)v77 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  v11 = v75;
  if ( !(_DWORD)v75 || !g_pDwmState )
    goto LABEL_45;
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)va, v10, 0, 0);
  GreAcquireSemaphore(ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
  v56 = 0;
  DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v57, v9);
  v12 = v58;
  if ( !v58 )
    goto LABEL_41;
  v13 = *((_QWORD *)v58 + 18);
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v59, (HLSURF *)v13);
  v16 = *(_QWORD *)(v13 + 184);
  v52 = 1;
  if ( v16 )
  {
    v17 = v16 - 24;
    if ( !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v16 - 24)) )
    {
      v5 = a1;
      goto LABEL_18;
    }
    W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v17 + 272));
    if ( *(_DWORD *)(v17 + 324) )
    {
      v9 = a2;
      *(_QWORD *)(v17 + 328) = a1;
      *(_QWORD *)(v17 + 344) = a3;
      *(_QWORD *)(v17 + 336) = a2;
      v18 = *(_QWORD *)(a4 + 128);
      v19 = *(_OWORD *)(a4 + 16);
      v62 = *(_OWORD *)a4;
      v20 = *(_OWORD *)(a4 + 32);
      v63 = v19;
      v21 = *(_OWORD *)(a4 + 48);
      v64 = v20;
      v22 = *(_OWORD *)(a4 + 64);
      v65 = v21;
      v23 = *(_OWORD *)(a4 + 80);
      v66 = v22;
      v24 = *(_OWORD *)(a4 + 96);
      v67 = v23;
      v68 = v24;
      v25 = *(_OWORD *)(a4 + 112);
      *(_DWORD *)(v17 + 492) = v11;
      v69 = v25;
      v70 = v18;
      v26 = v63;
      *(_OWORD *)(v17 + 352) = v62;
      v27 = v64;
      *(_OWORD *)(v17 + 368) = v26;
      v28 = v65;
      *(_OWORD *)(v17 + 384) = v27;
      v29 = v66;
      *(_OWORD *)(v17 + 400) = v28;
      v30 = v67;
      *(_OWORD *)(v17 + 416) = v29;
      v31 = v68;
      *(_OWORD *)(v17 + 432) = v30;
      v32 = v69;
      v33 = v70;
      *(_OWORD *)(v17 + 448) = v31;
      *(_OWORD *)(v17 + 464) = v32;
      *(_QWORD *)(v17 + 480) = v33;
      *(_DWORD *)(v17 + 488) = a5;
      v34 = *(_DWORD *)(v17 + 112);
      if ( (v34 & 0x2000000) == 0 )
      {
        *(_DWORD *)(v17 + 112) = v34 | 0x2000000;
        _InterlockedIncrement(&glDelayedHintShape);
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v17 + 272));
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v59);
      if ( v58 )
        _InterlockedDecrement((volatile signed __int32 *)v58 + 3);
      v58 = 0LL;
      goto LABEL_42;
    }
    W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v17 + 272));
    v8 = a3;
    v5 = a1;
    if ( *(_QWORD *)(v13 + 184) )
      goto LABEL_18;
  }
  if ( (*(_DWORD *)(v13 + 244) & 1) == 0 )
  {
    v35 = (struct SFMLOGICALSURFACE *)v13;
    goto LABEL_20;
  }
LABEL_18:
  HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(v5, (struct SFMLOGICALSURFACE *)v13, 0, a5 & 2, 1);
  SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v60, HLSURFClone);
  v35 = v61;
  if ( !v61 )
  {
    if ( v8 )
    {
      v40 = 0;
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v59);
      if ( v58 )
        _InterlockedDecrement((volatile signed __int32 *)v58 + 3);
      v58 = 0LL;
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v57);
      v9 = a2;
      goto LABEL_43;
    }
    v35 = (struct SFMLOGICALSURFACE *)v13;
    SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v13, v5, 0LL);
    goto LABEL_29;
  }
  DWMSPRITE::SetLogicalSurface(v12, v37, 0LL);
  DWMSPRITE::SetLogicalSurface(v12, v38, v35);
LABEL_20:
  if ( !v8 )
  {
LABEL_29:
    *((_DWORD *)v35 + 63) &= 0xFFFFFFF6;
    goto LABEL_30;
  }
  LOBYTE(v14) = 5;
  v6 = HmgReferenceCheckLock(v8, v14, 0LL) + 24;
  SFMLOGICALSURFACE::SetShape(v35, v5, (struct _SURFOBJ *)v6);
  *((_DWORD *)v35 + 63) |= 8u;
  if ( (*(_DWORD *)(v6 + 92) & 0x800) != 0 )
  {
    v39 = *(_DWORD *)(v6 + 640);
    *((_DWORD *)v12 + 33) = *(_DWORD *)(v6 + 636);
    *((_DWORD *)v12 + 34) = v39;
    *((_DWORD *)v12 + 35) |= 0x20u;
  }
  else
  {
    *((_DWORD *)v12 + 33) = 0;
    *((_DWORD *)v12 + 34) = 0;
    *((_DWORD *)v12 + 35) &= ~0x20u;
  }
LABEL_30:
  v41 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
  v42 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
  if ( v6 )
  {
    *((_DWORD *)v35 + 63) |= 1u;
    v43 = v42 + *((_DWORD *)v12 + 15);
    v44 = v41 + *((_DWORD *)v12 + 14);
  }
  else
  {
    v43 = *((_DWORD *)v12 + 15);
    v44 = *((_DWORD *)v12 + 14);
  }
  *((_DWORD *)v12 + 16) = v44;
  *((_DWORD *)v12 + 17) = v43;
  v45 = *((_DWORD *)v35 + 63);
  if ( (v45 & 1) != 0 && (*((_DWORD *)v12 + 35) & 0x10) == 0 && (v45 & 8) != 0 )
  {
    SFMLOGICALSURFACE::StartSfmStateTracking(v35, v5, gpSfmState, v15);
    SFMLOGICALSURFACE::GetRedirectionInfo(v35, (enum _HLSURF_REDIRECTIONSTYLE *)&v55, &v54, &v53, 0LL, 0LL);
    v46 = *((_DWORD *)v35 + 63);
    v47 = *((_QWORD *)v12 + 13);
    *((_QWORD *)v12 + 13) = 0LL;
    v48 = *((_DWORD *)v12 + 29);
    v49 = (void *)UserReferenceDwmApiPort(v46 & 1);
    updated = DwmAsyncUpdateSprite(v49, (__int64)v12 + 72, a4, v55, v54, v53, v48 >= 1, v47);
    *((_DWORD *)v35 + 63) &= ~8u;
    v52 = updated >= 0;
  }
  if ( *((int *)v12 + 29) >= 1 )
    CheckAndProcessWindowResizeComplete(v12, 0, 0LL);
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v59);
  v9 = a2;
  if ( v58 )
    _InterlockedDecrement((volatile signed __int32 *)v58 + 3);
LABEL_41:
  v58 = 0LL;
LABEL_42:
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v57);
  v40 = v52;
LABEL_43:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
  GreReleaseSemaphoreInternal(ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)va);
  if ( !v56 )
    goto LABEL_46;
  v8 = a3;
  v5 = a1;
LABEL_45:
  v40 = GdiHintSpriteShape(v5, v9, v8, 0, 0);
LABEL_46:
  if ( (_DWORD)v77 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v60);
  return v40;
}
