__int64 __fastcall GreHintSpriteShape(Gre::Base *a1, HWND a2, HBITMAP a3, __int64 a4, int a5, int a6, int a7)
{
  unsigned int v7; // r15d
  __int64 v8; // r12
  struct SFMLOGICALSURFACE *v9; // rbx
  HBITMAP v11; // r14
  struct Gre::Base::SESSION_GLOBALS *v12; // rax
  struct Gre::Base::SESSION_GLOBALS *v13; // rsi
  _QWORD *v14; // rdi
  __int64 ThreadWin32Thread; // rax
  Gre::Base *v16; // rcx
  struct Gre::Base::SESSION_GLOBALS *v17; // rbx
  HSPRITE v18; // rbx
  Gre::Base *v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rsi
  __int64 v25; // r14
  __int64 v26; // rdi
  struct SFMLOGICALSURFACE *v27; // r14
  Gre::Base *v28; // rsi
  Gre::Base *v29; // rcx
  _DWORD *v30; // rbx
  int v31; // edx
  int v32; // r8d
  int v33; // r9d
  int v34; // r8d
  SFMLOGICALSURFACE *v35; // rbx
  int v36; // eax
  Gre::Base *v37; // rcx
  SFMLOGICALSURFACE *v38; // rbx
  int v39; // eax
  struct Gre::Base::SESSION_GLOBALS *v41; // rax
  int v42; // r9d
  __int64 v43; // r12
  int v44; // r15d
  void *v45; // rax
  HLSURF HLSURFClone; // rax
  HDEV v47; // rdx
  HDEV v48; // rdx
  __int64 v49; // rax
  __int128 v50; // xmm1
  __int128 v51; // xmm0
  __int128 v52; // xmm1
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  __int128 v57; // xmm0
  __int128 v58; // xmm1
  __int128 v59; // xmm0
  __int128 v60; // xmm1
  __int128 v61; // xmm0
  __int128 v62; // xmm1
  __int64 v63; // rax
  int v64; // eax
  int v65; // xmm1_4
  struct Gre::Base::SESSION_GLOBALS *v66; // rax
  struct Gre::Base::SESSION_GLOBALS *v67; // rax
  unsigned int v68; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v69; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v70; // [rsp+70h] [rbp-98h] BYREF
  int v71; // [rsp+74h] [rbp-94h] BYREF
  __int64 v72; // [rsp+78h] [rbp-90h]
  Gre::Base *v73; // [rsp+80h] [rbp-88h]
  _QWORD *v74; // [rsp+88h] [rbp-80h]
  struct Gre::Base::SESSION_GLOBALS *v75; // [rsp+90h] [rbp-78h]
  SFMLOGICALSURFACE *v76; // [rsp+98h] [rbp-70h] BYREF
  int v77; // [rsp+A0h] [rbp-68h]
  struct SFMLOGICALSURFACE *v78; // [rsp+A8h] [rbp-60h] BYREF
  int v79; // [rsp+B0h] [rbp-58h]
  SFMLOGICALSURFACE *v80; // [rsp+B8h] [rbp-50h]
  __int128 v81; // [rsp+C0h] [rbp-48h]
  __int128 v82; // [rsp+D0h] [rbp-38h]
  __int128 v83; // [rsp+E0h] [rbp-28h]
  __int128 v84; // [rsp+F0h] [rbp-18h]
  __int128 v85; // [rsp+100h] [rbp-8h]
  __int128 v86; // [rsp+110h] [rbp+8h]
  __int128 v87; // [rsp+120h] [rbp+18h]
  __int128 v88; // [rsp+130h] [rbp+28h]
  __int64 v89; // [rsp+140h] [rbp+38h]

  LODWORD(v72) = 1;
  v7 = 0;
  v69 = 0;
  v8 = 0LL;
  v68 = 0;
  v70 = 0;
  v9 = 0LL;
  v78 = 0LL;
  v79 = 0;
  v11 = a3;
  v12 = Gre::Base::Globals(a1);
  v13 = v12;
  v75 = v12;
  v14 = (_QWORD *)((char *)v12 + 120);
  v74 = (_QWORD *)((char *)v12 + 120);
  if ( a7 )
  {
    GreAcquireSemaphore(*v14);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemGreLock", *v14, 2LL);
  }
  else
  {
    v74 = (_QWORD *)((char *)v12 + 120);
  }
  if ( a6 && (unsigned int)IsDwmActive() )
  {
    v71 = 0;
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || !*(_DWORD *)(ThreadWin32Thread + 104) && !*(_DWORD *)(ThreadWin32Thread + 108) )
    {
      v17 = Gre::Base::Globals(v16);
      GreAcquireSemaphore(*((_QWORD *)v17 + 14));
      EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v17 + 14), 5LL);
      v71 = 1;
    }
    GreAcquireSemaphore(*((_QWORD *)v13 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v13 + 9), 7LL);
    if ( !(unsigned int)IsDwmActive()
      || (LODWORD(v72) = 0, v18 = DWMSPRITEREF::hspLookupWindow(a2), Gre::Base::Globals(v19), !v18)
      || (LOBYTE(v20) = 15, v21 = HmgLock(v18, v20), (v23 = v21) == 0) )
    {
LABEL_32:
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
      GreReleaseSemaphoreInternal(*((_QWORD *)v13 + 9));
      DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v71);
      v9 = v78;
      if ( !(_DWORD)v72 )
        goto LABEL_33;
      goto LABEL_52;
    }
    v24 = *(_QWORD *)(v21 + 144);
    v80 = 0LL;
    v76 = 0LL;
    v77 = 1;
    if ( v24 )
    {
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v76, *(HLSURF *)v24);
      v80 = v76;
    }
    v25 = *(_QWORD *)(v24 + 184);
    v7 = 1;
    v26 = v23;
    if ( v25 && (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v25 - 24)) )
    {
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v25 + 248));
      if ( *(_DWORD *)(v25 + 300) )
      {
        *(_QWORD *)(v25 + 312) = a2;
        *(_QWORD *)(v25 + 320) = a3;
        *(_QWORD *)(v25 + 304) = a1;
        v49 = *(_QWORD *)(a4 + 128);
        v50 = *(_OWORD *)(a4 + 16);
        v81 = *(_OWORD *)a4;
        v51 = *(_OWORD *)(a4 + 32);
        v82 = v50;
        v52 = *(_OWORD *)(a4 + 48);
        v83 = v51;
        v53 = *(_OWORD *)(a4 + 64);
        v84 = v52;
        v54 = *(_OWORD *)(a4 + 80);
        v85 = v53;
        v55 = *(_OWORD *)(a4 + 96);
        v86 = v54;
        v87 = v55;
        v88 = *(_OWORD *)(a4 + 112);
        v89 = v49;
        v56 = v82;
        *(_OWORD *)(v25 + 328) = v81;
        v57 = v83;
        *(_OWORD *)(v25 + 344) = v56;
        v58 = v84;
        *(_OWORD *)(v25 + 360) = v57;
        v59 = v85;
        *(_OWORD *)(v25 + 376) = v58;
        v60 = v86;
        *(_OWORD *)(v25 + 392) = v59;
        v61 = v87;
        *(_OWORD *)(v25 + 408) = v60;
        v62 = v88;
        v63 = v89;
        *(_OWORD *)(v25 + 424) = v61;
        *(_OWORD *)(v25 + 440) = v62;
        *(_QWORD *)(v25 + 456) = v63;
        *(_DWORD *)(v25 + 464) = a5;
        *(_DWORD *)(v25 + 468) = a6;
        v64 = *(_DWORD *)(v25 + 88);
        if ( (v64 & 0x2000000) == 0 )
        {
          *(_DWORD *)(v25 + 88) = v64 | 0x2000000;
          _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(SGDGetSessionState(0x2000000LL) + 32) + 23656LL));
        }
        W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v25 + 248));
        SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(&v76);
        _InterlockedDecrement((volatile signed __int32 *)(v23 + 12));
        goto LABEL_30;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v25 + 248));
      v26 = v23;
    }
    if ( *(_QWORD *)(v24 + 184) || (*(_DWORD *)(v24 + 244) & 1) != 0 )
    {
      HLSURFClone = SFMLOGICALSURFACE::CreateHLSURFClone((HDEV)a1, (struct SFMLOGICALSURFACE *)v24, 0, a5 & 2, 1);
      SFMLOGICALSURFACEREF::LockLogicalSurfaceObj((SFMLOGICALSURFACEREF *)&v78, HLSURFClone);
      v27 = v78;
      if ( !v78 )
      {
        v11 = a3;
        if ( a3 )
        {
          v7 = 0;
          SFMLOGICALSURFACEREF::~SFMLOGICALSURFACEREF(&v76);
          _InterlockedDecrement((volatile signed __int32 *)(v26 + 12));
          goto LABEL_31;
        }
        v27 = (struct SFMLOGICALSURFACE *)v24;
        SFMLOGICALSURFACE::SetShape((SFMLOGICALSURFACE *)v24, (HDEV)a1, 0LL);
        v28 = (Gre::Base *)(v24 + 252);
        v29 = v28;
        v73 = v28;
        goto LABEL_19;
      }
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v26, v47, 0LL);
      DWMSPRITE::SetLogicalSurface((DWMSPRITE *)v26, v48, v27);
    }
    else
    {
      v27 = (struct SFMLOGICALSURFACE *)v24;
    }
    v28 = (struct SFMLOGICALSURFACE *)((char *)v27 + 252);
    v29 = (struct SFMLOGICALSURFACE *)((char *)v27 + 252);
    v73 = (struct SFMLOGICALSURFACE *)((char *)v27 + 252);
    if ( a3 )
    {
      LOBYTE(v22) = 5;
      v8 = HmgReferenceCheckLock(a3, v22, 0LL) + 24;
      SFMLOGICALSURFACE::SetShape(v27, (HDEV)a1, (struct _SURFOBJ *)v8);
      *(_DWORD *)v28 |= 8u;
      v30 = (_DWORD *)(v26 + 140);
      if ( (*(_DWORD *)(v8 + 92) & 0x800) != 0 )
      {
        v65 = *(_DWORD *)(v8 + 640);
        *(_DWORD *)(v26 + 132) = *(_DWORD *)(v8 + 636);
        *(_DWORD *)(v26 + 136) = v65;
        *v30 |= 0x20u;
      }
      else
      {
        *(_DWORD *)(v26 + 132) = 0;
        *(_DWORD *)(v26 + 136) = 0;
        *v30 &= ~0x20u;
      }
      v29 = (struct SFMLOGICALSURFACE *)((char *)v27 + 252);
      goto LABEL_20;
    }
LABEL_19:
    *(_DWORD *)v28 &= ~1u;
    *(_DWORD *)v29 = *(_DWORD *)v28 & 0xFFFFFFF7;
    v30 = (_DWORD *)(v23 + 140);
LABEL_20:
    v31 = *(_DWORD *)(a4 + 8) - *(_DWORD *)a4;
    v32 = *(_DWORD *)(a4 + 12) - *(_DWORD *)(a4 + 4);
    if ( v8 )
    {
      *(_DWORD *)v29 |= 1u;
      v33 = v32 + *(_DWORD *)(v26 + 60);
      v34 = v31 + *(_DWORD *)(v26 + 56);
    }
    else
    {
      v33 = *(_DWORD *)(v26 + 60);
      v34 = *(_DWORD *)(v26 + 56);
    }
    *(_DWORD *)(v26 + 64) = v34;
    *(_DWORD *)(v26 + 68) = v33;
    if ( (*(_DWORD *)v29 & 1) != 0 && (*v30 & 0x10) == 0 && (*(_DWORD *)v29 & 8) != 0 )
    {
      v41 = Gre::Base::Globals(v29);
      SFMLOGICALSURFACE::StartSfmStateTracking(v27, (HDEV)a1, *((struct SfmState **)v41 + 809), v42);
      SFMLOGICALSURFACE::GetRedirectionInfo(v27, (enum _HLSURF_REDIRECTIONSTYLE *)&v70, &v69, &v68, 0LL, 0LL);
      v43 = *(_QWORD *)(v26 + 104);
      v44 = *(_DWORD *)(v26 + 116);
      *(_QWORD *)(v26 + 104) = 0LL;
      v45 = (void *)UserReferenceDwmApiPort();
      v7 = (int)DwmAsyncUpdateSprite(v45, v26 + 72, a4, v70, v69, v68, v44 >= 1, v43) >= 0;
      *(_DWORD *)v73 &= ~8u;
    }
    if ( *(int *)(v26 + 116) >= 1 )
      CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)v26, 0, 0LL);
    if ( v80 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v80 + 3);
      if ( v77 == 1 )
      {
        v35 = v76;
        v36 = *((_DWORD *)v76 + 61);
        if ( (v36 & 0x80u) != 0 && (v36 & 8) != 0 && (v36 & 0x10) != 0 )
        {
          *((_DWORD *)v76 + 61) = v36 & 0xFFFFFFEF;
          v66 = Gre::Base::Globals(v29);
          SFMLOGICALSURFACE::StopSfmStateTracking(v35, 0LL, *((struct SfmState **)v66 + 809));
        }
        bhLSurfDestroyLogicalSurfaceObject(v35, 1);
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v26 + 12));
LABEL_30:
    v11 = a3;
LABEL_31:
    v14 = v74;
    v13 = v75;
    goto LABEL_32;
  }
LABEL_52:
  v7 = GdiHintSpriteShape((HDEV)a1, a2, v11, 0, 0);
LABEL_33:
  if ( a7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
    GreReleaseSemaphoreInternal(*v14);
  }
  if ( v9 )
  {
    _InterlockedDecrement((volatile signed __int32 *)v9 + 3);
    if ( v79 == 1 )
    {
      v38 = v78;
      v39 = *((_DWORD *)v78 + 61);
      if ( (v39 & 0x80u) != 0 && (v39 & 8) != 0 && (v39 & 0x10) != 0 )
      {
        *((_DWORD *)v78 + 61) = v39 & 0xFFFFFFEF;
        v67 = Gre::Base::Globals(v37);
        SFMLOGICALSURFACE::StopSfmStateTracking(v38, 0LL, *((struct SfmState **)v67 + 809));
      }
      bhLSurfDestroyLogicalSurfaceObject(v38, 1);
    }
  }
  return v7;
}
