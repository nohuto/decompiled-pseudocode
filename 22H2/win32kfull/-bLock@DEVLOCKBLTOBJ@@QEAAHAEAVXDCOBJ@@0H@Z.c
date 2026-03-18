/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C01026C0
 * Callers:
 *     GreMaskBlt @ 0x1C001C9BC (GreMaskBlt.c)
 *     NtGdiAlphaBlend @ 0x1C00FADC0 (NtGdiAlphaBlend.c)
 *     GreStretchBltInternal @ 0x1C00FF3A0 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C01042C0 (NtGdiBitBltInternal.c)
 *     ??0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z @ 0x1C028EA20 (--0DEVLOCKBLTOBJ@@QEAA@AEAVXDCOBJ@@0@Z.c)
 *     NtGdiTransparentBlt @ 0x1C0297970 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0010D14 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C0015780 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@@Z @ 0x1C0030084 (--0SURFREF@@QEAA@PEAUHSURF__@@@Z.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C009C6EC (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00A8004 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C0103ED0 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C011E0CC (W32GetThreadWin32Thread.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C013E67C (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0266BBC (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C026BB6C (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A3024 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2, struct XDCOBJ *a3)
{
  int v3; // r12d
  int v6; // ebp
  Gre::Base *v7; // rcx
  DC **v8; // r15
  DC **v9; // r14
  DC *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rdi
  struct XDCOBJ *v12; // rbx
  __int64 *v13; // r10
  __int64 v14; // r9
  int v15; // edx
  int v16; // r8d
  bool v17; // zf
  unsigned int v18; // ebx
  int v19; // eax
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v24; // rax
  bool v25; // zf
  _QWORD *v26; // rdx
  _QWORD *v27; // r9
  int v28; // eax
  __int64 v29; // r8
  struct XDCOBJ *v30; // rbp
  int v31; // edx
  __int64 *v32; // rax
  __int64 v33; // rax
  int v34; // ebx
  bool v35; // zf
  struct XDCOBJ *v37; // rbp
  DC *v38; // rdx
  __int64 *v39; // rax
  __int64 v40; // rbx
  Gre::Base *v41; // rcx
  DC *v42; // rcx
  __int64 *v43; // rax
  __int64 v44; // rax
  __int64 v45; // r8
  unsigned __int64 v46; // rdx
  struct XDCOBJ *v47; // r12
  DC *v48; // rcx
  unsigned __int64 v49; // rax
  int v50; // ebp
  __int64 v51; // rax
  __int64 *v52; // rax
  __int64 v53; // rax
  __int64 v54; // rdx
  struct UMPDOBJ *v55; // rdx
  DC *v56; // rax
  DC *v57; // rdx
  int v58; // ebx
  DC *v59; // rax
  int v60; // ecx
  __int64 v61; // rcx
  int v62; // eax
  __int64 *v63; // rdx
  int v64; // ecx
  __int64 v65; // rbx
  __int64 v66; // rcx
  __int64 v67; // rax
  __int64 *v68; // rax
  __int64 v69; // rax
  __int64 v70; // rdx
  struct UMPDOBJ *v71; // rdx
  DC *v72; // rax
  DC *v73; // rdx
  int v74; // edi
  DC *v75; // rax
  __int64 v76; // rdx
  int v77; // ecx
  DC *v78; // r8
  __int64 v79; // rbx
  unsigned int v80; // eax
  unsigned int v81; // edi
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  struct UMPDOBJ *v87; // rdx
  DC *v88; // rax
  DC *v89; // rdx
  int v90; // edi
  DC *v91; // rax
  __int64 v92; // rdx
  int v93; // ecx
  DC *v94; // r8
  __int64 v95; // rbx
  unsigned int v96; // eax
  unsigned int v97; // edi
  __int64 *v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rax
  __int64 *v101; // rax
  __int64 v102; // rax
  __int64 v103; // rdx
  struct UMPDOBJ *v104; // rdx
  DC *v105; // rax
  DC *v106; // rdx
  int v107; // ebx
  DC *v108; // rax
  int v109; // ecx
  __int64 v110; // rcx
  int v111; // eax
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rdx
  __int64 v115; // rcx
  __int64 v116; // rdx
  int v117; // eax
  DC *v118; // rax
  __int64 v119; // rax
  __int64 *v120; // rax
  __int64 v121; // rax
  __int64 v122; // rdx
  struct UMPDOBJ *v123; // rdx
  DC *v124; // rax
  int v125; // ebx
  DC *v126; // rax
  __int64 v127; // rcx
  DC *v128; // rax
  __int64 v129; // rax
  __int64 *v130; // rax
  __int64 v131; // rax
  __int64 v132; // rdx
  struct UMPDOBJ *v133; // rdx
  DC *v134; // rax
  DC *v135; // rdx
  int v136; // ebx
  DC *v137; // rax
  signed __int32 v138[8]; // [rsp+0h] [rbp-88h] BYREF
  _BYTE v139[32]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v140; // [rsp+40h] [rbp-48h]
  __int64 v141; // [rsp+90h] [rbp+8h] BYREF
  struct XDCOBJ *v142; // [rsp+98h] [rbp+10h]
  __int64 v143; // [rsp+A0h] [rbp+18h] BYREF

  v142 = a2;
  v3 = 0;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  v6 = 1;
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
  v8 = (DC **)((char *)this + 120);
  v9 = (DC **)((char *)this + 176);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  v11 = Gre::Base::Globals(v7);
  if ( *(_QWORD *)a3 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    v12 = v142;
  }
  else
  {
    v12 = v142;
    if ( !*(_QWORD *)v142 || (*(_DWORD *)(*(_QWORD *)v142 + 36LL) & 0x200) == 0 )
      goto LABEL_29;
  }
  *((_QWORD *)this + 2) = *((_QWORD *)v11 + 10);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v11 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v11 + 10));
  *((_DWORD *)this + 28) |= 8u;
  if ( !(unsigned int)((__int64 (*)(void))GreGetLockCount)()
    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v11 + 15)) )
  {
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v11 + 15));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v11 + 15));
    v3 = 1;
  }
  v13 = *(__int64 **)a3;
  if ( *(_QWORD *)a3 )
  {
    v14 = *(_QWORD *)v12;
    if ( !*(_QWORD *)v12 )
    {
LABEL_26:
      v141 = v13[6];
      v6 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v141);
      goto LABEL_27;
    }
    v15 = *(_DWORD *)(v14 + 36);
    v16 = *((_DWORD *)v13 + 9);
    if ( ((v16 ^ v15) & 0x200) != 0 )
    {
      if ( (*(_DWORD *)v13[122] & 1) != 0 && (v15 & 0x8000) != 0 )
        goto LABEL_24;
      if ( (**(_DWORD **)(v14 + 976) & 1) == 0 )
      {
LABEL_25:
        v6 = 0;
        goto LABEL_26;
      }
      v17 = (*((_DWORD *)v13 + 9) & 0x8000) == 0;
    }
    else
    {
      if ( (v16 & 0x200) == 0 || (v15 & 0x200) == 0 || (v16 & 0x8000) == 0 )
        goto LABEL_25;
      v17 = (v15 & 0x8000) == 0;
    }
    if ( !v17 )
    {
LABEL_24:
      v6 = 1;
      goto LABEL_26;
    }
    goto LABEL_25;
  }
LABEL_27:
  if ( *(_QWORD *)v142 )
  {
    v143 = *(_QWORD *)(*(_QWORD *)v142 + 48LL);
    v6 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v143);
  }
LABEL_29:
  v18 = 2;
  v19 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
  if ( (v19 & 0x200) != 0 )
  {
    if ( (v19 & 0x8000) == 0 || !v6 )
    {
      v20 = *(_QWORD *)(*(_QWORD *)a3 + 64LL);
      *((_QWORD *)this + 1) = v20;
      *((_QWORD *)this + 4) = *(_QWORD *)(*(_QWORD *)a3 + 48LL);
      if ( v3 && v20 == *((_QWORD *)v11 + 15) )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
        GreReleaseSemaphoreInternal(*((_QWORD *)v11 + 15));
        v3 = 0;
      }
      GreAcquireSemaphore(*((_QWORD *)this + 1));
      v21 = *((_QWORD *)this + 1);
      v22 = 2LL;
      if ( v21 != *((_QWORD *)v11 + 15) )
        v22 = 11LL;
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemSrc", v21, v22);
    }
    if ( (!*(_QWORD *)v142 || (*(_DWORD *)(*(_QWORD *)v142 + 36LL) & 0x200) == 0)
      && !(unsigned int)((__int64 (*)(void))GreGetLockCount)() )
    {
      *((_DWORD *)this + 28) |= 0x1000u;
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( ThreadWin32Thread )
      {
        v24 = *ThreadWin32Thread;
        if ( v24 )
        {
          *(_QWORD *)(v24 + 320) = 0LL;
          *(_QWORD *)(v24 + 312) = 0LL;
        }
      }
      GreIncLockCount();
      GreAcquireSemaphoreSharedInternal(*((_QWORD *)v11 + 11));
      EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDCVisRgn", *((_QWORD *)v11 + 11));
    }
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x5000) == 0x1000 )
    {
      v25 = (*((_DWORD *)this + 28) & 0x1000) == 0;
LABEL_81:
      if ( !v25 )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
        GreReleaseSemaphoreInternal(*((_QWORD *)v11 + 11));
      }
      *((_DWORD *)this + 28) &= ~1u;
      v35 = v3 == 0;
LABEL_84:
      if ( !v35 )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
        GreReleaseSemaphoreInternal(*((_QWORD *)v11 + 15));
      }
      return 0LL;
    }
  }
  v26 = *(_QWORD **)v142;
  if ( *(_QWORD *)v142 )
  {
    v28 = *((_DWORD *)v26 + 9);
    if ( (v28 & 0x200) != 0 )
    {
      if ( (v28 & 0x8000) != 0 && v6 )
      {
        v30 = v142;
      }
      else
      {
        v29 = v26[8];
        v30 = v142;
        *(_QWORD *)this = v29;
        *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)v30 + 48LL);
        if ( v3 && v29 == *((_QWORD *)v11 + 15) )
        {
          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
          GreReleaseSemaphoreInternal(*((_QWORD *)v11 + 15));
          v3 = 0;
        }
        GreAcquireSemaphore(*(_QWORD *)this);
        if ( *(_QWORD *)this != *((_QWORD *)v11 + 15) )
          v18 = 11;
        EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v18);
        v31 = *((_DWORD *)this + 28);
        if ( (v31 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)v30 + 36LL) & 0x4000) != 0 )
          *((_DWORD *)this + 28) = v31 | 0x200;
      }
      if ( !(unsigned int)((__int64 (*)(void))GreGetLockCount)() )
      {
        *((_DWORD *)this + 28) |= 0x1000u;
        v32 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
        if ( v32 )
        {
          v33 = *v32;
          if ( v33 )
          {
            *(_QWORD *)(v33 + 320) = 0LL;
            *(_QWORD *)(v33 + 312) = 0LL;
          }
        }
        GreIncLockCount();
        GreAcquireSemaphoreSharedInternal(*((_QWORD *)v11 + 11));
        EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDCVisRgn", *((_QWORD *)v11 + 11));
      }
      v26 = *(_QWORD **)v30;
      if ( (*(_DWORD *)(*(_QWORD *)v30 + 36LL) & 0x5000) == 0x1000 )
      {
        v25 = (*((_DWORD *)this + 28) & 0x1000) == 0;
        goto LABEL_81;
      }
    }
    v34 = v3;
    v27 = v26;
    if ( v26 && (*((_DWORD *)this + 28) & 0x1000) != 0 && (*((_DWORD *)v26 + 9) & 0x80000) != 0 )
      goto LABEL_90;
  }
  else
  {
    v27 = 0LL;
  }
  v34 = v3;
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x80000) != 0 )
  {
LABEL_80:
    v25 = *((_QWORD *)this + 2) == 0LL;
    goto LABEL_81;
  }
  if ( v26 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
    {
      v10 = (DC *)((char *)v27 + 36);
    }
    else
    {
      v10 = (DC *)((char *)v26 + 36);
      if ( (*((_DWORD *)v26 + 9) & 0x200) != 0 )
        goto LABEL_76;
    }
    if ( (*(_DWORD *)v10 & 0x10) == 0 || DC::bCompute((DC *)v26) )
      goto LABEL_76;
LABEL_90:
    if ( *((_QWORD *)this + 2) )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
      GreReleaseSemaphoreInternal(*((_QWORD *)v11 + 11));
    }
    *((_DWORD *)this + 28) &= ~1u;
    v35 = v34 == 0;
    goto LABEL_84;
  }
LABEL_76:
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0 )
  {
    v10 = *(DC **)a3;
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x10) != 0 && !DC::bCompute(v10) )
      goto LABEL_80;
  }
  v37 = v142;
  v38 = (DC *)(*(_DWORD *)(*(_QWORD *)v142 + 36LL) & 0x200);
  if ( (*(_DWORD *)(*(_QWORD *)v142 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_117;
    if ( (_DWORD)v38 )
    {
      if ( *((_QWORD *)this + 30) )
        UserIsCurrentProcessImmersiveAppContainer(v10);
      else
        DC::vSetRendering(*(DC **)v142);
      v39 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v39 )
      {
        v40 = *v39;
        if ( *v39 )
        {
          *(_QWORD *)(v40 + 312) = v8;
          if ( (*(_DWORD *)(*(_QWORD *)v37 + 36LL) & 0x4000) == 0 )
          {
            *(_DWORD *)(v40 + 328) |= 1u;
            *(_QWORD *)(*(_QWORD *)v37 + 1976LL) = 0LL;
            GreAcquireSemaphoreSharedInternal(*((_QWORD *)v11 + 12));
            EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemVisRgnUniqueness", *((_QWORD *)v11 + 12));
            *(_DWORD *)(v40 + 336) = *((_DWORD *)Gre::Base::Globals(v41) + 1629);
            EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemVisRgnUniqueness");
            GreReleaseSemaphoreInternal(*((_QWORD *)v11 + 12));
          }
        }
      }
    }
    v42 = *(DC **)a3;
    v38 = **(DC ***)v37;
    if ( **(DC ***)a3 != v38 && (*((_DWORD *)v42 + 9) & 0x200) != 0 )
    {
      if ( *((_QWORD *)this + 33) )
        UserIsCurrentProcessImmersiveAppContainer(v42);
      else
        DC::vSetRendering(v42);
      v43 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v43 )
      {
        v44 = *v43;
        if ( v44 )
          *(_QWORD *)(v44 + 320) = a3;
      }
    }
  }
  else if ( !(unsigned int)GreGetLockCount(v10) )
  {
    *((_DWORD *)this + 28) |= 0x800000u;
    GreIncLockCount();
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
    GreReleaseSemaphoreInternal(*((_QWORD *)v11 + 11));
  }
LABEL_117:
  if ( v3 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
    GreReleaseSemaphoreInternal(*((_QWORD *)v11 + 15));
  }
  v45 = *((unsigned int *)this + 28);
  if ( (v45 & 0x1000) == 0 )
  {
    v47 = v142;
    goto LABEL_361;
  }
  if ( *(_QWORD *)a3 )
    v46 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  else
    v46 = 0LL;
  v47 = v142;
  v48 = *(DC **)v142;
  if ( *(_QWORD *)v142 )
    v49 = *((_QWORD *)v48 + 62);
  else
    v49 = 0LL;
  v50 = 0;
  if ( !v46 || !v49 || v46 == v49 )
  {
    if ( v48 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, v142, 1) )
      v50 = 1;
    if ( (!*(_QWORD *)v47 || **(_QWORD **)v47 != **(_QWORD **)a3)
      && !(unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v45, 0) )
    {
      goto LABEL_229;
    }
    goto LABEL_335;
  }
  if ( v46 < v49 )
  {
    *((_DWORD *)this + 28) = v45 | 0x8000;
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0 )
      goto LABEL_174;
    LOBYTE(v46) = 1;
    v51 = HmgLockEx(**(_QWORD **)a3, v46, *((unsigned int *)this + 47));
    *v9 = (DC *)v51;
    if ( v51 )
    {
      v52 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v52 && (v53 = *v52) != 0 && (v54 = *(_QWORD *)(v53 + 40), v54 != v53 + 40) )
        v55 = (struct UMPDOBJ *)(v54 - 40);
      else
        v55 = 0LL;
      v56 = *v9;
      if ( *((_WORD *)*v9 + 6) == 1 )
      {
        *((_QWORD *)v56 + 271) = v55;
        *((_DWORD *)*v9 + 544) = 0xFFFF;
      }
      else if ( *((struct UMPDOBJ **)v56 + 271) != v55 )
      {
        XDCOBJ::LogUmpdCallbackStatus((DEVLOCKBLTOBJ *)((char *)this + 176), v55);
        _InterlockedDecrement((volatile signed __int32 *)*v9 + 3);
        *v9 = 0LL;
        goto LABEL_151;
      }
      v57 = *v9;
      if ( *((_DWORD *)this + 47) )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v57 + 6) + 40LL) & 0x8000) != 0 )
        {
          v58 = *((_DWORD *)v57 + 528);
          if ( v58 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
            goto LABEL_151;
          v57 = *v9;
        }
        _InterlockedDecrement((volatile signed __int32 *)v57 + 3);
        *v9 = 0LL;
      }
      else if ( *((_DWORD *)v57 + 528) )
      {
        *((_DWORD *)v57 + 528) = 0;
      }
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
LABEL_151:
    if ( !*v9 )
      goto LABEL_158;
    if ( (*((_DWORD *)*v9 + 11) & 2) == 0 )
    {
      v17 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 176)) == 0;
      v59 = *v9;
      if ( v17 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v59 + 3);
        *v9 = 0LL;
LABEL_158:
        if ( *v9 && *((_BYTE *)this + 225) )
        {
          v60 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v60 & 1) != 0 && (v60 & 0x4000) == 0 && *((_QWORD *)this + 29) && !*((_QWORD *)this + 33) )
          {
            *((_DWORD *)*v9 + 9) |= 0x4000u;
            DC::pSurface(*v9, *((struct SURFACE **)this + 29));
            *((_DWORD *)this + 28) |= 0x20u;
          }
          if ( *v9 )
          {
            if ( *((_BYTE *)this + 225) )
            {
              if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
              {
                v61 = *((_QWORD *)*v9 + 62);
                if ( v61 )
                {
                  v62 = SURFACE::Map(v61, this);
                  if ( v62 == 2 )
                  {
                    v50 = 1;
                    *((_DWORD *)*v9 + 11) |= 1u;
                  }
                  else if ( v62 == 1 )
                  {
                    *((_DWORD *)this + 28) |= 0x80u;
                  }
                }
              }
            }
          }
LABEL_175:
          _InterlockedOr(v138, 0);
          v63 = *(__int64 **)v47;
          v64 = 1;
          if ( (*(_DWORD *)(*(_QWORD *)v47 + 36LL) & 0x200) == 0 )
          {
LABEL_227:
            *v8 = 0LL;
            goto LABEL_228;
          }
          v65 = v63[6];
          v66 = *v63;
          LOBYTE(v63) = 1;
          v67 = HmgLockEx(v66, v63, *((unsigned int *)this + 33));
          *v8 = (DC *)v67;
          if ( v67 )
          {
            v68 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( v68 && (v69 = *v68) != 0 && (v70 = *(_QWORD *)(v69 + 40), v70 != v69 + 40) )
              v71 = (struct UMPDOBJ *)(v70 - 40);
            else
              v71 = 0LL;
            v72 = *v8;
            if ( *((_WORD *)*v8 + 6) == 1 )
            {
              *((_QWORD *)v72 + 271) = v71;
              *((_DWORD *)*v8 + 544) = 0xFFFF;
            }
            else if ( *((struct UMPDOBJ **)v72 + 271) != v71 )
            {
              XDCOBJ::LogUmpdCallbackStatus((DEVLOCKBLTOBJ *)((char *)this + 120), v71);
              _InterlockedDecrement((volatile signed __int32 *)*v8 + 3);
              *v8 = 0LL;
              goto LABEL_196;
            }
            v73 = *v8;
            if ( *((_DWORD *)this + 33) )
            {
              if ( (*(_DWORD *)(*((_QWORD *)v73 + 6) + 40LL) & 0x8000) != 0 )
              {
                v74 = *((_DWORD *)v73 + 528);
                if ( v74 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
                  goto LABEL_196;
                v73 = *v8;
              }
              _InterlockedDecrement((volatile signed __int32 *)v73 + 3);
              *v8 = 0LL;
            }
            else if ( *((_DWORD *)v73 + 528) )
            {
              *((_DWORD *)v73 + 528) = 0;
            }
          }
          else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
          {
            PsGetWin32KFilterSet();
          }
LABEL_196:
          if ( !*v8 )
            goto LABEL_203;
          if ( (*((_DWORD *)*v8 + 11) & 2) == 0 )
          {
            v17 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120)) == 0;
            v75 = *v8;
            if ( v17 )
            {
              _InterlockedDecrement((volatile signed __int32 *)v75 + 3);
              *v8 = 0LL;
LABEL_203:
              v76 = *(_QWORD *)(v65 + 1400);
              if ( *v8 && *((_BYTE *)this + 169) )
              {
                v77 = *(_DWORD *)(*(_QWORD *)v47 + 36LL);
                if ( (v77 & 1) != 0 && (v77 & 0x4000) == 0 && v76 && !*((_QWORD *)this + 30) )
                {
                  *((_DWORD *)*v8 + 9) |= 0x4000u;
                  DC::pSurface(*v8, (struct SURFACE *)(v76 - 24));
                  *((_DWORD *)this + 28) |= 0x10u;
                }
                v78 = *v8;
                if ( *v8 )
                {
                  if ( *((_BYTE *)this + 169) )
                  {
                    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
                    {
                      v79 = *((_QWORD *)v78 + 62);
                      if ( v79 )
                      {
                        v80 = SURFACE::Map(*((_QWORD *)v78 + 62), this);
                        v81 = v80;
                        if ( v80 <= 1 )
                        {
                          if ( (*(_DWORD *)(v79 + 112) & 0x800) != 0
                            && *(_QWORD *)(v79 + 248)
                            && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                          {
                            *((_DWORD *)this + 28) |= 0x400u;
                          }
                          if ( (*(_DWORD *)(v79 + 112) & 0x10) != 0
                            && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                          {
                            *((_DWORD *)this + 28) |= 0x2000u;
                          }
                          if ( v81 == 1 )
                            *((_DWORD *)this + 28) |= 0x40u;
                        }
                        else if ( v80 == 2 )
                        {
                          *((_DWORD *)*v8 + 11) |= 1u;
                          *((_DWORD *)this + 28) &= ~1u;
                          return 0LL;
                        }
                      }
                    }
                  }
                }
                goto LABEL_335;
              }
              v64 = 0;
              goto LABEL_227;
            }
            *((_DWORD *)v75 + 11) |= 2u;
            *((_DWORD *)this + 32) = 1;
          }
          if ( (*((_DWORD *)*v8 + 130) & 4) != 0 )
            DC::vMarkTransformDirty(*v8);
          goto LABEL_203;
        }
        v50 = 1;
LABEL_174:
        *v9 = 0LL;
        goto LABEL_175;
      }
      *((_DWORD *)v59 + 11) |= 2u;
      *((_DWORD *)this + 46) = 1;
    }
    if ( (*((_DWORD *)*v9 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(*v9);
    goto LABEL_158;
  }
  if ( (*((_DWORD *)v48 + 9) & 0x200) == 0 )
    goto LABEL_283;
  v82 = *((_QWORD *)v48 + 6);
  LOBYTE(v46) = 1;
  v83 = HmgLockEx(*(_QWORD *)v48, v46, *((unsigned int *)this + 33));
  *v8 = (DC *)v83;
  if ( v83 )
  {
    v84 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v84 && (v85 = *v84) != 0 && (v86 = *(_QWORD *)(v85 + 40), v86 != v85 + 40) )
      v87 = (struct UMPDOBJ *)(v86 - 40);
    else
      v87 = 0LL;
    v88 = *v8;
    if ( *((_WORD *)*v8 + 6) == 1 )
    {
      *((_QWORD *)v88 + 271) = v87;
      *((_DWORD *)*v8 + 544) = 0xFFFF;
    }
    else if ( *((struct UMPDOBJ **)v88 + 271) != v87 )
    {
      XDCOBJ::LogUmpdCallbackStatus((DEVLOCKBLTOBJ *)((char *)this + 120), v87);
      _InterlockedDecrement((volatile signed __int32 *)*v8 + 3);
      *v8 = 0LL;
      goto LABEL_251;
    }
    v89 = *v8;
    if ( *((_DWORD *)this + 33) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v89 + 6) + 40LL) & 0x8000) != 0 )
      {
        v90 = *((_DWORD *)v89 + 528);
        if ( v90 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          goto LABEL_251;
        v89 = *v8;
      }
      _InterlockedDecrement((volatile signed __int32 *)v89 + 3);
      *v8 = 0LL;
    }
    else if ( *((_DWORD *)v89 + 528) )
    {
      *((_DWORD *)v89 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
LABEL_251:
  if ( *v8 )
  {
    if ( (*((_DWORD *)*v8 + 11) & 2) == 0 )
    {
      v17 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120)) == 0;
      v91 = *v8;
      if ( v17 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v91 + 3);
        *v8 = 0LL;
        goto LABEL_258;
      }
      *((_DWORD *)v91 + 11) |= 2u;
      *((_DWORD *)this + 32) = 1;
    }
    if ( (*((_DWORD *)*v8 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(*v8);
  }
LABEL_258:
  v92 = *(_QWORD *)(v82 + 1400);
  if ( !*v8 || !*((_BYTE *)this + 169) )
  {
    v50 = 1;
LABEL_283:
    *v8 = 0LL;
    goto LABEL_284;
  }
  v93 = *(_DWORD *)(*(_QWORD *)v47 + 36LL);
  if ( (v93 & 1) != 0 && (v93 & 0x4000) == 0 && v92 && !*((_QWORD *)this + 30) )
  {
    *((_DWORD *)*v8 + 9) |= 0x4000u;
    DC::pSurface(*v8, (struct SURFACE *)(v92 - 24));
    *((_DWORD *)this + 28) |= 0x10u;
  }
  v94 = *v8;
  if ( *v8 )
  {
    if ( *((_BYTE *)this + 169) )
    {
      if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
      {
        v95 = *((_QWORD *)v94 + 62);
        if ( v95 )
        {
          v96 = SURFACE::Map(*((_QWORD *)v94 + 62), this);
          v97 = v96;
          if ( v96 <= 1 )
          {
            if ( (*(_DWORD *)(v95 + 112) & 0x800) != 0
              && *(_QWORD *)(v95 + 248)
              && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120)) )
            {
              *((_DWORD *)this + 28) |= 0x400u;
            }
            if ( (*(_DWORD *)(v95 + 112) & 0x10) != 0
              && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120)) )
            {
              *((_DWORD *)this + 28) |= 0x2000u;
            }
            if ( v97 == 1 )
              *((_DWORD *)this + 28) |= 0x40u;
          }
          else if ( v96 == 2 )
          {
            v50 = 1;
            *((_DWORD *)*v8 + 11) |= 1u;
            goto LABEL_284;
          }
        }
      }
    }
  }
  v50 = 0;
LABEL_284:
  _InterlockedOr(v138, 0);
  v98 = *(__int64 **)a3;
  v64 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    v99 = *v98;
    LOBYTE(v98) = 1;
    v100 = HmgLockEx(v99, v98, *((unsigned int *)this + 47));
    *v9 = (DC *)v100;
    if ( v100 )
    {
      v101 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( v101 && (v102 = *v101) != 0 && (v103 = *(_QWORD *)(v102 + 40), v103 != v102 + 40) )
        v104 = (struct UMPDOBJ *)(v103 - 40);
      else
        v104 = 0LL;
      v105 = *v9;
      if ( *((_WORD *)*v9 + 6) == 1 )
      {
        *((_QWORD *)v105 + 271) = v104;
        *((_DWORD *)*v9 + 544) = 0xFFFF;
      }
      else if ( *((struct UMPDOBJ **)v105 + 271) != v104 )
      {
        XDCOBJ::LogUmpdCallbackStatus((DEVLOCKBLTOBJ *)((char *)this + 176), v104);
        _InterlockedDecrement((volatile signed __int32 *)*v9 + 3);
        *v9 = 0LL;
        goto LABEL_305;
      }
      v106 = *v9;
      if ( *((_DWORD *)this + 47) )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v106 + 6) + 40LL) & 0x8000) != 0 )
        {
          v107 = *((_DWORD *)v106 + 528);
          if ( v107 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
            goto LABEL_305;
          v106 = *v9;
        }
        _InterlockedDecrement((volatile signed __int32 *)v106 + 3);
        *v9 = 0LL;
      }
      else if ( *((_DWORD *)v106 + 528) )
      {
        *((_DWORD *)v106 + 528) = 0;
      }
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
LABEL_305:
    if ( !*v9 )
      goto LABEL_312;
    if ( (*((_DWORD *)*v9 + 11) & 2) == 0 )
    {
      v17 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 176)) == 0;
      v108 = *v9;
      if ( v17 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v108 + 3);
        *v9 = 0LL;
LABEL_312:
        if ( *v9 && *((_BYTE *)this + 225) )
        {
          v109 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v109 & 1) != 0 && (v109 & 0x4000) == 0 && *((_QWORD *)this + 29) && !*((_QWORD *)this + 33) )
          {
            *((_DWORD *)*v9 + 9) |= 0x4000u;
            DC::pSurface(*v9, *((struct SURFACE **)this + 29));
            *((_DWORD *)this + 28) |= 0x20u;
          }
          if ( *v9 )
          {
            if ( *((_BYTE *)this + 225) )
            {
              if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
              {
                v110 = *((_QWORD *)*v9 + 62);
                if ( v110 )
                {
                  v111 = SURFACE::Map(v110, this);
                  if ( v111 == 2 )
                  {
                    *((_DWORD *)*v9 + 11) |= 1u;
                    *((_DWORD *)this + 28) &= ~1u;
                    return 0LL;
                  }
                  if ( v111 == 1 )
                    *((_DWORD *)this + 28) |= 0x80u;
                }
              }
            }
          }
          goto LABEL_335;
        }
        v64 = 0;
        goto LABEL_328;
      }
      *((_DWORD *)v108 + 11) |= 2u;
      *((_DWORD *)this + 46) = 1;
    }
    if ( (*((_DWORD *)*v9 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(*v9);
    goto LABEL_312;
  }
LABEL_328:
  *v9 = 0LL;
LABEL_228:
  if ( !v64 )
    goto LABEL_229;
LABEL_335:
  if ( v50 )
    goto LABEL_229;
  v38 = *(DC **)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 40LL) & 0x8000) != 0
    && *(_QWORD *)(*(_QWORD *)v47 + 496LL)
    && *(_QWORD *)this )
  {
    goto LABEL_229;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v47 + 48LL) + 40LL) & 0x8000) == 0 )
    goto LABEL_361;
  v38 = (DC *)*((_QWORD *)v38 + 62);
  if ( !v38 || !*((_QWORD *)this + 1) )
    goto LABEL_361;
  if ( !bCopySurface((DEVLOCKBLTOBJ *)((char *)this + 40), (struct _SURFOBJ *)((char *)v38 + 24)) )
  {
LABEL_229:
    *((_DWORD *)this + 28) &= ~1u;
    return 0LL;
  }
  SURFREF::SURFREF((SURFREF *)v139, *(HSURF *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 32LL));
  if ( hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL, 0LL) )
  {
    v115 = v140;
    *((_QWORD *)this + 13) = a3;
    *((_QWORD *)this + 12) = *(_QWORD *)(v115 + 32);
    INC_SHARE_REF_CNT(v115);
  }
  else
  {
    v112 = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !v112 || *(_QWORD *)(v112 + 384) )
    {
      *((_DWORD *)this + 28) &= ~1u;
      if ( v140 )
        DEC_SHARE_REF_CNT(v140);
      UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v139);
      return 0LL;
    }
    v113 = *((_QWORD *)this + 5);
    v114 = v113 + 24;
    if ( !v113 )
      v114 = 0LL;
    *(_QWORD *)(v112 + 384) = v114;
  }
  if ( !*((_DWORD *)this + 22) )
  {
    PushThreadGuardedObject((char *)this + 56, this, DEVLOCKBLTOBJ::TmpSrcThreadCleanup);
    *((_DWORD *)this + 22) = 1;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsemSrc");
  GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  v116 = *((_QWORD *)this + 2);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  if ( v116 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( v140 )
    DEC_SHARE_REF_CNT(v140);
  UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v139);
LABEL_361:
  v117 = *((_DWORD *)this + 28);
  if ( (v117 & 0x1000) == 0 && (v117 & 0x800000) == 0 )
    return 1LL;
  v118 = *v8;
  if ( *v8 )
    goto LABEL_393;
  LOBYTE(v38) = 1;
  v119 = HmgLockEx(**(_QWORD **)v47, v38, *((unsigned int *)this + 33));
  *v8 = (DC *)v119;
  if ( v119 )
  {
    v120 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v120 && (v121 = *v120) != 0 && (v122 = *(_QWORD *)(v121 + 40), v122 != v121 + 40) )
      v123 = (struct UMPDOBJ *)(v122 - 40);
    else
      v123 = 0LL;
    v124 = *v8;
    if ( *((_WORD *)*v8 + 6) == 1 )
    {
      *((_QWORD *)v124 + 271) = v123;
      *((_DWORD *)*v8 + 544) = 0xFFFF;
    }
    else if ( *((struct UMPDOBJ **)v124 + 271) != v123 )
    {
      XDCOBJ::LogUmpdCallbackStatus((DEVLOCKBLTOBJ *)((char *)this + 120), v123);
      _InterlockedDecrement((volatile signed __int32 *)*v8 + 3);
      *v8 = 0LL;
      goto LABEL_384;
    }
    v38 = *v8;
    if ( *((_DWORD *)this + 33) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v38 + 6) + 40LL) & 0x8000) != 0 )
      {
        v125 = *((_DWORD *)v38 + 528);
        if ( v125 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          goto LABEL_384;
        v38 = *v8;
      }
      _InterlockedDecrement((volatile signed __int32 *)v38 + 3);
      *v8 = 0LL;
    }
    else if ( *((_DWORD *)v38 + 528) )
    {
      *((_DWORD *)v38 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
LABEL_384:
  if ( *v8 )
  {
    if ( (*((_DWORD *)*v8 + 11) & 2) == 0 )
    {
      v17 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120)) == 0;
      v126 = *v8;
      if ( v17 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v126 + 3);
        *v8 = 0LL;
        goto LABEL_391;
      }
      *((_DWORD *)v126 + 11) |= 2u;
      *((_DWORD *)this + 32) = 1;
    }
    if ( (*((_DWORD *)*v8 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(*v8);
  }
LABEL_391:
  v118 = *v8;
  if ( !*v8 )
    goto LABEL_394;
  *((_BYTE *)this + 169) = 0;
LABEL_393:
  *((_DWORD *)v118 + 10) |= 2u;
  *((_BYTE *)this + 168) = 1;
LABEL_394:
  v127 = **(_QWORD **)a3;
  if ( v127 == **(_QWORD **)v47 )
    return 1LL;
  v128 = *v9;
  if ( *v9 )
  {
LABEL_425:
    *((_DWORD *)v128 + 10) |= 2u;
    *((_BYTE *)this + 224) = 1;
    return 1LL;
  }
  LOBYTE(v38) = 1;
  v129 = HmgLockEx(v127, v38, *((unsigned int *)this + 47));
  *v9 = (DC *)v129;
  if ( v129 )
  {
    v130 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v130 && (v131 = *v130) != 0 && (v132 = *(_QWORD *)(v131 + 40), v132 != v131 + 40) )
      v133 = (struct UMPDOBJ *)(v132 - 40);
    else
      v133 = 0LL;
    v134 = *v9;
    if ( *((_WORD *)*v9 + 6) == 1 )
    {
      *((_QWORD *)v134 + 271) = v133;
      *((_DWORD *)*v9 + 544) = 0xFFFF;
    }
    else if ( *((struct UMPDOBJ **)v134 + 271) != v133 )
    {
      XDCOBJ::LogUmpdCallbackStatus((DEVLOCKBLTOBJ *)((char *)this + 176), v133);
      _InterlockedDecrement((volatile signed __int32 *)*v9 + 3);
      *v9 = 0LL;
      goto LABEL_416;
    }
    v135 = *v9;
    if ( *((_DWORD *)this + 47) )
    {
      if ( (*(_DWORD *)(*((_QWORD *)v135 + 6) + 40LL) & 0x8000) != 0 )
      {
        v136 = *((_DWORD *)v135 + 528);
        if ( v136 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          goto LABEL_416;
        v135 = *v9;
      }
      _InterlockedDecrement((volatile signed __int32 *)v135 + 3);
      *v9 = 0LL;
    }
    else if ( *((_DWORD *)v135 + 528) )
    {
      *((_DWORD *)v135 + 528) = 0;
    }
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
LABEL_416:
  if ( !*v9 )
    goto LABEL_423;
  if ( (*((_DWORD *)*v9 + 11) & 2) == 0 )
  {
    v17 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 176)) == 0;
    v137 = *v9;
    if ( v17 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v137 + 3);
      *v9 = 0LL;
      goto LABEL_423;
    }
    *((_DWORD *)v137 + 11) |= 2u;
    *((_DWORD *)this + 46) = 1;
  }
  if ( (*((_DWORD *)*v9 + 130) & 4) != 0 )
    DC::vMarkTransformDirty(*v9);
LABEL_423:
  v128 = *v9;
  if ( *v9 )
  {
    *((_BYTE *)this + 225) = 0;
    goto LABEL_425;
  }
  return 1LL;
}
