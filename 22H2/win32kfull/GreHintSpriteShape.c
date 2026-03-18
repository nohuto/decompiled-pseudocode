/*
 * XREFs of GreHintSpriteShape @ 0x1C00D41D4
 * Callers:
 *     HintSpriteShape @ 0x1C00D3B40 (HintSpriteShape.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00FDE70 (-vClearRendering@DC@@QEAAXXZ.c)
 *     GreHintSpriteShapeDelayDelete @ 0x1C0267DDC (GreHintSpriteShapeDelayDelete.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C001C2F4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z @ 0x1C001D3D8 (-GdiHintSpriteShape@@YAHPEAUHDEV__@@PEAUHWND__@@PEAUHBITMAP__@@HH@Z.c)
 *     ?StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z @ 0x1C0079E0C (-StopSfmStateTracking@SFMLOGICALSURFACE@@QEAAJPEAUHDEV__@@PEAUSfmState@@@Z.c)
 *     ?CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z @ 0x1C0079F18 (-CreateHLSURFClone@SFMLOGICALSURFACE@@SAPEAUHLSURF__@@PEAUHDEV__@@PEAV1@HHH@Z.c)
 *     ?SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z @ 0x1C007B180 (-SetShape@SFMLOGICALSURFACE@@QEAAHPEAUHDEV__@@PEAU_SURFOBJ@@@Z.c)
 *     ?SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z @ 0x1C007C700 (-SetLogicalSurface@DWMSPRITE@@QEAAXPEAUHDEV__@@PEAVSFMLOGICALSURFACE@@@Z.c)
 *     ??1SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C007C7E0 (--1SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z @ 0x1C00AD880 (-StartSfmStateTracking@SFMLOGICALSURFACE@@QEAAXPEAUHDEV__@@PEAUSfmState@@H@Z.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C00B0400 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ?hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z @ 0x1C00D4D80 (-hspLookupWindow@DWMSPRITEREF@@SAPEAUHSPRITE__@@PEAUHWND__@@@Z.c)
 *     ?bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z @ 0x1C00D5374 (-bhLSurfDestroyLogicalSurfaceObject@@YAHPEAVSFMLOGICALSURFACE@@H@Z.c)
 *     ?LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z @ 0x1C00D5418 (-LockLogicalSurfaceObj@SFMLOGICALSURFACEREF@@AEAAXPEAUHLSURF__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00D544C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     DwmAsyncUpdateSprite @ 0x1C00D5BA0 (DwmAsyncUpdateSprite.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C013E508 (--0-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ??0SFMLOGICALSURFACEREF@@QEAA@XZ @ 0x1C02656B0 (--0SFMLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C0265774 (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreHintSpriteShape(HDEV a1, HWND a2, HBITMAP a3, __int64 a4, int a5, int a6, int a7)
{
  unsigned int v7; // r12d
  _DWORD *v8; // rsi
  HBITMAP v10; // r15
  HWND v11; // rbx
  Gre::Base *v12; // rcx
  struct Gre::Base::SESSION_GLOBALS *v13; // rax
  struct Gre::Base::SESSION_GLOBALS *v14; // rdi
  _QWORD *v15; // r14
  __int64 ThreadWin32Thread; // rax
  Gre::Base *v17; // rcx
  struct Gre::Base::SESSION_GLOBALS *v18; // rbx
  HSPRITE v19; // rbx
  Gre::Base *v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r12
  __int64 v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rdi
  __int64 v26; // rax
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rax
  int v41; // eax
  struct SFMLOGICALSURFACE *v42; // rdi
  HLSURF HLSURFClone; // rax
  HDEV v44; // rdx
  HDEV v45; // rdx
  unsigned int *v46; // rbx
  unsigned int *v47; // r14
  __int64 v48; // rax
  HDEV v49; // r15
  int v50; // xmm1_4
  int v51; // ecx
  int v52; // edx
  int v53; // r8d
  int v54; // edx
  Gre::Base *v55; // rcx
  struct Gre::Base::SESSION_GLOBALS *v56; // rax
  unsigned int v57; // edx
  __int64 v58; // r15
  int v59; // r14d
  void *v60; // rax
  SFMLOGICALSURFACE *v61; // rcx
  int v62; // eax
  struct Gre::Base::SESSION_GLOBALS *v63; // rax
  struct Gre::Base::SESSION_GLOBALS *v64; // rbx
  struct SFMLOGICALSURFACE *v65; // rcx
  int v66; // eax
  struct Gre::Base::SESSION_GLOBALS *v67; // rax
  BOOL v69; // [rsp+68h] [rbp-A0h]
  unsigned int v70; // [rsp+6Ch] [rbp-9Ch] BYREF
  unsigned int v71; // [rsp+70h] [rbp-98h] BYREF
  int v72; // [rsp+74h] [rbp-94h] BYREF
  int v73; // [rsp+78h] [rbp-90h] BYREF
  int v74; // [rsp+7Ch] [rbp-8Ch]
  unsigned int *v75; // [rsp+80h] [rbp-88h]
  _QWORD *v76; // [rsp+88h] [rbp-80h]
  _BYTE v77[32]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v78; // [rsp+B0h] [rbp-58h]
  struct Gre::Base::SESSION_GLOBALS *v79; // [rsp+B8h] [rbp-50h]
  _BYTE v80[32]; // [rsp+C0h] [rbp-48h] BYREF
  SFMLOGICALSURFACE *v81; // [rsp+E0h] [rbp-28h]
  int v82; // [rsp+E8h] [rbp-20h]
  _BYTE v83[32]; // [rsp+F0h] [rbp-18h] BYREF
  struct SFMLOGICALSURFACE *v84; // [rsp+110h] [rbp+8h]
  int v85; // [rsp+118h] [rbp+10h]
  __int128 v86; // [rsp+120h] [rbp+18h]
  __int128 v87; // [rsp+130h] [rbp+28h]
  __int128 v88; // [rsp+140h] [rbp+38h]
  __int128 v89; // [rsp+150h] [rbp+48h]
  __int128 v90; // [rsp+160h] [rbp+58h]
  __int128 v91; // [rsp+170h] [rbp+68h]
  __int128 v92; // [rsp+180h] [rbp+78h]
  __int128 v93; // [rsp+190h] [rbp+88h]
  __int64 v94; // [rsp+1A0h] [rbp+98h]

  v74 = 1;
  v69 = 0;
  v7 = 0;
  v71 = 0;
  v8 = 0LL;
  v70 = 0;
  v72 = 0;
  v10 = a3;
  v11 = a2;
  SFMLOGICALSURFACEREF::SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v83);
  v13 = Gre::Base::Globals(v12);
  v14 = v13;
  v79 = v13;
  v15 = (_QWORD *)((char *)v13 + 120);
  v76 = (_QWORD *)((char *)v13 + 120);
  if ( a7 )
  {
    GreAcquireSemaphore(*v15);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *v15, 2LL);
  }
  else
  {
    v76 = (_QWORD *)((char *)v13 + 120);
  }
  if ( !a6 || !(unsigned int)IsDwmActive() )
    goto LABEL_64;
  v73 = 0;
  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
  {
    v18 = Gre::Base::Globals(v17);
    GreAcquireSemaphore(*((_QWORD *)v18 + 14));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v18 + 14), 5LL);
    v11 = a2;
    v73 = 1;
  }
  GreAcquireSemaphore(*((_QWORD *)v14 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v14 + 9), 7LL);
  if ( (unsigned int)IsDwmActive() )
  {
    v74 = 0;
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v77);
    v78 = 0LL;
    v19 = DWMSPRITEREF::hspLookupWindow(v11);
    Gre::Base::Globals(v20);
    if ( v19 )
    {
      LOBYTE(v21) = 15;
      v22 = HmgLock(v19, v21);
      v78 = v22;
    }
    else
    {
      v22 = v78;
    }
    if ( !v22 )
    {
LABEL_60:
      v78 = 0LL;
LABEL_61:
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v77);
      v7 = v69;
      goto LABEL_62;
    }
    v23 = *(_QWORD *)(v22 + 144);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v80);
    v81 = 0LL;
    v82 = 1;
    if ( v23 )
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v80, *(HLSURF *)v23);
    v25 = *(_QWORD *)(v23 + 184);
    v69 = 1;
    if ( v25 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v25 - 24)) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v25 + 248));
      if ( *(_DWORD *)(v25 + 300) )
      {
        *(_QWORD *)(v25 + 312) = a2;
        *(_QWORD *)(v25 + 320) = a3;
        *(_QWORD *)(v25 + 304) = a1;
        v26 = *(_QWORD *)(a4 + 128);
        v27 = *(_OWORD *)(a4 + 16);
        v86 = *(_OWORD *)a4;
        v28 = *(_OWORD *)(a4 + 32);
        v87 = v27;
        v29 = *(_OWORD *)(a4 + 48);
        v88 = v28;
        v30 = *(_OWORD *)(a4 + 64);
        v89 = v29;
        v31 = *(_OWORD *)(a4 + 80);
        v90 = v30;
        v32 = *(_OWORD *)(a4 + 96);
        v91 = v31;
        v92 = v32;
        v93 = *(_OWORD *)(a4 + 112);
        v94 = v26;
        v33 = v87;
        *(_OWORD *)(v25 + 328) = v86;
        v34 = v88;
        *(_OWORD *)(v25 + 344) = v33;
        v35 = v89;
        *(_OWORD *)(v25 + 360) = v34;
        v36 = v90;
        *(_OWORD *)(v25 + 376) = v35;
        v37 = v91;
        *(_OWORD *)(v25 + 392) = v36;
        v38 = v92;
        *(_OWORD *)(v25 + 408) = v37;
        v39 = v93;
        v40 = v94;
        *(_OWORD *)(v25 + 424) = v38;
        *(_OWORD *)(v25 + 440) = v39;
        *(_QWORD *)(v25 + 456) = v40;
        *(_DWORD *)(v25 + 464) = a5;
        *(_DWORD *)(v25 + 468) = a6;
        v41 = *(_DWORD *)(v25 + 88);
        if ( (v41 & 0x2000000) == 0 )
        {
          *(_DWORD *)(v25 + 88) = v41 | 0x2000000;
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(0x2000000LL) + 32) + 23656LL));
        }
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v25 + 248));
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v80);
        if ( v78 )
          _InterlockedDecrement((volatile signed __int32 *)(v78 + 12));
        v78 = 0LL;
        goto LABEL_61;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v25 + 248));
      v10 = a3;
    }
    if ( *(_QWORD *)(v23 + 184) || (*(_DWORD *)(v23 + 244) & 1) != 0 )
    {
      HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone(a1, (struct SFMLOGICALSURFACE *)v23, 0, a5 & 2, 1);
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)v83, HLSURFClone);
      v42 = v84;
      if ( !v84 )
      {
        if ( v10 )
        {
          v7 = 0;
          SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF((SFMLOGICALSURFACEREF *)v80);
          if ( v78 )
            _InterlockedDecrement((volatile signed __int32 *)(v78 + 12));
          v78 = 0LL;
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v77);
          goto LABEL_62;
        }
        v49 = a1;
        v42 = (struct SFMLOGICALSURFACE *)v23;
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v23, a1, 0LL);
        v46 = (unsigned int *)(v23 + 252);
        v47 = v46;
        v75 = v46;
        goto LABEL_41;
      }
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v22, v44, 0LL);
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v22, v45, v42);
    }
    else
    {
      v42 = (struct SFMLOGICALSURFACE *)v23;
    }
    v46 = (unsigned int *)((char *)v42 + 252);
    v75 = (unsigned int *)((char *)v42 + 252);
    v47 = (unsigned int *)((char *)v42 + 252);
    if ( v10 )
    {
      LOBYTE(v24) = 5;
      v48 = HmgReferenceCheckLock(v10, v24, 0LL);
      v49 = a1;
      v8 = (_DWORD *)(v48 + 24);
      SFMLOGICALSURFACE::SetShape(v42, a1, (struct _SURFOBJ *)(v48 + 24));
      *v46 |= 8u;
      if ( (v8[23] & 0x800) != 0 )
      {
        v50 = v8[160];
        *(_DWORD *)(v22 + 132) = v8[159];
        *(_DWORD *)(v22 + 136) = v50;
        *(_DWORD *)(v22 + 140) |= 0x20u;
      }
      else
      {
        *(_DWORD *)(v22 + 132) = 0;
        *(_DWORD *)(v22 + 136) = 0;
        *(_DWORD *)(v22 + 140) &= ~0x20u;
      }
LABEL_42:
      v51 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
      v52 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
      if ( v8 )
      {
        *v47 |= 1u;
        v53 = v52 + *(_DWORD *)(v22 + 60);
        v54 = v51 + *(_DWORD *)(v22 + 56);
      }
      else
      {
        v53 = *(_DWORD *)(v22 + 60);
        v54 = *(_DWORD *)(v22 + 56);
      }
      *(_DWORD *)(v22 + 64) = v54;
      *(_DWORD *)(v22 + 68) = v53;
      v55 = (Gre::Base *)*v47;
      if ( ((unsigned __int8)v55 & 1) != 0 && (*(_DWORD *)(v22 + 140) & 0x10) == 0 && ((unsigned __int8)v55 & 8) != 0 )
      {
        v56 = Gre::Base::Globals(v55);
        SFMLOGICALSURFACE::StartSfmStateTracking(v42, v49, *((struct SfmState **)v56 + 809));
        SFMLOGICALSURFACE::GetRedirectionInfo(v42, (enum _HLSURF_REDIRECTIONSTYLE *)&v72, &v71, &v70, 0LL, 0LL);
        v57 = *v47;
        v58 = *(_QWORD *)(v22 + 104);
        v59 = *(_DWORD *)(v22 + 116);
        *(_QWORD *)(v22 + 104) = 0LL;
        v60 = (void *)UserReferenceDwmApiPort(v57 & 1);
        v69 = (int)DwmAsyncUpdateSprite(v60, v22 + 72, a4, v72, v71, v70, v59 >= 1, v58) >= 0;
        *v75 &= ~8u;
      }
      if ( *(int *)(v22 + 116) >= 1 )
        CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)v22, 0, 0LL);
      if ( v81 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v81 + 3);
        if ( v82 == 1 )
        {
          v61 = v81;
          v62 = *((_DWORD *)v81 + 61);
          if ( (v62 & 0x80u) != 0 && (v62 & 8) != 0 && (v62 & 0x10) != 0 )
          {
            *((_DWORD *)v81 + 61) = v62 & 0xFFFFFFEF;
            v63 = Gre::Base::Globals(v61);
            SFMLOGICALSURFACE::StopSfmStateTracking(v81, 0LL, *((struct SfmState **)v63 + 809));
            v61 = v81;
          }
          bhLSurfDestroyLogicalSurfaceObject(v61, 1);
        }
      }
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v80);
      v15 = v76;
      if ( v78 )
        _InterlockedDecrement((volatile signed __int32 *)(v78 + 12));
      goto LABEL_60;
    }
    v49 = a1;
LABEL_41:
    *v46 &= ~1u;
    *v47 = *v46 & 0xFFFFFFF7;
    goto LABEL_42;
  }
LABEL_62:
  v64 = v79;
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v64 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v73);
  if ( !v74 )
    goto LABEL_65;
  v10 = a3;
  v11 = a2;
LABEL_64:
  v7 = GdiHintSpriteShape(a1, v11, v10, 0, 0);
LABEL_65:
  if ( a7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
    GreReleaseSemaphoreInternal(*v15);
  }
  if ( v84 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v84 + 3);
    if ( v85 == 1 )
    {
      v65 = v84;
      v66 = *((_DWORD *)v84 + 61);
      if ( (v66 & 0x80u) != 0 && (v66 & 8) != 0 && (v66 & 0x10) != 0 )
      {
        *((_DWORD *)v84 + 61) = v66 & 0xFFFFFFEF;
        v67 = Gre::Base::Globals(v65);
        SFMLOGICALSURFACE::StopSfmStateTracking(v84, 0LL, *((struct SfmState **)v67 + 809));
        v65 = v84;
      }
      bhLSurfDestroyLogicalSurfaceObject(v65, 1);
    }
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v83);
  return v7;
}
