/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C0051480
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C007F6E8 (GreMaskBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0083DC0 (NtGdiAlphaBlend.c)
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C029A1B0 (NtGdiTransparentBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C029CA5C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreDereferenceObject @ 0x1C00447CC (GreDereferenceObject.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C004DD9C (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?RestoreAttributesHelper@XDCOBJ@@AEAAXXZ @ 0x1C0050D28 (-RestoreAttributesHelper@XDCOBJ@@AEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0052680 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0055220 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00589A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00D50B8 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F7D4 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F858 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C026E504 (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A5A50 (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A8DD8 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
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
  DC **v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 *v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi
  __int64 *ThreadWin32Thread; // rax
  __int64 v21; // rax
  int v22; // eax
  char *v23; // rbx
  __int64 v24; // rax
  __int64 *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rdi
  DC **v36; // rdi
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 *v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rdx
  __int64 v43; // rbx
  __int64 v44; // rdx
  __int64 v45; // rbx
  __int64 v46; // rbx
  __int64 CurrentProcess; // rax
  __int64 v48; // rbx
  __int64 v49; // rax
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 *v53; // rdi
  struct SURFACE *v54; // rax
  __int64 v55; // r14
  struct SURFACE *v56; // rbx
  Gre::Base *v57; // rcx
  struct Gre::Base::SESSION_GLOBALS *v58; // rbx
  char v59; // di
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rax
  __int64 v64; // rdx
  __int64 v65; // rax
  __int64 v66; // rdx
  __int64 *v67; // rdi
  struct SURFACE *v68; // rax
  __int64 v69; // r14
  struct SURFACE *v70; // rbx
  Gre::Base *v71; // rcx
  struct Gre::Base::SESSION_GLOBALS *v72; // rbx
  char v73; // di
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rax
  signed __int32 v78[8]; // [rsp+0h] [rbp-78h] BYREF
  int v79; // [rsp+20h] [rbp-58h]
  DC *v80[2]; // [rsp+30h] [rbp-48h] BYREF
  DC *v81[3]; // [rsp+40h] [rbp-38h] BYREF
  int v82; // [rsp+A0h] [rbp+28h] BYREF
  int v83; // [rsp+A8h] [rbp+30h] BYREF
  int v84; // [rsp+B0h] [rbp+38h] BYREF
  int v85; // [rsp+B8h] [rbp+40h] BYREF

  v3 = *((_DWORD *)this + 28);
  if ( (v3 & 0x1000) != 0 )
  {
    if ( (v3 & 0x8000) != 0 )
    {
      v5 = (DEVLOCKBLTOBJ *)((char *)this + 120);
      if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 137) )
        DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
      _InterlockedOr(v78, 0);
      if ( *((_QWORD *)this + 18) && *((_BYTE *)this + 161) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
    else
    {
      if ( *((_QWORD *)this + 18) && *((_BYTE *)this + 161) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
      _InterlockedOr(v78, 0);
      v5 = (DEVLOCKBLTOBJ *)((char *)this + 120);
      if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 137) )
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
      if ( *((_BYTE *)v5 + 17) )
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
      v29 = *((_QWORD *)this + 15);
      if ( v29 && *((_BYTE *)this + 137) )
      {
        v30 = *(_QWORD *)(v29 + 48);
        if ( (v10 & 0x10) != 0 )
        {
          *(_DWORD *)(v29 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 15), *(struct SURFACE **)(v30 + 2528));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 120));
        v31 = *((_QWORD *)this + 15);
        if ( v31 && *((_BYTE *)this + 136) )
        {
          *(_DWORD *)(v31 + 40) &= ~2u;
          *((_BYTE *)this + 136) = 0;
        }
        v32 = *((_QWORD *)this + 15);
        if ( v32 )
        {
          if ( *((_DWORD *)this + 32) && (*(_DWORD *)(v32 + 44) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120));
            *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) &= ~2u;
            *((_DWORD *)this + 32) = 0;
          }
          v33 = (__int64 *)*((_QWORD *)this + 15);
          v34 = *((unsigned int *)this + 33);
          v83 = 0;
          v35 = *v33;
          HmgDecrementExclusiveReferenceCountEx(v33, v34, &v83);
          if ( v83 )
            GrepDeleteDC(v35, 0x2000000LL);
        }
        *((_QWORD *)this + 15) = 0LL;
      }
      _InterlockedOr(v78, 0);
      v36 = (DC **)((char *)this + 144);
      v37 = *((_QWORD *)this + 18);
      if ( v37 && *((_BYTE *)this + 161) )
      {
        v44 = *(_QWORD *)(v37 + 48);
        if ( (*((_DWORD *)this + 28) & 0x20) != 0 )
        {
          *(_DWORD *)(v37 + 36) &= ~0x4000u;
          DC::pSurface(*v36, *(struct SURFACE **)(v44 + 2528));
        }
        v45 = *((_QWORD *)this + 21);
        if ( v45 )
        {
          v46 = *(_QWORD *)(v45 + 72);
          CurrentProcess = PsGetCurrentProcess(v37, v44, a3);
          MmUnmapViewOfSection(CurrentProcess, v46);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 144));
        DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 144));
        *v36 = 0LL;
      }
      *((_DWORD *)this + 28) &= ~0x8000u;
    }
    else
    {
      v11 = (DC **)((char *)this + 144);
      v12 = *((_QWORD *)this + 18);
      if ( v12 && *((_BYTE *)this + 161) )
      {
        v42 = *(_QWORD *)(v12 + 48);
        if ( (v10 & 0x20) != 0 )
        {
          *(_DWORD *)(v12 + 36) &= ~0x4000u;
          DC::pSurface(*v11, *(struct SURFACE **)(v42 + 2528));
        }
        v43 = *((_QWORD *)this + 21);
        if ( v43 )
        {
          v48 = *(_QWORD *)(v43 + 72);
          v49 = PsGetCurrentProcess(v12, v42, a3);
          MmUnmapViewOfSection(v49, v48);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 144));
        DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 144));
        *v11 = 0LL;
      }
      _InterlockedOr(v78, 0);
      v13 = *((_QWORD *)this + 15);
      if ( v13 && *((_BYTE *)this + 137) )
      {
        v14 = *(_QWORD *)(v13 + 48);
        if ( (*((_DWORD *)this + 28) & 0x10) != 0 )
        {
          *(_DWORD *)(v13 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 15), *(struct SURFACE **)(v14 + 2528));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 120));
        v15 = *((_QWORD *)this + 15);
        if ( v15 && *((_BYTE *)this + 136) )
        {
          *(_DWORD *)(v15 + 40) &= ~2u;
          *((_BYTE *)this + 136) = 0;
        }
        v16 = *((_QWORD *)this + 15);
        if ( v16 )
        {
          if ( *((_DWORD *)this + 32) && (*(_DWORD *)(v16 + 44) & 2) != 0 )
          {
            XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120));
            *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) &= ~2u;
            *((_DWORD *)this + 32) = 0;
          }
          v17 = (__int64 *)*((_QWORD *)this + 15);
          v18 = *((unsigned int *)this + 33);
          v82 = 0;
          v19 = *v17;
          HmgDecrementExclusiveReferenceCountEx(v17, v18, &v82);
          if ( v82 )
            GrepDeleteDC(v19, 0x2000000LL);
        }
        *((_QWORD *)this + 15) = 0LL;
      }
    }
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x1000u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v21 = *ThreadWin32Thread;
      if ( v21 )
      {
        *(_QWORD *)(v21 + 320) = 0LL;
        *(_QWORD *)(v21 + 312) = 0LL;
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
  v22 = *((_DWORD *)this + 28);
  if ( (v22 & 8) != 0 )
    *((_DWORD *)this + 28) = v22 & 0xFFFFFFF7;
  if ( *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 23) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v80, *((HDC *)this + 24));
    LOBYTE(v50) = 5;
    v51 = HmgShareLock(*((_QWORD *)this + 22), v50);
    LOBYTE(v52) = 5;
    v53 = (__int64 *)v51;
    v54 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 23), v52);
    v55 = *v53;
    v56 = v54;
    DC::pSurface(v80[0], v54);
    DEC_SHARE_REF_CNT(v53);
    DEC_SHARE_REF_CNT(v56);
    GreDereferenceObject(v55, 1LL);
    *((_QWORD *)this + 24) = 0LL;
    *((_QWORD *)this + 22) = 0LL;
    if ( this != (DEVLOCKBLTOBJ *)-116LL )
    {
      v57 = v80[0];
      *((_DWORD *)v80[0] + 9) |= *((_DWORD *)this + 29);
    }
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
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v82);
      v60 = *((_QWORD *)this + 23);
      LOBYTE(v79) = 5;
      v61 = HmgShareUnlockRemoveObject(v60, 0LL, 0LL, 0LL, v79);
      if ( v61 )
        SURFACE::bDeleteSurface(v61, 0LL, 1LL);
      *((_QWORD *)v80[0] + 63) = 0LL;
      DC::vClearRendering(v80[0]);
      *((_QWORD *)this + 23) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v82);
      if ( v59 )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
        GreReleaseSemaphoreInternal(*((_QWORD *)v58 + 15));
      }
    }
    else
    {
      v62 = *((_QWORD *)this + 23);
      LOBYTE(v79) = 5;
      v63 = HmgShareUnlockRemoveObject(v62, 0LL, 0LL, 0LL, v79);
      if ( v63 )
        SURFACE::bDeleteSurface(v63, 0LL, 1LL);
      *((_QWORD *)v80[0] + 63) = 0LL;
      *((_QWORD *)this + 23) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v58 + 10));
    if ( v80[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v80);
  }
  if ( *((_QWORD *)this + 26) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v81, *((HDC *)this + 27));
    LOBYTE(v64) = 5;
    v65 = HmgShareLock(*((_QWORD *)this + 25), v64);
    LOBYTE(v66) = 5;
    v67 = (__int64 *)v65;
    v68 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 26), v66);
    v69 = *v67;
    v70 = v68;
    DC::pSurface(v81[0], v68);
    DEC_SHARE_REF_CNT(v67);
    DEC_SHARE_REF_CNT(v70);
    GreDereferenceObject(v69, 1LL);
    *((_QWORD *)this + 27) = 0LL;
    *((_QWORD *)this + 25) = 0LL;
    v72 = Gre::Base::Globals(v71);
    if ( (*((_DWORD *)v81[0] + 9) & 0x200) != 0 )
    {
      v73 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v72 + 15)) )
      {
        GreAcquireSemaphoreSharedInternal(*((_QWORD *)v72 + 15));
        EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v72 + 15));
        v73 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v82);
      v74 = *((_QWORD *)this + 26);
      LOBYTE(v79) = 5;
      v75 = HmgShareUnlockRemoveObject(v74, 0LL, 0LL, 0LL, v79);
      if ( v75 )
        SURFACE::bDeleteSurface(v75, 0LL, 1LL);
      *((_QWORD *)v81[0] + 63) = 0LL;
      DC::vClearRendering(v81[0]);
      *((_QWORD *)this + 26) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v82);
      if ( v73 )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
        GreReleaseSemaphoreInternal(*((_QWORD *)v72 + 15));
      }
    }
    else
    {
      v76 = *((_QWORD *)this + 26);
      LOBYTE(v79) = 5;
      v77 = HmgShareUnlockRemoveObject(v76, 0LL, 0LL, 0LL, v79);
      if ( v77 )
        SURFACE::bDeleteSurface(v77, 0LL, 1LL);
      *((_QWORD *)v81[0] + 63) = 0LL;
      *((_QWORD *)this + 26) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v72 + 10));
    if ( v81[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v81);
  }
  v23 = (char *)this + 144;
  v24 = *((_QWORD *)this + 18);
  if ( v24 )
  {
    if ( *((_BYTE *)this + 160) )
    {
      *(_DWORD *)(v24 + 40) &= ~2u;
      *((_BYTE *)this + 160) = 0;
    }
    if ( *(_QWORD *)v23 )
    {
      if ( *((_DWORD *)this + 38) && (*(_DWORD *)(*(_QWORD *)v23 + 44LL) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 144));
        *(_DWORD *)(*(_QWORD *)v23 + 44LL) &= ~2u;
        *((_DWORD *)this + 38) = 0;
      }
      v25 = *(__int64 **)v23;
      v26 = *((unsigned int *)this + 39);
      v84 = 0;
      v27 = *v25;
      HmgDecrementExclusiveReferenceCountEx(v25, v26, &v84);
      if ( v84 )
        GrepDeleteDC(v27, 0x2000000LL);
    }
    *(_QWORD *)v23 = 0LL;
  }
  v28 = *((_QWORD *)this + 15);
  if ( v28 )
  {
    if ( *((_BYTE *)this + 136) )
    {
      *(_DWORD *)(v28 + 40) &= ~2u;
      *((_BYTE *)this + 136) = 0;
    }
    v38 = *((_QWORD *)this + 15);
    if ( v38 )
    {
      if ( *((_DWORD *)this + 32) && (*(_DWORD *)(v38 + 44) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120));
        *(_DWORD *)(*((_QWORD *)this + 15) + 44LL) &= ~2u;
        *((_DWORD *)this + 32) = 0;
      }
      v39 = (__int64 *)*((_QWORD *)this + 15);
      v40 = *((unsigned int *)this + 33);
      v85 = 0;
      v41 = *v39;
      HmgDecrementExclusiveReferenceCountEx(v39, v40, &v85);
      if ( v85 )
        GrepDeleteDC(v41, 0x2000000LL);
    }
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( *((_DWORD *)this + 22) )
  {
    PopThreadGuardedObject((char *)this + 56);
    *((_DWORD *)this + 22) = 0;
  }
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
