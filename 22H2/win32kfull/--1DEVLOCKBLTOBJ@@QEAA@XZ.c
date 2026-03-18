/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C00F8B40
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     GreMaskBlt @ 0x1C001C9BC (GreMaskBlt.c)
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     GrePlgBlt @ 0x1C0290EF0 (GrePlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C0297970 (NtGdiTransparentBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C029A2A0 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D14 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreDereferenceObject @ 0x1C002D3F8 (GreDereferenceObject.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C009E958 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00DCB64 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00F7234 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C00FA7C0 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00FDE70 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0107D28 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C011B310 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C011C01C (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C011C0E4 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ??0?$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ @ 0x1C013DFC4 (--0-$UnexpectedThreadTerminationHandler@VSURFREF@@@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EAC8 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C013EB4C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C0264DB0 (--0SURFREF@@QEAA@XZ.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026BA54 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A3300 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A66FC (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this, __int64 a2, struct DC *a3)
{
  int v3; // eax
  struct XDCOBJ *v5; // rbx
  int v6; // eax
  SURFACE *v7; // rcx
  struct DC *v8; // rcx
  int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rsi
  DC **v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 CurrentProcess; // rax
  DC **v24; // rsi
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 *v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rsi
  __int64 *ThreadWin32Thread; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  HSURF v44; // rbx
  Gre::Base *v45; // rcx
  struct Gre::Base::SESSION_GLOBALS *v46; // rbx
  char v47; // si
  __int64 v48; // rcx
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  HSURF v56; // rbx
  Gre::Base *v57; // rcx
  struct Gre::Base::SESSION_GLOBALS *v58; // rbx
  char v59; // si
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  char *v64; // rbx
  __int64 v65; // rax
  __int64 *v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rsi
  __int64 v69; // rax
  __int64 v70; // rax
  __int64 *v71; // rcx
  __int64 v72; // rdx
  __int64 v73; // rsi
  signed __int32 v74[8]; // [rsp+0h] [rbp-100h] BYREF
  int v75; // [rsp+20h] [rbp-E0h]
  DC *v76[2]; // [rsp+30h] [rbp-D0h] BYREF
  char v77[32]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v78[32]; // [rsp+60h] [rbp-A0h] BYREF
  HSURF *v79; // [rsp+80h] [rbp-80h]
  DC *v80[2]; // [rsp+88h] [rbp-78h] BYREF
  char v81[32]; // [rsp+98h] [rbp-68h] BYREF
  _BYTE v82[32]; // [rsp+B8h] [rbp-48h] BYREF
  HSURF *v83; // [rsp+D8h] [rbp-28h]
  _BYTE v84[32]; // [rsp+E0h] [rbp-20h] BYREF
  struct SURFACE *v85; // [rsp+100h] [rbp+0h]
  _BYTE v86[32]; // [rsp+108h] [rbp+8h] BYREF
  struct SURFACE *v87; // [rsp+128h] [rbp+28h]
  int v88; // [rsp+170h] [rbp+70h] BYREF
  int v89; // [rsp+178h] [rbp+78h] BYREF
  int v90; // [rsp+180h] [rbp+80h] BYREF
  int v91; // [rsp+188h] [rbp+88h] BYREF

  v3 = *((_DWORD *)this + 28);
  if ( (v3 & 0x1000) != 0 )
  {
    if ( (v3 & 0x8000) != 0 )
    {
      v5 = (DEVLOCKBLTOBJ *)((char *)this + 120);
      if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 169) )
        DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
      _InterlockedOr(v74, 0);
      if ( *((_QWORD *)this + 22) && *((_BYTE *)this + 225) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
    else
    {
      if ( *((_QWORD *)this + 22) && *((_BYTE *)this + 225) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
      _InterlockedOr(v74, 0);
      v5 = (DEVLOCKBLTOBJ *)((char *)this + 120);
      if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 169) )
      {
        v6 = *((_DWORD *)this + 28);
        if ( (v6 & 0x400) != 0 )
        {
          bUnHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120));
          *((_DWORD *)this + 28) &= ~0x400u;
          v6 = *((_DWORD *)this + 28);
        }
        if ( (v6 & 0x2000) != 0 )
        {
          bUnHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120));
          *((_DWORD *)this + 28) &= ~0x2000u;
          v6 = *((_DWORD *)this + 28);
        }
        if ( (v6 & 0x1000) != 0 )
        {
          a3 = *(struct DC **)v5;
          if ( (*(_DWORD *)(*(_QWORD *)v5 + 44LL) & 1) == 0 )
          {
            v7 = (SURFACE *)*((_QWORD *)a3 + 62);
            if ( v7 )
              SURFACE::bUnMap(v7, this, a3);
          }
          *(_DWORD *)(*(_QWORD *)v5 + 44LL) &= ~1u;
        }
      }
    }
    v8 = *(struct DC **)v5;
    if ( *(_QWORD *)v5 )
    {
      if ( *((_BYTE *)v5 + 49) )
      {
        v9 = *((_DWORD *)this + 28);
        if ( (v9 & 0x1000) != 0 && (*((_DWORD *)v8 + 9) & 0x4000) != 0 && *((_QWORD *)v8 + 59) && *((_DWORD *)v8 + 122) )
          GreUpdateSpriteDevLockEnd(v5, v9 & 0x400000);
      }
    }
  }
  if ( *((_QWORD *)this + 5) )
  {
    if ( *((_DWORD *)this + 22) )
    {
      PopThreadGuardedObject((char *)this + 56);
      *((_DWORD *)this + 22) = 0;
    }
    DEVLOCKBLTOBJ::TmpSrcCleanup(this);
  }
  v10 = *((_DWORD *)this + 28);
  if ( (v10 & 0x1000) != 0 )
  {
    if ( (v10 & 0x8000) != 0 )
    {
      v11 = *((_QWORD *)this + 15);
      if ( v11 && *((_BYTE *)this + 169) )
      {
        v12 = *(_QWORD *)(v11 + 48);
        if ( (v10 & 0x10) != 0 )
        {
          *(_DWORD *)(v11 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 15), *(struct SURFACE **)(v12 + 2528));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 120));
        v13 = *((_QWORD *)this + 15);
        if ( v13 && *((_BYTE *)this + 168) )
        {
          *(_DWORD *)(v13 + 40) &= ~2u;
          *((_BYTE *)this + 168) = 0;
        }
        v14 = *((_QWORD *)this + 15);
        if ( v14 )
        {
          if ( *((_DWORD *)this + 32) && (*(_DWORD *)(v14 + 44) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120));
            *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) &= ~2u;
            *((_DWORD *)this + 32) = 0;
          }
          v15 = (__int64 *)*((_QWORD *)this + 15);
          v16 = *((unsigned int *)this + 33);
          v89 = 0;
          v17 = *v15;
          HmgDecrementExclusiveReferenceCountEx(v15, v16, &v89);
          if ( v89 )
            GrepDeleteDC(v17, 0x2000000LL);
        }
        *((_QWORD *)this + 15) = 0LL;
      }
      _InterlockedOr(v74, 0);
      v18 = (DC **)((char *)this + 176);
      v19 = *((_QWORD *)this + 22);
      if ( v19 && *((_BYTE *)this + 225) )
      {
        v20 = *(_QWORD *)(v19 + 48);
        if ( (*((_DWORD *)this + 28) & 0x20) != 0 )
        {
          *(_DWORD *)(v19 + 36) &= ~0x4000u;
          DC::pSurface(*v18, *(struct SURFACE **)(v20 + 2528));
        }
        v21 = *((_QWORD *)this + 29);
        if ( v21 )
        {
          v22 = *(_QWORD *)(v21 + 72);
          CurrentProcess = PsGetCurrentProcess(v19, v20, a3);
          MmUnmapViewOfSection(CurrentProcess, v22);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 176));
        DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 176));
        *v18 = 0LL;
      }
      *((_DWORD *)this + 28) &= ~0x8000u;
    }
    else
    {
      v24 = (DC **)((char *)this + 176);
      v25 = *((_QWORD *)this + 22);
      if ( v25 && *((_BYTE *)this + 225) )
      {
        v26 = *(_QWORD *)(v25 + 48);
        if ( (v10 & 0x20) != 0 )
        {
          *(_DWORD *)(v25 + 36) &= ~0x4000u;
          DC::pSurface(*v24, *(struct SURFACE **)(v26 + 2528));
        }
        v27 = *((_QWORD *)this + 29);
        if ( v27 )
        {
          v28 = *(_QWORD *)(v27 + 72);
          v29 = PsGetCurrentProcess(v25, v26, a3);
          MmUnmapViewOfSection(v29, v28);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 176));
        DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 176));
        *v24 = 0LL;
      }
      _InterlockedOr(v74, 0);
      v30 = *((_QWORD *)this + 15);
      if ( v30 && *((_BYTE *)this + 169) )
      {
        v31 = *(_QWORD *)(v30 + 48);
        if ( (*((_DWORD *)this + 28) & 0x10) != 0 )
        {
          *(_DWORD *)(v30 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 15), *(struct SURFACE **)(v31 + 2528));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 120));
        v32 = *((_QWORD *)this + 15);
        if ( v32 && *((_BYTE *)this + 168) )
        {
          *(_DWORD *)(v32 + 40) &= ~2u;
          *((_BYTE *)this + 168) = 0;
        }
        v33 = *((_QWORD *)this + 15);
        if ( v33 )
        {
          if ( *((_DWORD *)this + 32) && (*(_DWORD *)(v33 + 44) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120));
            *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) &= ~2u;
            *((_DWORD *)this + 32) = 0;
          }
          v34 = (__int64 *)*((_QWORD *)this + 15);
          v35 = *((unsigned int *)this + 33);
          v88 = 0;
          v36 = *v34;
          HmgDecrementExclusiveReferenceCountEx(v34, v35, &v88);
          if ( v88 )
            GrepDeleteDC(v36, 0x2000000LL);
        }
        *((_QWORD *)this + 15) = 0LL;
      }
    }
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x1000u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v38 = *ThreadWin32Thread;
      if ( v38 )
      {
        *(_QWORD *)(v38 + 320) = 0LL;
        *(_QWORD *)(v38 + 312) = 0LL;
      }
    }
  }
  else if ( (v10 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  if ( *((_QWORD *)this + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  v39 = *((_DWORD *)this + 28);
  if ( (v39 & 8) != 0 )
    *((_DWORD *)this + 28) = v39 & 0xFFFFFFF7;
  if ( *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 31) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v76, *((HDC *)this + 32));
    UnexpectedThreadTerminationHandler<SURFREF>::UnexpectedThreadTerminationHandler<SURFREF>(v78);
    v79 = 0LL;
    SURFREF::SURFREF((SURFREF *)v84);
    LOBYTE(v40) = 5;
    v41 = HmgShareLock(*((_QWORD *)this + 30), v40);
    v42 = *((_QWORD *)this + 31);
    LOBYTE(v43) = 5;
    v79 = (HSURF *)v41;
    v85 = (struct SURFACE *)HmgShareLock(v42, v43);
    v44 = *v79;
    DC::pSurface(v76[0], v85);
    DEC_SHARE_REF_CNT(v79);
    v79 = 0LL;
    DEC_SHARE_REF_CNT(v85);
    v85 = 0LL;
    GreDereferenceObject(v44, 1u);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
    if ( this != (DEVLOCKBLTOBJ *)-116LL )
    {
      v45 = v76[0];
      *((_DWORD *)v76[0] + 9) |= *((_DWORD *)this + 29);
    }
    v46 = Gre::Base::Globals(v45);
    if ( (*((_DWORD *)v76[0] + 9) & 0x200) != 0 )
    {
      v47 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v46 + 15)) )
      {
        GreAcquireSemaphoreSharedInternal(*((_QWORD *)v46 + 15));
        EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v46 + 15));
        v47 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v88);
      v48 = *((_QWORD *)this + 31);
      LOBYTE(v75) = 5;
      v49 = HmgShareUnlockRemoveObject(v48, 0LL, 0LL, 0LL, v75);
      if ( v49 )
        SURFACE::bDeleteSurface(v49, 0LL, 1LL);
      *((_QWORD *)v76[0] + 63) = 0LL;
      DC::vClearRendering(v76[0]);
      *((_QWORD *)this + 31) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v88);
      if ( v47 )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
        GreReleaseSemaphoreInternal(*((_QWORD *)v46 + 15));
      }
    }
    else
    {
      v50 = *((_QWORD *)this + 31);
      LOBYTE(v75) = 5;
      v51 = HmgShareUnlockRemoveObject(v50, 0LL, 0LL, 0LL, v75);
      if ( v51 )
        SURFACE::bDeleteSurface(v51, 0LL, 1LL);
      *((_QWORD *)v76[0] + 63) = 0LL;
      *((_QWORD *)this + 31) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v46 + 10));
    if ( v85 )
      DEC_SHARE_REF_CNT(v85);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v84);
    if ( v79 )
      DEC_SHARE_REF_CNT(v79);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v78);
    if ( v76[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v76);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v77);
  }
  if ( *((_QWORD *)this + 34) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v80, *((HDC *)this + 35));
    SURFREF::SURFREF((SURFREF *)v82);
    SURFREF::SURFREF((SURFREF *)v86);
    LOBYTE(v52) = 5;
    v53 = HmgShareLock(*((_QWORD *)this + 33), v52);
    v54 = *((_QWORD *)this + 34);
    LOBYTE(v55) = 5;
    v83 = (HSURF *)v53;
    v87 = (struct SURFACE *)HmgShareLock(v54, v55);
    v56 = *v83;
    DC::pSurface(v80[0], v87);
    DEC_SHARE_REF_CNT(v83);
    v83 = 0LL;
    DEC_SHARE_REF_CNT(v87);
    v87 = 0LL;
    GreDereferenceObject(v56, 1u);
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    v58 = Gre::Base::Globals(v57);
    if ( (*((_DWORD *)v80[0] + 9) & 0x200) != 0 )
    {
      v59 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v58 + 15)) )
      {
        GreAcquireSemaphoreSharedInternal(*((_QWORD *)v58 + 15));
        EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v58 + 15));
        v59 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v88);
      v60 = *((_QWORD *)this + 34);
      LOBYTE(v75) = 5;
      v61 = HmgShareUnlockRemoveObject(v60, 0LL, 0LL, 0LL, v75);
      if ( v61 )
        SURFACE::bDeleteSurface(v61, 0LL, 1LL);
      *((_QWORD *)v80[0] + 63) = 0LL;
      DC::vClearRendering(v80[0]);
      *((_QWORD *)this + 34) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v88);
      if ( v59 )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
        GreReleaseSemaphoreInternal(*((_QWORD *)v58 + 15));
      }
    }
    else
    {
      v62 = *((_QWORD *)this + 34);
      LOBYTE(v75) = 5;
      v63 = HmgShareUnlockRemoveObject(v62, 0LL, 0LL, 0LL, v75);
      if ( v63 )
        SURFACE::bDeleteSurface(v63, 0LL, 1LL);
      *((_QWORD *)v80[0] + 63) = 0LL;
      *((_QWORD *)this + 34) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v58 + 10));
    if ( v87 )
      DEC_SHARE_REF_CNT(v87);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v86);
    if ( v83 )
      DEC_SHARE_REF_CNT(v83);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v82);
    if ( v80[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v80);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v81);
  }
  v64 = (char *)this + 176;
  v65 = *((_QWORD *)this + 22);
  if ( v65 )
  {
    if ( *((_BYTE *)this + 224) )
    {
      *(_DWORD *)(v65 + 40) &= ~2u;
      *((_BYTE *)this + 224) = 0;
    }
    if ( *(_QWORD *)v64 )
    {
      if ( *((_DWORD *)this + 46) && (*(_DWORD *)(*(_QWORD *)v64 + 44LL) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 176));
        *(_DWORD *)(*(_QWORD *)v64 + 44LL) &= ~2u;
        *((_DWORD *)this + 46) = 0;
      }
      v66 = *(__int64 **)v64;
      v67 = *((unsigned int *)this + 47);
      v90 = 0;
      v68 = *v66;
      HmgDecrementExclusiveReferenceCountEx(v66, v67, &v90);
      if ( v90 )
        GrepDeleteDC(v68, 0x2000000LL);
    }
    *(_QWORD *)v64 = 0LL;
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 192);
  v69 = *((_QWORD *)this + 15);
  if ( v69 )
  {
    if ( *((_BYTE *)this + 168) )
    {
      *(_DWORD *)(v69 + 40) &= ~2u;
      *((_BYTE *)this + 168) = 0;
    }
    v70 = *((_QWORD *)this + 15);
    if ( v70 )
    {
      if ( *((_DWORD *)this + 32) && (*(_DWORD *)(v70 + 44) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120));
        *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) &= ~2u;
        *((_DWORD *)this + 32) = 0;
      }
      v71 = (__int64 *)*((_QWORD *)this + 15);
      v72 = *((unsigned int *)this + 33);
      v91 = 0;
      v73 = *v71;
      HmgDecrementExclusiveReferenceCountEx(v71, v72, &v91);
      if ( v91 )
        GrepDeleteDC(v73, 0x2000000LL);
    }
    *((_QWORD *)this + 15) = 0LL;
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 136);
  if ( *((_DWORD *)this + 22) )
  {
    PopThreadGuardedObject((char *)this + 56);
    *((_DWORD *)this + 22) = 0;
  }
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
