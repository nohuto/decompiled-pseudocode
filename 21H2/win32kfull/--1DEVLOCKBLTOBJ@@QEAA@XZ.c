/*
 * XREFs of ??1DEVLOCKBLTOBJ@@QEAA@XZ @ 0x1C003F250
 * Callers:
 *     GreStretchBltInternal @ 0x1C002AF84 (GreStretchBltInternal.c)
 *     NtGdiAlphaBlend @ 0x1C0039BB0 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C003DD70 (NtGdiBitBltInternal.c)
 *     GreMaskBlt @ 0x1C0087168 (GreMaskBlt.c)
 *     GreGradientFill @ 0x1C0087BF0 (GreGradientFill.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C01388F0 (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0148400 (NtGdiTransparentBlt.c)
 *     GrePlgBlt @ 0x1C028B85C (GrePlgBlt.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C002669C (GreDereferenceObject.c)
 *     ?bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C002CE74 (-bDisposeSrcDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C002CEF0 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00357C0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ?GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z @ 0x1C0037530 (-GreUpdateSpriteDevLockEnd@@YAHAEAVXDCOBJ@@H@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0040380 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C0042300 (-bUnMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00E9590 (-bDisposeTrgDco@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00E9F20 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00F4808 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1CAutoTGO@@QEAA@XZ @ 0x1C010A45C (--1CAutoTGO@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0113C20 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?vUnlock@XDCOBJ@@IEAAXXZ @ 0x1C015D9B0 (-vUnlock@XDCOBJ@@IEAAXXZ.c)
 *     ?TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ @ 0x1C015DB6C (-TmpSrcCleanup@DEVLOCKBLTOBJ@@QEAAXXZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall DEVLOCKBLTOBJ::~DEVLOCKBLTOBJ(DEVLOCKBLTOBJ *this)
{
  int v1; // eax
  HDC **v3; // rbx
  HDC *v4; // rcx
  int v5; // edx
  int v6; // eax
  DC **v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rbx
  __int64 CurrentProcess; // rax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  HSURF v25; // rbx
  char v26; // bl
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rdx
  HSURF v35; // rbx
  DC *v36; // rax
  char v37; // bl
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  signed __int32 v44[8]; // [rsp+0h] [rbp-100h] BYREF
  int v45; // [rsp+20h] [rbp-E0h]
  _BYTE v46[32]; // [rsp+30h] [rbp-D0h] BYREF
  HSURF *v47; // [rsp+50h] [rbp-B0h]
  _BYTE v48[32]; // [rsp+58h] [rbp-A8h] BYREF
  HSURF *v49; // [rsp+78h] [rbp-88h]
  DC *v50[6]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v51[32]; // [rsp+B0h] [rbp-50h] BYREF
  struct SURFACE *v52; // [rsp+D0h] [rbp-30h]
  _BYTE v53[32]; // [rsp+D8h] [rbp-28h] BYREF
  struct SURFACE *v54; // [rsp+F8h] [rbp-8h]
  DC *v55[6]; // [rsp+100h] [rbp+0h] BYREF
  char v56; // [rsp+150h] [rbp+50h] BYREF

  v1 = *((_DWORD *)this + 28);
  if ( (v1 & 0x1000) != 0 )
  {
    if ( (v1 & 0x8000) != 0 )
    {
      v3 = (HDC **)((char *)this + 120);
      if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 169) )
        DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
      _InterlockedOr(v44, 0);
      if ( *((_QWORD *)this + 22) && *((_BYTE *)this + 225) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
    }
    else
    {
      if ( *((_QWORD *)this + 22) && *((_BYTE *)this + 225) )
        DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
      _InterlockedOr(v44, 0);
      v3 = (HDC **)((char *)this + 120);
      if ( *((_QWORD *)this + 15) && *((_BYTE *)this + 169) )
        DEVLOCKBLTOBJ::bUnMapTrgSurfaceView(this);
    }
    v4 = *v3;
    if ( *v3 )
    {
      if ( *((_BYTE *)v3 + 49) )
      {
        v5 = *((_DWORD *)this + 28);
        if ( (v5 & 0x1000) != 0 && (*((_DWORD *)v4 + 9) & 0x4000) != 0 && v4[59] && *((_DWORD *)v4 + 122) )
          GreUpdateSpriteDevLockEnd(v3, v5 & 0x400000);
      }
    }
  }
  if ( *((_QWORD *)this + 5) )
  {
    CAutoTGO::~CAutoTGO((DEVLOCKBLTOBJ *)((char *)this + 56));
    DEVLOCKBLTOBJ::TmpSrcCleanup(this);
  }
  v6 = *((_DWORD *)this + 28);
  if ( (v6 & 0x1000) != 0 )
  {
    if ( (v6 & 0x8000) != 0 )
    {
      DEVLOCKBLTOBJ::bDisposeTrgDco(this);
      _InterlockedOr(v44, 0);
      DEVLOCKBLTOBJ::bDisposeSrcDco(this);
      *((_DWORD *)this + 28) &= ~0x8000u;
    }
    else
    {
      v7 = (DC **)((char *)this + 176);
      v8 = *((_QWORD *)this + 22);
      if ( v8 && *((_BYTE *)this + 225) )
      {
        v9 = *(_QWORD *)(v8 + 48);
        if ( (v6 & 0x20) != 0 )
        {
          *(_DWORD *)(v8 + 36) &= ~0x4000u;
          DC::pSurface(*v7, *(struct SURFACE **)(v9 + 2528));
        }
        v10 = *((_QWORD *)this + 29);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 72);
          CurrentProcess = PsGetCurrentProcess(v8, v9);
          MmUnmapViewOfSection(CurrentProcess, v11);
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 176));
        DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 176));
        *v7 = 0LL;
      }
      _InterlockedOr(v44, 0);
      v13 = *((_QWORD *)this + 15);
      if ( v13 && *((_BYTE *)this + 169) )
      {
        v14 = *(_QWORD *)(v13 + 48);
        if ( (*((_DWORD *)this + 28) & 0x10) != 0 )
        {
          *(_DWORD *)(v13 + 36) &= ~0x4000u;
          DC::pSurface(*((DC **)this + 15), *(struct SURFACE **)(v14 + 2528));
        }
        DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 120));
        v15 = *((_QWORD *)this + 15);
        if ( v15 && *((_BYTE *)this + 168) )
        {
          *(_DWORD *)(v15 + 40) &= ~2u;
          *((_BYTE *)this + 168) = 0;
        }
        XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 120));
        *((_QWORD *)this + 15) = 0LL;
      }
    }
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x1000u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v17 = *ThreadWin32Thread;
      if ( v17 )
      {
        *(_QWORD *)(v17 + 320) = 0LL;
        *(_QWORD *)(v17 + 312) = 0LL;
      }
    }
  }
  else if ( (v6 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 28) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg", *(_QWORD *)this);
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v18 = *((_QWORD *)this + 1);
  if ( v18 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemSrc", v18);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  v19 = *((_DWORD *)this + 28);
  if ( (v19 & 8) != 0 )
    *((_DWORD *)this + 28) = v19 & 0xFFFFFFF7;
  v20 = *((_QWORD *)this + 2);
  if ( v20 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v20);
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
  }
  if ( *((_QWORD *)this + 31) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v50, *((HDC *)this + 32));
    SURFREF::SURFREF((SURFREF *)v46);
    SURFREF::SURFREF((SURFREF *)v51);
    LOBYTE(v21) = 5;
    v22 = HmgShareLock(*((_QWORD *)this + 30), v21);
    v23 = *((_QWORD *)this + 31);
    LOBYTE(v24) = 5;
    v47 = (HSURF *)v22;
    v52 = (struct SURFACE *)HmgShareLock(v23, v24);
    v25 = *v47;
    DC::pSurface(v50[0], v52);
    DEC_SHARE_REF_CNT(v47);
    v47 = 0LL;
    DEC_SHARE_REF_CNT(v52);
    v52 = 0LL;
    GreDereferenceObject(v25, 1u);
    *((_QWORD *)this + 32) = 0LL;
    *((_QWORD *)this + 30) = 0LL;
    if ( this != (DEVLOCKBLTOBJ *)-116LL )
      *((_DWORD *)v50[0] + 9) |= *((_DWORD *)this + 29);
    if ( (*((_DWORD *)v50[0] + 9) & 0x200) != 0 )
    {
      v26 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v26 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v56);
      v27 = *((_QWORD *)this + 31);
      LOBYTE(v45) = 5;
      v28 = HmgShareUnlockRemoveObject(v27, 0LL, 0LL, 0LL, v45);
      if ( v28 )
        SURFACE::bDeleteSurface(v28, 0LL, 1LL);
      *((_QWORD *)v50[0] + 63) = 0LL;
      DC::vClearRendering(v50[0]);
      *((_QWORD *)this + 31) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      if ( v26 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v29 = *((_QWORD *)this + 31);
      LOBYTE(v45) = 5;
      v30 = HmgShareUnlockRemoveObject(v29, 0LL, 0LL, 0LL, v45);
      if ( v30 )
        SURFACE::bDeleteSurface(v30, 0LL, 1LL);
      *((_QWORD *)v50[0] + 63) = 0LL;
      *((_QWORD *)this + 31) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v52 )
      DEC_SHARE_REF_CNT(v52);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v51);
    if ( v47 )
      DEC_SHARE_REF_CNT(v47);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v46);
    DCOBJ::~DCOBJ((DCOBJ *)v50);
  }
  if ( *((_QWORD *)this + 34) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v55, *((HDC *)this + 35));
    SURFREF::SURFREF((SURFREF *)v48);
    SURFREF::SURFREF((SURFREF *)v53);
    LOBYTE(v31) = 5;
    v32 = HmgShareLock(*((_QWORD *)this + 33), v31);
    v33 = *((_QWORD *)this + 34);
    LOBYTE(v34) = 5;
    v49 = (HSURF *)v32;
    v54 = (struct SURFACE *)HmgShareLock(v33, v34);
    v35 = *v49;
    DC::pSurface(v55[0], v54);
    DEC_SHARE_REF_CNT(v49);
    v49 = 0LL;
    DEC_SHARE_REF_CNT(v54);
    v54 = 0LL;
    GreDereferenceObject(v35, 1u);
    v36 = v55[0];
    *((_QWORD *)this + 35) = 0LL;
    *((_QWORD *)this + 33) = 0LL;
    if ( (*((_DWORD *)v36 + 9) & 0x200) != 0 )
    {
      v37 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v37 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v56);
      v38 = *((_QWORD *)this + 34);
      LOBYTE(v45) = 5;
      v39 = HmgShareUnlockRemoveObject(v38, 0LL, 0LL, 0LL, v45);
      if ( v39 )
        SURFACE::bDeleteSurface(v39, 0LL, 1LL);
      *((_QWORD *)v55[0] + 63) = 0LL;
      DC::vClearRendering(v55[0]);
      *((_QWORD *)this + 34) = 0LL;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      if ( v37 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v40 = *((_QWORD *)this + 34);
      LOBYTE(v45) = 5;
      v41 = HmgShareUnlockRemoveObject(v40, 0LL, 0LL, 0LL, v45);
      if ( v41 )
        SURFACE::bDeleteSurface(v41, 0LL, 1LL);
      *((_QWORD *)v55[0] + 63) = 0LL;
      *((_QWORD *)this + 34) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v54 )
      DEC_SHARE_REF_CNT(v54);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v53);
    if ( v49 )
      DEC_SHARE_REF_CNT(v49);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v48);
    DCOBJ::~DCOBJ((DCOBJ *)v55);
  }
  v42 = *((_QWORD *)this + 22);
  if ( v42 )
  {
    if ( *((_BYTE *)this + 224) )
    {
      *(_DWORD *)(v42 + 40) &= ~2u;
      *((_BYTE *)this + 224) = 0;
    }
    XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 176));
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 192);
  v43 = *((_QWORD *)this + 15);
  if ( v43 )
  {
    if ( *((_BYTE *)this + 168) )
    {
      *(_DWORD *)(v43 + 40) &= ~2u;
      *((_BYTE *)this + 168) = 0;
    }
    XDCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 120));
  }
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((char *)this + 136);
  CAutoTGO::~CAutoTGO((DEVLOCKBLTOBJ *)((char *)this + 56));
  SURFMEM::~SURFMEM((DEVLOCKBLTOBJ *)((char *)this + 40));
}
