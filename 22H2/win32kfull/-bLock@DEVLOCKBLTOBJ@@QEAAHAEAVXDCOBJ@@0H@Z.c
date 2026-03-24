/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C008C800
 * Callers:
 *     NtGdiAlphaBlend @ 0x1C0085150 (NtGdiAlphaBlend.c)
 *     NtGdiBitBltInternal @ 0x1C0088600 (NtGdiBitBltInternal.c)
 *     GreStretchBltInternal @ 0x1C00B49B0 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C010941C (GreMaskBlt.c)
 *     NtGdiTransparentBlt @ 0x1C0155C50 (NtGdiTransparentBlt.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C028B0B8 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 * Callees:
 *     ??1SURFREF@@QEAA@XZ @ 0x1C0082F38 (--1SURFREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C00838AC (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C008D720 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00B8014 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00B80D0 (-bMapTrgSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00D5C08 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00FF2E8 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ?bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z @ 0x1C00FF390 (-bMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHH@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0125320 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C016A038 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C026CC18 (-pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C0272DD8 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z @ 0x1C027309C (-vGuard@CAutoTGO@@QEAAXPEAXP6AX0@Z@Z.c)
 *     ?vKeepIt@SURFREF@@QEAAXXZ @ 0x1C02730D0 (-vKeepIt@SURFREF@@QEAAXXZ.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C029A9BC (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  DC **v6; // r14
  int v7; // esi
  DC **v8; // r13
  int v9; // ebx
  __int64 v10; // r10
  __int64 v11; // r9
  int v12; // r8d
  int v13; // edx
  bool v14; // zf
  unsigned int v15; // ebp
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 ThreadWin32Thread; // rax
  __int64 v22; // r8
  int v23; // eax
  __int64 v24; // r9
  __int64 v25; // rcx
  int v26; // edx
  __int64 v27; // rax
  int v28; // eax
  int v29; // edx
  int v30; // ecx
  __int64 v32; // rax
  __int64 v33; // rbx
  DC *v34; // rcx
  __int64 v35; // rax
  int v36; // r8d
  unsigned __int64 v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rax
  int v40; // esi
  DC *v41; // rdx
  int v42; // ecx
  __int64 v43; // rdx
  int v44; // ecx
  __int64 v45; // rbx
  __int64 v46; // r8
  int v47; // ecx
  bool v48; // zf
  __int64 v49; // rbx
  __int64 v50; // r8
  int v51; // ecx
  DC *v52; // r8
  __int64 v53; // rbx
  unsigned int v54; // eax
  unsigned int v55; // esi
  int v56; // ecx
  int v57; // edx
  __int64 v58; // rdx
  __int64 v59; // rax
  struct _SURFOBJ *v60; // rax
  __int64 v61; // rdx
  __int64 v62; // rax
  __int64 v63; // rdx
  int v64; // eax
  DC *v65; // rax
  HDC v66; // rdx
  DC *v67; // rax
  signed __int32 v68[8]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v69[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v70; // [rsp+40h] [rbp-48h]
  __int64 v71; // [rsp+90h] [rbp+8h] BYREF
  __int64 v72; // [rsp+98h] [rbp+10h] BYREF

  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 28) = 1;
  *((_QWORD *)this + 29) = 0LL;
  *((_QWORD *)this + 33) = 0LL;
  *((_QWORD *)this + 34) = 0LL;
  *((_QWORD *)this + 30) = 0LL;
  *((_QWORD *)this + 31) = 0LL;
  *((_QWORD *)this + 32) = **(_QWORD **)a2;
  *((_QWORD *)this + 35) = **(_QWORD **)a3;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 31, (HSURF *)this + 30, (unsigned int *)this + 29)
    || !TrapAppContainerRenderingWorker(a3, (HSURF *)this + 34, (HSURF *)this + 33, 0LL) )
  {
    return 0LL;
  }
  v6 = (DC **)((char *)this + 120);
  v7 = 0;
  v8 = (DC **)((char *)this + 176);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v9 = 1;
  if ( (!*(_QWORD *)a3 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (!*(_QWORD *)a2 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) )
  {
    goto LABEL_27;
  }
  *((_QWORD *)this + 2) = ghsemDynamicModeChange;
  GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  *((_DWORD *)this + 28) |= 8u;
  if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
  {
    GreAcquireSemaphoreSharedInternal(ghsemGreLock);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
    v7 = 1;
  }
  v10 = *(_QWORD *)a3;
  if ( *(_QWORD *)a3 )
  {
    v11 = *(_QWORD *)a2;
    if ( !*(_QWORD *)a2 )
    {
LABEL_24:
      v71 = *(_QWORD *)(v10 + 48);
      v9 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v71);
      goto LABEL_25;
    }
    v12 = *(_DWORD *)(v10 + 36);
    v13 = *(_DWORD *)(v11 + 36);
    if ( ((v13 ^ v12) & 0x200) != 0 )
    {
      if ( (**(_DWORD **)(v10 + 976) & 1) != 0 && (v13 & 0x8000) != 0 )
        goto LABEL_22;
      if ( (**(_DWORD **)(v11 + 976) & 1) == 0 )
      {
LABEL_23:
        v9 = 0;
        goto LABEL_24;
      }
      v14 = (v12 & 0x8000) == 0;
    }
    else
    {
      if ( (v12 & 0x200) == 0 || (v13 & 0x200) == 0 || (v12 & 0x8000) == 0 )
        goto LABEL_23;
      v14 = (*(_DWORD *)(v11 + 36) & 0x8000) == 0;
    }
    if ( !v14 )
    {
LABEL_22:
      v9 = 1;
      goto LABEL_24;
    }
    goto LABEL_23;
  }
LABEL_25:
  if ( *(_QWORD *)a2 )
  {
    v72 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
    v9 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v72);
  }
LABEL_27:
  v15 = 2;
  v16 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v16 & 0x200) != 0 )
  {
    if ( (v16 & 0x8000) == 0 || !v9 )
    {
      v17 = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
      *((_QWORD *)this + 1) = v17;
      *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      v18 = v17;
      if ( v7 && v17 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v18 = *((_QWORD *)this + 1);
        v7 = 0;
      }
      GreAcquireSemaphore(v18);
      v19 = *((_QWORD *)this + 1);
      v20 = 2LL;
      if ( v19 != ghsemGreLock )
        v20 = 11LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemSrc", v19, v20);
    }
    if ( (!*(_QWORD *)a2 || (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0) && !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x1000u;
      ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
      {
        *(_QWORD *)(ThreadWin32Thread + 320) = 0LL;
        *(_QWORD *)(ThreadWin32Thread + 312) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    }
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x5000) == 0x1000 )
      goto LABEL_60;
  }
  v22 = *(_QWORD *)a2;
  if ( !*(_QWORD *)a2 )
    goto LABEL_64;
  v23 = *(_DWORD *)(v22 + 36);
  if ( (v23 & 0x200) != 0 )
  {
    if ( (v23 & 0x8000) == 0 || !v9 )
    {
      v24 = *(_QWORD *)(v22 + 64);
      *(_QWORD *)this = v24;
      *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
      v25 = v24;
      if ( v7 && v24 == ghsemGreLock )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
        v25 = *(_QWORD *)this;
        v7 = 0;
      }
      GreAcquireSemaphore(v25);
      if ( *(_QWORD *)this != ghsemGreLock )
        v15 = 11;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v15);
      v26 = *((_DWORD *)this + 28);
      if ( (v26 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
        *((_DWORD *)this + 28) = v26 | 0x200;
    }
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x1000u;
      v27 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v27 )
      {
        *(_QWORD *)(v27 + 320) = 0LL;
        *(_QWORD *)(v27 + 312) = 0LL;
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(ghsemDCVisRgn);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
    }
    v22 = *(_QWORD *)a2;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
    {
LABEL_60:
      v28 = *((_DWORD *)this + 28);
      if ( (v28 & 0x1000) != 0 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v28 = *((_DWORD *)this + 28);
      }
      *((_DWORD *)this + 28) = v28 & 0xFFFFFFFE;
LABEL_87:
      if ( v7 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
      return 0LL;
    }
  }
  if ( v22 )
  {
    v30 = *((_DWORD *)this + 28);
    v29 = v30;
    if ( (v30 & 0x1000) != 0 && (*(_DWORD *)(v22 + 36) & 0x80000) != 0 )
    {
      if ( *((_QWORD *)this + 2) )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
        GreReleaseSemaphoreInternal(ghsemDCVisRgn);
        v30 = *((_DWORD *)this + 28);
      }
      *((_DWORD *)this + 28) = v30 & 0xFFFFFFFE;
      goto LABEL_87;
    }
  }
  else
  {
LABEL_64:
    v29 = *((_DWORD *)this + 28);
  }
  if ( (v29 & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0 )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
      v29 = *((_DWORD *)this + 28);
    }
    *((_DWORD *)this + 28) = v29 & 0xFFFFFFFE;
    goto LABEL_87;
  }
  if ( v22
    && ((v29 & 0x1000) != 0 || (*(_DWORD *)(v22 + 36) & 0x200) == 0)
    && (*(_DWORD *)(v22 + 36) & 0x10) != 0
    && !DC::bCompute((DC *)v22)
    || ((*((_DWORD *)this + 28) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0)
    && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0
    && !DC::bCompute(*(DC **)a3) )
  {
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
      GreReleaseSemaphoreInternal(ghsemDCVisRgn);
    }
    *((_DWORD *)this + 28) &= ~1u;
    goto LABEL_87;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_112;
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 30) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(*(DC **)a2);
      v32 = W32GetThreadWin32Thread(KeGetCurrentThread());
      v33 = v32;
      if ( v32 )
      {
        *(_QWORD *)(v32 + 312) = v6;
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
        {
          *(_DWORD *)(v32 + 328) |= 1u;
          *(_QWORD *)(*(_QWORD *)a2 + 1984LL) = 0LL;
          GreAcquireSemaphoreSharedInternal(ghsemVisRgnUniqueness);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
          *(_DWORD *)(v33 + 336) = giVisRgnUniqueness;
          EtwTraceGreLockReleaseSemaphore(L"ghsemVisRgnUniqueness", ghsemVisRgnUniqueness);
          GreReleaseSemaphoreInternal(ghsemVisRgnUniqueness);
        }
      }
    }
    v34 = *(DC **)a3;
    if ( **(_QWORD **)a3 != **(_QWORD **)a2 && (*((_DWORD *)v34 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 33) )
        UserIsCurrentProcessImmersiveAppContainer();
      else
        DC::vSetRendering(v34);
      v35 = W32GetThreadWin32Thread(KeGetCurrentThread());
      if ( v35 )
        *(_QWORD *)(v35 + 320) = a3;
    }
  }
  else if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 28) |= 0x800000u;
    GreIncLockCount();
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemDCVisRgn", ghsemDCVisRgn);
    GreReleaseSemaphoreInternal(ghsemDCVisRgn);
  }
LABEL_112:
  if ( v7 )
  {
    EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
    GreReleaseSemaphoreInternal(ghsemGreLock);
  }
  v36 = *((_DWORD *)this + 28);
  if ( (v36 & 0x1000) == 0 )
    goto LABEL_214;
  if ( *(_QWORD *)a3 )
    v37 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  else
    v37 = 0LL;
  v38 = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 )
    v39 = *(_QWORD *)(v38 + 496);
  else
    v39 = 0LL;
  v40 = 0;
  if ( v37 && v39 && v37 != v39 )
  {
    if ( v37 < v39 )
    {
      *((_DWORD *)this + 28) = v36 | 0x8000;
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
      {
        XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 176), **(HDC **)a3);
        v41 = *v8;
        if ( *v8 && *((_BYTE *)this + 225) )
        {
          v42 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v42 & 1) != 0 && (v42 & 0x4000) == 0 && *((_QWORD *)this + 29) && !*((_QWORD *)this + 33) )
          {
            *((_DWORD *)v41 + 9) |= 0x4000u;
            DC::pSurface(*v8, *((struct SURFACE **)this + 29));
            *((_DWORD *)this + 28) |= 0x20u;
          }
          if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, (int)v41) )
          {
            v40 = 1;
            *((_DWORD *)*v8 + 11) |= 1u;
          }
          goto LABEL_137;
        }
        v40 = 1;
      }
      *v8 = 0LL;
LABEL_137:
      _InterlockedOr(v68, 0);
      v43 = *(_QWORD *)a2;
      v44 = 1;
      if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
      {
        v45 = *(_QWORD *)(v43 + 48);
        XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v43);
        v46 = *(_QWORD *)(v45 + 1408);
        if ( *v6 && *((_BYTE *)this + 169) )
        {
          v47 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
          if ( (v47 & 1) != 0 && (v47 & 0x4000) == 0 && v46 && !*((_QWORD *)this + 30) )
          {
            *((_DWORD *)*v6 + 9) |= 0x4000u;
            DC::pSurface(*v6, (struct SURFACE *)(v46 - 24));
            *((_DWORD *)this + 28) |= 0x10u;
          }
          if ( !(unsigned int)DEVLOCKBLTOBJ::bMapTrgSurfaceView(this) )
          {
            *((_DWORD *)*v6 + 11) |= 1u;
LABEL_147:
            *((_DWORD *)this + 28) &= ~1u;
            return 0LL;
          }
          goto LABEL_197;
        }
        v44 = 0;
      }
      *v6 = 0LL;
      v48 = v44 == 0;
      goto LABEL_196;
    }
    if ( (*(_DWORD *)(v38 + 36) & 0x200) != 0 )
    {
      v49 = *(_QWORD *)(v38 + 48);
      XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), *(HDC *)v38);
      v50 = *(_QWORD *)(v49 + 1408);
      if ( *v6 && *((_BYTE *)this + 169) )
      {
        v51 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
        if ( (v51 & 1) != 0 && (v51 & 0x4000) == 0 && v50 && !*((_QWORD *)this + 30) )
        {
          *((_DWORD *)*v6 + 9) |= 0x4000u;
          DC::pSurface(*v6, (struct SURFACE *)(v50 - 24));
          *((_DWORD *)this + 28) |= 0x10u;
        }
        v52 = *v6;
        if ( *v6 )
        {
          if ( *((_BYTE *)this + 169) )
          {
            if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
            {
              v53 = *((_QWORD *)v52 + 62);
              if ( v53 )
              {
                v54 = SURFACE::Map(*((_QWORD *)v52 + 62), this);
                v55 = v54;
                if ( v54 <= 1 )
                {
                  if ( (*(_DWORD *)(v53 + 112) & 0x800) != 0
                    && *(_QWORD *)(v53 + 248)
                    && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                  {
                    *((_DWORD *)this + 28) |= 0x400u;
                  }
                  if ( (*(_DWORD *)(v53 + 112) & 0x10) != 0
                    && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                  {
                    *((_DWORD *)this + 28) |= 0x2000u;
                  }
                  if ( v55 == 1 )
                    *((_DWORD *)this + 28) |= 0x40u;
                }
                else if ( v54 == 2 )
                {
                  v40 = 1;
                  *((_DWORD *)*v6 + 11) |= 1u;
                  goto LABEL_177;
                }
              }
            }
          }
        }
        v40 = 0;
LABEL_177:
        _InterlockedOr(v68, 0);
        v56 = 1;
        if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
        {
          XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 176), **(HDC **)a3);
          if ( *v8 && *((_BYTE *)this + 225) )
          {
            v57 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
            if ( (v57 & 1) != 0 && (v57 & 0x4000) == 0 && *((_QWORD *)this + 29) && !*((_QWORD *)this + 33) )
            {
              *((_DWORD *)*v8 + 9) |= 0x4000u;
              DC::pSurface(*v8, *((struct SURFACE **)this + 29));
              *((_DWORD *)this + 28) |= 0x20u;
            }
            if ( !(unsigned int)DEVLOCKBLTOBJ::bMapSrcSurfaceView(this, v57) )
            {
              *((_DWORD *)*v8 + 11) |= 1u;
              *((_DWORD *)this + 28) &= ~1u;
              return 0LL;
            }
            goto LABEL_197;
          }
          v56 = 0;
        }
        *v8 = 0LL;
        if ( !v56 )
        {
          *((_DWORD *)this + 28) &= ~1u;
          return 0LL;
        }
        goto LABEL_197;
      }
      v40 = 1;
    }
    *v6 = 0LL;
    goto LABEL_177;
  }
  if ( v38 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, a2, 1) )
    v40 = 1;
  if ( !*(_QWORD *)a2 || **(_QWORD **)a2 != **(_QWORD **)a3 )
  {
    v48 = (unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v36, 0) == 0;
LABEL_196:
    if ( v48 )
      goto LABEL_147;
  }
LABEL_197:
  if ( v40
    || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 40LL) & 0x8000) != 0
    && *(_QWORD *)(*(_QWORD *)a2 + 496LL)
    && *(_QWORD *)this )
  {
    goto LABEL_147;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 48LL) + 40LL) & 0x8000) != 0 )
  {
    v58 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
    if ( v58 )
    {
      if ( *((_QWORD *)this + 1) )
      {
        if ( !bCopySurface((DEVLOCKBLTOBJ *)((char *)this + 40), (struct _SURFOBJ *)(v58 + 24)) )
          goto LABEL_147;
        SURFREF::SURFREF((SURFREF *)v69, *(HSURF *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 32LL));
        if ( hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL, 0LL) )
        {
          v62 = v70;
          *((_QWORD *)this + 13) = a3;
          *((_QWORD *)this + 12) = *(_QWORD *)(v62 + 32);
          SURFREF::vKeepIt((SURFREF *)v69);
        }
        else
        {
          v59 = W32GetThreadWin32Thread(KeGetCurrentThread());
          if ( !v59 || *(_QWORD *)(v59 + 384) )
          {
            *((_DWORD *)this + 28) &= ~1u;
            SURFREF::~SURFREF((SURFREF *)v69, v59);
            return 0LL;
          }
          v60 = SURFMEM::pSurfobj((DEVLOCKBLTOBJ *)((char *)this + 40));
          *(_QWORD *)(v61 + 384) = v60;
        }
        CAutoTGO::vGuard(
          (DEVLOCKBLTOBJ *)((char *)this + 56),
          this,
          (void (*)(void *))DEVLOCKBLTOBJ::TmpSrcThreadCleanup);
        EtwTraceGreLockReleaseSemaphore(L"hsemSrc", *((_QWORD *)this + 1));
        GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
        v63 = *((_QWORD *)this + 2);
        *((_QWORD *)this + 1) = 0LL;
        *((_QWORD *)this + 4) = 0LL;
        if ( v63 )
        {
          EtwTraceGreLockReleaseSemaphore(L"hsemDMC", v63);
          GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
          *((_QWORD *)this + 2) = 0LL;
        }
        SURFREF::~SURFREF((SURFREF *)v69, v63);
      }
    }
  }
LABEL_214:
  v64 = *((_DWORD *)this + 28);
  if ( (v64 & 0x1000) == 0 && (v64 & 0x800000) == 0 )
    return 1LL;
  v65 = *v6;
  if ( !*v6 )
  {
    XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), **(HDC **)a2);
    v65 = *v6;
    if ( !*v6 )
      goto LABEL_220;
    *((_BYTE *)this + 169) = 0;
  }
  *((_DWORD *)v65 + 10) |= 2u;
  *((_BYTE *)this + 168) = 1;
LABEL_220:
  v66 = **(HDC **)a3;
  if ( v66 != **(HDC **)a2 )
  {
    v67 = *v8;
    if ( *v8 )
    {
LABEL_224:
      *((_DWORD *)v67 + 10) |= 2u;
      *((_BYTE *)this + 224) = 1;
      return 1LL;
    }
    XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 176), v66);
    v67 = *v8;
    if ( *v8 )
    {
      *((_BYTE *)this + 225) = 0;
      goto LABEL_224;
    }
  }
  return 1LL;
}
