/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C008AF30
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0085150 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 *     GreGradientFill @ 0x1C00B6084 (GreGradientFill.c)
 *     GreMaskBlt @ 0x1C010941C (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C01458A4 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0155C50 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C028D580 (GrePlgBlt.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C004B8AC (GreDereferenceObject.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008BA5C (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C008BAB0 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0090090 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C00902E0 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C00AC9D8 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2890 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2938 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00FE7A0 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00FF3FC (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C011F940 (--1CAutoTGO@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0125320 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C01698C8 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C016A198 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C016A68C (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026C9D0 (--0SURFREF@@QEAA@XZ.c)
 *     ?bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029AC8C (-bUnHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C029D638 (-bUnHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this, __int64 a2, SURFACE **a3)
{
  int v3; // eax
  struct XDCOBJ *v5; // rbx
  int v6; // eax
  SURFACE **v7; // rcx
  SURFACE **v8; // rcx
  int v9; // edx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  DC **v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rbx
  __int64 CurrentProcess; // rax
  DC **v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // rax
  int ProcessSessionId; // ebx
  __int64 v36; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v39; // rax
  __int64 v40; // rdx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rcx
  __int64 v46; // rdx
  HSURF v47; // rbx
  __int64 v48; // rdx
  __int64 v49; // rdx
  char v50; // bl
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  HSURF v61; // rbx
  __int64 v62; // rdx
  __int64 v63; // rdx
  DC *v64; // rax
  char v65; // bl
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rax
  signed __int32 v74[8]; // [rsp+0h] [rbp-100h] BYREF
  int v75; // [rsp+20h] [rbp-E0h]
  _BYTE v76[32]; // [rsp+30h] [rbp-D0h] BYREF
  HSURF *v77; // [rsp+50h] [rbp-B0h]
  _BYTE v78[32]; // [rsp+58h] [rbp-A8h] BYREF
  HSURF *v79; // [rsp+78h] [rbp-88h]
  DC *v80[6]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v81[32]; // [rsp+B0h] [rbp-50h] BYREF
  struct SURFACE *v82; // [rsp+D0h] [rbp-30h]
  _BYTE v83[32]; // [rsp+D8h] [rbp-28h] BYREF
  struct SURFACE *v84; // [rsp+F8h] [rbp-8h]
  DC *v85[10]; // [rsp+100h] [rbp+0h] BYREF
  char v86; // [rsp+160h] [rbp+60h] BYREF
  char v87; // [rsp+168h] [rbp+68h] BYREF

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
          a3 = *(SURFACE ***)v5;
          v7 = *(SURFACE ***)v5;
          if ( (*(_DWORD *)(*(_QWORD *)v5 + 44LL) & 1) == 0 && a3[62] )
          {
            SURFACE::bUnMap(a3[62], this, (struct DC *)a3);
            v7 = *(SURFACE ***)v5;
          }
          *((_DWORD *)v7 + 11) &= ~1u;
        }
      }
    }
    v8 = *(SURFACE ***)v5;
    if ( *(_QWORD *)v5 )
    {
      if ( *((_BYTE *)v5 + 49) )
      {
        v9 = *((_DWORD *)this + 28);
        if ( (v9 & 0x1000) != 0 && (*((_DWORD *)v8 + 9) & 0x4000) != 0 && v8[59] && *((_DWORD *)v8 + 122) )
          GreUpdateSpriteDevLockEnd(v5, v9 & 0x400000);
      }
    }
  }
  if ( *((_QWORD *)this + 5) )
  {
    CAutoTGO::~CAutoTGO((DEVLOCKBLTOBJ *)((char *)this + 56));
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
          DC::pSurface(*((DC **)this + 15), *(struct SURFACE **)(v12 + 2552));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 120));
        v13 = *((_QWORD *)this + 15);
        if ( v13 && *((_BYTE *)this + 168) )
        {
          *(_DWORD *)(v13 + 40) &= ~2u;
          *((_BYTE *)this + 168) = 0;
        }
        XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 120));
        *((_QWORD *)this + 15) = 0LL;
      }
      _InterlockedOr(v74, 0);
      v14 = (DC **)((char *)this + 176);
      v15 = *((_QWORD *)this + 22);
      if ( v15 && *((_BYTE *)this + 225) )
      {
        v16 = *(_QWORD *)(v15 + 48);
        if ( (*((_DWORD *)this + 28) & 0x20) != 0 )
        {
          *(_DWORD *)(v15 + 36) &= ~0x4000u;
          DC::pSurface(*v14, *(struct SURFACE **)(v16 + 2552));
        }
        v17 = *((_QWORD *)this + 29);
        if ( v17 )
        {
          v18 = *(_QWORD *)(v17 + 72);
          CurrentProcess = PsGetCurrentProcess(v15, v16, a3);
          MmUnmapViewOfSection(CurrentProcess, v18);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 176));
        DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 176));
        *v14 = 0LL;
      }
      *((_DWORD *)this + 28) &= ~0x8000u;
    }
    else
    {
      v20 = (DC **)((char *)this + 176);
      v21 = *((_QWORD *)this + 22);
      if ( v21 && *((_BYTE *)this + 225) )
      {
        v22 = *(_QWORD *)(v21 + 48);
        if ( (v10 & 0x20) != 0 )
        {
          *(_DWORD *)(v21 + 36) &= ~0x4000u;
          DC::pSurface(*v20, *(struct SURFACE **)(v22 + 2552));
        }
        v23 = *((_QWORD *)this + 29);
        if ( v23 )
        {
          v24 = *(_QWORD *)(v23 + 72);
          v25 = PsGetCurrentProcess(v21, v22, a3);
          MmUnmapViewOfSection(v25, v24);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 176));
        if ( *v20 && *((_BYTE *)this + 224) )
        {
          *((_DWORD *)*v20 + 10) &= ~2u;
          *((_BYTE *)this + 224) = 0;
        }
        XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 176));
        *v20 = 0LL;
      }
      _InterlockedOr(v74, 0);
      v26 = *((_QWORD *)this + 15);
      if ( v26 && *((_BYTE *)this + 169) )
      {
        v27 = *(_QWORD *)(v26 + 48);
        if ( (*((_DWORD *)this + 28) & 0x10) != 0 )
        {
          *(_DWORD *)(v26 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 15), *(struct SURFACE **)(v27 + 2552));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 120));
        v28 = *((_QWORD *)this + 15);
        if ( v28 && *((_BYTE *)this + 168) )
        {
          *(_DWORD *)(v28 + 40) &= ~2u;
          *((_BYTE *)this + 168) = 0;
        }
        XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 120));
        *((_QWORD *)this + 15) = 0LL;
      }
    }
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x1000u;
    CurrentThread = KeGetCurrentThread();
    if ( !(unsigned __int8)KeIsAttachedProcess(v30)
      || (v34 = PsGetCurrentProcess(v32, v31, v33),
          ProcessSessionId = PsGetProcessSessionIdEx(v34),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v36),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
      {
        v39 = *ThreadWin32Thread;
        if ( v39 )
        {
          *(_QWORD *)(v39 + 320) = 0LL;
          *(_QWORD *)(v39 + 312) = 0LL;
        }
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
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v40 = *((_QWORD *)this + 1);
  if ( v40 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v40);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  v41 = *((_DWORD *)this + 28);
  if ( (v41 & 8) != 0 )
    *((_DWORD *)this + 28) = v41 & 0xFFFFFFF7;
  v42 = *((_QWORD *)this + 2);
  if ( v42 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v42);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 31) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v80, *((HDC *)this + 32));
    SURFREF::SURFREF((SURFREF *)v76);
    SURFREF::SURFREF((SURFREF *)v81);
    LOBYTE(v43) = 5;
    v44 = HmgShareLock(*((_QWORD *)this + 30), v43);
    v45 = *((_QWORD *)this + 31);
    LOBYTE(v46) = 5;
    v77 = (HSURF *)v44;
    v82 = (struct SURFACE *)HmgShareLock(v45, v46);
    v47 = *v77;
    DC::pSurface(v80[0], v82);
    DEC_SHARE_REF_CNT(v77, v48);
    v77 = 0LL;
    DEC_SHARE_REF_CNT(v82, v49);
    v82 = 0LL;
    GreDereferenceObject(v47, 1u);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
    if ( this != (DEVLOCKBLTOBJ *)-116LL )
      *((_DWORD *)v80[0] + 9) |= *((_DWORD *)this + 29);
    if ( (*((_DWORD *)v80[0] + 9) & 0x200) != 0 )
    {
      v50 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v50 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v86);
      v51 = *((_QWORD *)this + 31);
      LOBYTE(v75) = 5;
      v52 = HmgShareUnlockRemoveObject(v51, 0LL, 0LL, 0LL, v75);
      if ( v52 )
        SURFACE::bDeleteSurface(v52, 0LL, 1LL);
      *((_QWORD *)v80[0] + 63) = 0LL;
      DC::vClearRendering(v80[0]);
      *((_QWORD *)this + 31) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      if ( v50 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v53 = *((_QWORD *)this + 31);
      LOBYTE(v75) = 5;
      v54 = HmgShareUnlockRemoveObject(v53, 0LL, 0LL, 0LL, v75);
      if ( v54 )
        SURFACE::bDeleteSurface(v54, 0LL, 1LL);
      *((_QWORD *)v80[0] + 63) = 0LL;
      *((_QWORD *)this + 31) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v82 )
      DEC_SHARE_REF_CNT(v82, v55);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v81);
    if ( v77 )
      DEC_SHARE_REF_CNT(v77, v56);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v76);
    DCOBJ::~DCOBJ((DCOBJ *)v80);
  }
  if ( *((_QWORD *)this + 34) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v85, *((HDC *)this + 35));
    SURFREF::SURFREF((SURFREF *)v78);
    SURFREF::SURFREF((SURFREF *)v83);
    LOBYTE(v57) = 5;
    v58 = HmgShareLock(*((_QWORD *)this + 33), v57);
    v59 = *((_QWORD *)this + 34);
    LOBYTE(v60) = 5;
    v79 = (HSURF *)v58;
    v84 = (struct SURFACE *)HmgShareLock(v59, v60);
    v61 = *v79;
    DC::pSurface(v85[0], v84);
    DEC_SHARE_REF_CNT(v79, v62);
    v79 = 0LL;
    DEC_SHARE_REF_CNT(v84, v63);
    v84 = 0LL;
    GreDereferenceObject(v61, 1u);
    v64 = v85[0];
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    if ( (*((_DWORD *)v64 + 9) & 0x200) != 0 )
    {
      v65 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v65 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v87);
      v66 = *((_QWORD *)this + 34);
      LOBYTE(v75) = 5;
      v67 = HmgShareUnlockRemoveObject(v66, 0LL, 0LL, 0LL, v75);
      if ( v67 )
        SURFACE::bDeleteSurface(v67, 0LL, 1LL);
      *((_QWORD *)v85[0] + 63) = 0LL;
      DC::vClearRendering(v85[0]);
      *((_QWORD *)this + 34) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      if ( v65 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v68 = *((_QWORD *)this + 34);
      LOBYTE(v75) = 5;
      v69 = HmgShareUnlockRemoveObject(v68, 0LL, 0LL, 0LL, v75);
      if ( v69 )
        SURFACE::bDeleteSurface(v69, 0LL, 1LL);
      *((_QWORD *)v85[0] + 63) = 0LL;
      *((_QWORD *)this + 34) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v84 )
      DEC_SHARE_REF_CNT(v84, v70);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v83);
    if ( v79 )
      DEC_SHARE_REF_CNT(v79, v71);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v78);
    DCOBJ::~DCOBJ((DCOBJ *)v85);
  }
  v72 = *((_QWORD *)this + 22);
  if ( v72 )
  {
    if ( *((_BYTE *)this + 224) )
    {
      *(_DWORD *)(v72 + 40) &= ~2u;
      *((_BYTE *)this + 224) = 0;
    }
    XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 176));
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 192);
  v73 = *((_QWORD *)this + 15);
  if ( v73 )
  {
    if ( *((_BYTE *)this + 168) )
    {
      *(_DWORD *)(v73 + 40) &= ~2u;
      *((_BYTE *)this + 168) = 0;
    }
    XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 120));
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 136);
  CAutoTGO::~CAutoTGO((DEVLOCKBLTOBJ *)((char *)this + 56));
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
