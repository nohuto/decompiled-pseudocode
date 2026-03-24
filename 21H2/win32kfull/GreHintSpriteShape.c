/*
 * XREFs of GreHintSpriteShape @ 0x1C00BDB88
 * Callers:
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008BB40 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0090120 (-vClearRendering@DC@@QEAAXXZ.c)
 *     HintSpriteShape @ 0x1C00BD898 (HintSpriteShape.c)
 * Callees:
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C0012998 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0012A28 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     DwmAsyncUpdateSprite @ 0x1C0012AC0 (DwmAsyncUpdateSprite.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C00152CC (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C0015C80 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C0016104 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00BDAE4 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C00BE198 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C00BE388 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00BE4A0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C00BED8C (--0SFMLOGICALSURFACEREF@@QEAA@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00BEDD4 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C00EE608 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00F01D8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C026D740 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026D7D4 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, __int64 a4, int a5, int a6, int a7)
{
  HDEV v7; // rdi
  HBITMAP v9; // r15
  unsigned int v11; // r12d
  __int64 v12; // r14
  struct PDEVOBJ *v13; // rdx
  DWMSPRITE *v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdi
  __int64 v19; // r8
  int v20; // eax
  struct SFMLOGICALSURFACE *v21; // rdi
  HLSURF HLSURFClone; // rax
  HDEV v23; // rdx
  HDEV v24; // rdx
  HDEV v25; // rsi
  int v26; // xmm1_4
  int v27; // ecx
  int v28; // edx
  int v29; // r8d
  int v30; // edx
  int v31; // ecx
  int v32; // edx
  int v33; // eax
  __int64 v34; // rsi
  __int64 v35; // r15
  __int64 v36; // rcx
  __int64 v37; // r12
  int v38; // ebx
  BOOL v39; // edi
  void *v40; // rax
  unsigned int v42; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v43; // [rsp+70h] [rbp-98h] BYREF
  int v44; // [rsp+74h] [rbp-94h] BYREF
  __int64 v45; // [rsp+78h] [rbp-90h] BYREF
  struct SFMLOGICALSURFACE *v46; // [rsp+80h] [rbp-88h]
  _BYTE v47[32]; // [rsp+88h] [rbp-80h] BYREF
  DWMSPRITE *v48; // [rsp+A8h] [rbp-60h]
  _BYTE v49[48]; // [rsp+B0h] [rbp-58h] BYREF
  _BYTE v50[32]; // [rsp+E0h] [rbp-28h] BYREF
  struct SFMLOGICALSURFACE *v51; // [rsp+100h] [rbp-8h]

  v7 = a1;
  v43 = 0;
  v42 = 0;
  v9 = a3;
  v44 = 0;
  v11 = 0;
  v12 = 0LL;
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v50);
  if ( a7 )
  {
    GreAcquireSemaphore(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemGreLock", ghsemGreLock, 2LL);
  }
  if ( a6 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v45, v13, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v47, a2);
    v14 = v48;
    if ( v48 )
    {
      v15 = *((_QWORD *)v48 + 21);
      SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v49, (struct SFMLOGICALSURFACE *)v15);
      v17 = *(_QWORD *)(v15 + 184);
      v11 = 1;
      if ( v17 )
      {
        v18 = v17 - 24;
        if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v17 - 24)) )
        {
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v18 + 272));
          if ( *(_DWORD *)(v18 + 324) )
          {
            *(_QWORD *)(v18 + 344) = a3;
            *(_QWORD *)(v18 + 328) = a1;
            *(_QWORD *)(v18 + 336) = a2;
            *(_OWORD *)(v18 + 352) = *(_OWORD *)a4;
            *(_OWORD *)(v18 + 368) = *(_OWORD *)(a4 + 16);
            *(_OWORD *)(v18 + 384) = *(_OWORD *)(a4 + 32);
            *(_OWORD *)(v18 + 400) = *(_OWORD *)(a4 + 48);
            *(_OWORD *)(v18 + 416) = *(_OWORD *)(a4 + 64);
            *(_OWORD *)(v18 + 432) = *(_OWORD *)(a4 + 80);
            *(_OWORD *)(v18 + 448) = *(_OWORD *)(a4 + 96);
            *(_OWORD *)(v18 + 464) = *(_OWORD *)(a4 + 112);
            *(_QWORD *)(v18 + 480) = *(_QWORD *)(a4 + 128);
            *(_DWORD *)(v18 + 488) = a5;
            *(_DWORD *)(v18 + 492) = a6;
            v20 = *(_DWORD *)(v18 + 112);
            if ( (v20 & 0x2000000) == 0 )
            {
              *(_DWORD *)(v18 + 112) = v20 | 0x2000000;
              _InterlockedIncrement(&glDelayedHintShape);
            }
            W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 272));
            SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v49);
            if ( v48 )
              _InterlockedDecrement((volatile signed __int32 *)v48 + 3);
            v48 = 0LL;
            UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v47);
            goto LABEL_43;
          }
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v18 + 272));
          v19 = *(_QWORD *)(v15 + 184);
          v9 = a3;
        }
        v7 = a1;
        if ( v19 )
          goto LABEL_18;
      }
      if ( (*(_DWORD *)(v15 + 244) & 1) != 0 )
      {
LABEL_18:
        HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(v7, (struct SFMLOGICALSURFACE *)v15, 0, a5 & 2, 1);
        SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v50, HLSURFClone);
        v21 = v51;
        v46 = v51;
        if ( v51 )
        {
          DWMSPRITE::SetLogicalSurface(v14, v23, 0LL);
          DWMSPRITE::SetLogicalSurface(v14, v24, v21);
        }
        else
        {
          if ( v9 )
          {
            v11 = 0;
            SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v49);
            if ( v48 )
              _InterlockedDecrement((volatile signed __int32 *)v48 + 3);
            v48 = 0LL;
            goto LABEL_42;
          }
          v46 = (struct SFMLOGICALSURFACE *)v15;
          v21 = (struct SFMLOGICALSURFACE *)v15;
          SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v15, a1, 0LL);
        }
      }
      else
      {
        v21 = (struct SFMLOGICALSURFACE *)v15;
        v46 = (struct SFMLOGICALSURFACE *)v15;
      }
      if ( v9 )
      {
        LOBYTE(v16) = 5;
        v25 = a1;
        v12 = HmgReferenceCheckLock(v9, v16, 0LL) + 24;
        SFMLOGICALSURFACE::SetShape(v21, a1, (struct _SURFOBJ *)v12);
        *((_DWORD *)v21 + 63) |= 8u;
        if ( (*(_DWORD *)(v12 + 92) & 0x800) != 0 )
        {
          v26 = *(_DWORD *)(v12 + 640);
          *((_DWORD *)v14 + 39) = *(_DWORD *)(v12 + 636);
          *((_DWORD *)v14 + 40) = v26;
          *((_DWORD *)v14 + 41) |= 0x20u;
        }
        else
        {
          *((_DWORD *)v14 + 39) = 0;
          *((_DWORD *)v14 + 40) = 0;
          *((_DWORD *)v14 + 41) &= ~0x20u;
        }
      }
      else
      {
        *((_DWORD *)v21 + 63) &= 0xFFFFFFF6;
        v25 = a1;
      }
      v27 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
      v28 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
      if ( v12 )
      {
        *((_DWORD *)v21 + 63) |= 1u;
        v29 = v28 + *((_DWORD *)v14 + 15);
        v30 = v27 + *((_DWORD *)v14 + 14);
      }
      else
      {
        v29 = *((_DWORD *)v14 + 15);
        v30 = *((_DWORD *)v14 + 14);
      }
      *((_DWORD *)v14 + 16) = v30;
      *((_DWORD *)v14 + 17) = v29;
      v31 = *((_DWORD *)v21 + 63);
      if ( (v31 & 1) != 0 && (*((_DWORD *)v14 + 41) & 0x10) == 0 && (v31 & 8) != 0 )
      {
        SFMLOGICALSURFACE::StartSfmStateTracking(v21, v25, gpSfmState);
        SFMLOGICALSURFACE::GetRedirectionInfo(v21, (enum _HLSURF_REDIRECTIONSTYLE *)&v44, &v43, &v42, 0LL, 0LL);
        v32 = *((_DWORD *)v21 + 63);
        v33 = *((_DWORD *)v14 + 41);
        v34 = *((_QWORD *)v14 + 13);
        *((_QWORD *)v14 + 13) = 0LL;
        v35 = *(_QWORD *)v21;
        v36 = v32 & 1;
        v37 = *(_QWORD *)v14;
        v38 = v32 & 0xC | v33 & 1 | (2 * (v36 | v33 & 0x40 | (4 * (v33 & 0xE))));
        v39 = *((_DWORD *)v14 + 29) >= 1;
        v40 = (void *)UserReferenceDwmApiPort(v36);
        v11 = (int)DwmAsyncUpdateSprite(v40, v37, v35, v38, (__int64)v14 + 72, (__int128 *)a4, v44, v43, v42, v39, v34) >= 0;
        *((_DWORD *)v46 + 63) &= ~8u;
      }
      if ( *((int *)v14 + 29) >= 1 )
        CheckAndProcessWindowResizeComplete(v14, 0, 0LL);
      SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v49);
      if ( v48 )
        _InterlockedDecrement((volatile signed __int32 *)v48 + 3);
    }
    v48 = 0LL;
LABEL_42:
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v47);
LABEL_43:
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v45);
    goto LABEL_45;
  }
  v11 = GdiHintSpriteShape(v7, a2, v9, 0, 0);
LABEL_45:
  if ( a7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v50);
  return v11;
}
