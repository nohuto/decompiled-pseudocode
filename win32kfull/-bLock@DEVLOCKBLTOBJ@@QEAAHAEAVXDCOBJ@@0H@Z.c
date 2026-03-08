/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C005C780
 * Callers:
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     NtGdiBitBltInternal @ 0x1C005E110 (NtGdiBitBltInternal.c)
 *     GreMaskBlt @ 0x1C007F6E8 (GreMaskBlt.c)
 *     NtGdiAlphaBlend @ 0x1C0083DC0 (NtGdiAlphaBlend.c)
 *     GrePlgBlt @ 0x1C0293740 (GrePlgBlt.c)
 *     NtGdiTransparentBlt @ 0x1C029A1B0 (NtGdiTransparentBlt.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z @ 0x1C00149D0 (-bPrepareSrcDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@HH@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C005DF10 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00D2120 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z @ 0x1C00DEA84 (-bPrepareTrgDco@DEVLOCKBLTOBJ@@QEAAHPEAVXDCOBJ@@H@Z.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C00F5BEC (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x1C026E61C (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A5774 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
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
  __int64 v54; // rcx
  struct UMPDOBJ *v55; // rax
  DC *v56; // rdx
  int v57; // ebx
  DC *v58; // rax
  int v59; // ecx
  __int64 v60; // rcx
  int v61; // eax
  __int64 *v62; // rdx
  int v63; // ecx
  __int64 v64; // rbx
  __int64 v65; // rcx
  __int64 v66; // rax
  __int64 *v67; // rax
  __int64 v68; // rax
  __int64 v69; // rcx
  struct UMPDOBJ *v70; // rax
  DC *v71; // rdx
  int v72; // edi
  DC *v73; // rax
  __int64 v74; // rdx
  int v75; // ecx
  DC *v76; // r8
  __int64 v77; // rbx
  unsigned int v78; // eax
  unsigned int v79; // edi
  __int64 v80; // rbx
  __int64 v81; // rax
  __int64 *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  struct UMPDOBJ *v85; // rax
  DC *v86; // rdx
  int v87; // edi
  DC *v88; // rax
  __int64 v89; // rdx
  int v90; // ecx
  DC *v91; // r8
  __int64 v92; // rbx
  unsigned int v93; // eax
  unsigned int v94; // edi
  __int64 *v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rax
  __int64 *v98; // rax
  __int64 v99; // rax
  __int64 v100; // rcx
  struct UMPDOBJ *v101; // rax
  DC *v102; // rdx
  int v103; // ebx
  DC *v104; // rax
  int v105; // ecx
  __int64 v106; // rcx
  int v107; // eax
  __int64 v108; // rdx
  __int64 v109; // rbx
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rdx
  int v113; // eax
  DC *v114; // rax
  __int64 v115; // rax
  __int64 *v116; // rax
  __int64 v117; // rax
  __int64 v118; // rcx
  struct UMPDOBJ *v119; // rax
  int v120; // ebx
  DC *v121; // rax
  __int64 v122; // rcx
  DC *v123; // rax
  __int64 v124; // rax
  __int64 *v125; // rax
  __int64 v126; // rax
  __int64 v127; // rcx
  struct UMPDOBJ *v128; // rax
  DC *v129; // rdx
  int v130; // ebx
  DC *v131; // rax
  signed __int32 v132[22]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v133; // [rsp+60h] [rbp+8h] BYREF
  struct XDCOBJ *v134; // [rsp+68h] [rbp+10h]
  __int64 v135; // [rsp+70h] [rbp+18h] BYREF

  v134 = a2;
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
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = **(_QWORD **)a2;
  *((_QWORD *)this + 27) = **(_QWORD **)a3;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 23, (HSURF *)this + 22, (unsigned int *)this + 29)
    || !TrapAppContainerRenderingWorker(a3, (HSURF *)this + 26, (HSURF *)this + 25, 0LL) )
  {
    return 0LL;
  }
  v8 = (DC **)((char *)this + 120);
  v9 = (DC **)((char *)this + 144);
  *((_QWORD *)this + 15) = 0LL;
  *((_QWORD *)this + 18) = 0LL;
  v11 = Gre::Base::Globals(v7);
  if ( *(_QWORD *)a3 && (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    v12 = v134;
  }
  else
  {
    v12 = v134;
    if ( !*(_QWORD *)v134 || (*(_DWORD *)(*(_QWORD *)v134 + 36LL) & 0x200) == 0 )
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
      v133 = v13[6];
      v6 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v133);
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
  if ( *(_QWORD *)v134 )
  {
    v135 = *(_QWORD *)(*(_QWORD *)v134 + 48LL);
    v6 &= PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v135);
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
    if ( (!*(_QWORD *)v134 || (*(_DWORD *)(*(_QWORD *)v134 + 36LL) & 0x200) == 0)
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
  v26 = *(_QWORD **)v134;
  if ( *(_QWORD *)v134 )
  {
    v28 = *((_DWORD *)v26 + 9);
    if ( (v28 & 0x200) != 0 )
    {
      if ( (v28 & 0x8000) != 0 && v6 )
      {
        v30 = v134;
      }
      else
      {
        v29 = v26[8];
        v30 = v134;
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
  v37 = v134;
  v38 = (DC *)(*(_DWORD *)(*(_QWORD *)v134 + 36LL) & 0x200);
  if ( (*(_DWORD *)(*(_QWORD *)v134 + 36LL) & 0x200) != 0 || (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_117;
    if ( (_DWORD)v38 )
    {
      if ( *((_QWORD *)this + 22) )
        UserIsCurrentProcessImmersiveAppContainer(v10);
      else
        DC::vSetRendering(*(DC **)v134);
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
      if ( *((_QWORD *)this + 25) )
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
    v47 = v134;
    goto LABEL_347;
  }
  if ( *(_QWORD *)a3 )
    v46 = *(_QWORD *)(*(_QWORD *)a3 + 496LL);
  else
    v46 = 0LL;
  v47 = v134;
  v48 = *(DC **)v134;
  if ( *(_QWORD *)v134 )
    v49 = *((_QWORD *)v48 + 62);
  else
    v49 = 0LL;
  v50 = 0;
  if ( !v46 || !v49 || v46 == v49 )
  {
    if ( v48 && !(unsigned int)DEVLOCKBLTOBJ::bPrepareTrgDco(this, v134, 1) )
      v50 = 1;
    if ( (!*(_QWORD *)v47 || **(_QWORD **)v47 != **(_QWORD **)a3)
      && !(unsigned int)DEVLOCKBLTOBJ::bPrepareSrcDco(this, a3, v45, 0) )
    {
      goto LABEL_223;
    }
    goto LABEL_323;
  }
  if ( v46 < v49 )
  {
    *((_DWORD *)this + 28) = v45 | 0x8000;
    if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) == 0 )
      goto LABEL_171;
    LOBYTE(v46) = 1;
    v51 = HmgLockEx(**(_QWORD **)a3, v46, *((unsigned int *)this + 39));
    *v9 = (DC *)v51;
    if ( v51 )
    {
      v52 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( !v52
        || (v53 = *v52) == 0
        || (v54 = *(_QWORD *)(v53 + 40), v17 = v54 == v53 + 40, v55 = (struct UMPDOBJ *)(v54 - 40), v17) )
      {
        v55 = 0LL;
      }
      v56 = *v9;
      if ( *((_WORD *)*v9 + 6) == 1 )
      {
        *((_QWORD *)v56 + 271) = v55;
        *((_DWORD *)*v9 + 544) = 0xFFFF;
        v56 = *v9;
      }
      else if ( *((struct UMPDOBJ **)v56 + 271) != v55 )
      {
        XDCOBJ::LogUmpdCallbackStatus((DEVLOCKBLTOBJ *)((char *)this + 144), v55);
        _InterlockedDecrement((volatile signed __int32 *)*v9 + 3);
        *v9 = 0LL;
        goto LABEL_148;
      }
      if ( !*((_DWORD *)this + 39) )
        goto LABEL_148;
      if ( (*(_DWORD *)(*((_QWORD *)v56 + 6) + 40LL) & 0x8000) != 0 )
      {
        v57 = *((_DWORD *)v56 + 528);
        if ( v57 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          goto LABEL_148;
        v56 = *v9;
      }
      _InterlockedDecrement((volatile signed __int32 *)v56 + 3);
      *v9 = 0LL;
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
LABEL_148:
    if ( !*v9 )
      goto LABEL_155;
    if ( (*((_DWORD *)*v9 + 11) & 2) == 0 )
    {
      v17 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 144)) == 0;
      v58 = *v9;
      if ( v17 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v58 + 3);
        *v9 = 0LL;
LABEL_155:
        if ( *v9 && *((_BYTE *)this + 161) )
        {
          v59 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v59 & 1) != 0 && (v59 & 0x4000) == 0 && *((_QWORD *)this + 21) && !*((_QWORD *)this + 25) )
          {
            *((_DWORD *)*v9 + 9) |= 0x4000u;
            DC::pSurface(*v9, *((struct SURFACE **)this + 21));
            *((_DWORD *)this + 28) |= 0x20u;
          }
          if ( *v9 )
          {
            if ( *((_BYTE *)this + 161) )
            {
              if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
              {
                v60 = *((_QWORD *)*v9 + 62);
                if ( v60 )
                {
                  v61 = SURFACE::Map(v60, this);
                  if ( v61 == 2 )
                  {
                    v50 = 1;
                    *((_DWORD *)*v9 + 11) |= 1u;
                  }
                  else if ( v61 == 1 )
                  {
                    *((_DWORD *)this + 28) |= 0x80u;
                  }
                }
              }
            }
          }
LABEL_172:
          _InterlockedOr(v132, 0);
          v62 = *(__int64 **)v47;
          v63 = 1;
          if ( (*(_DWORD *)(*(_QWORD *)v47 + 36LL) & 0x200) == 0 )
          {
LABEL_221:
            *v8 = 0LL;
            goto LABEL_222;
          }
          v64 = v62[6];
          v65 = *v62;
          LOBYTE(v62) = 1;
          v66 = HmgLockEx(v65, v62, *((unsigned int *)this + 33));
          *v8 = (DC *)v66;
          if ( v66 )
          {
            v67 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
            if ( !v67
              || (v68 = *v67) == 0
              || (v69 = *(_QWORD *)(v68 + 40), v17 = v69 == v68 + 40, v70 = (struct UMPDOBJ *)(v69 - 40), v17) )
            {
              v70 = 0LL;
            }
            v71 = *v8;
            if ( *((_WORD *)*v8 + 6) == 1 )
            {
              *((_QWORD *)v71 + 271) = v70;
              *((_DWORD *)*v8 + 544) = 0xFFFF;
              v71 = *v8;
            }
            else if ( *((struct UMPDOBJ **)v71 + 271) != v70 )
            {
              XDCOBJ::LogUmpdCallbackStatus((DEVLOCKBLTOBJ *)((char *)this + 120), v70);
              _InterlockedDecrement((volatile signed __int32 *)*v8 + 3);
              *v8 = 0LL;
              goto LABEL_190;
            }
            if ( !*((_DWORD *)this + 33) )
              goto LABEL_190;
            if ( (*(_DWORD *)(*((_QWORD *)v71 + 6) + 40LL) & 0x8000) != 0 )
            {
              v72 = *((_DWORD *)v71 + 528);
              if ( v72 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
                goto LABEL_190;
              v71 = *v8;
            }
            _InterlockedDecrement((volatile signed __int32 *)v71 + 3);
            *v8 = 0LL;
          }
          else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
          {
            PsGetWin32KFilterSet();
          }
LABEL_190:
          if ( !*v8 )
            goto LABEL_197;
          if ( (*((_DWORD *)*v8 + 11) & 2) == 0 )
          {
            v17 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120)) == 0;
            v73 = *v8;
            if ( v17 )
            {
              _InterlockedDecrement((volatile signed __int32 *)v73 + 3);
              *v8 = 0LL;
LABEL_197:
              v74 = *(_QWORD *)(v64 + 1400);
              if ( *v8 && *((_BYTE *)this + 137) )
              {
                v75 = *(_DWORD *)(*(_QWORD *)v47 + 36LL);
                if ( (v75 & 1) != 0 && (v75 & 0x4000) == 0 && v74 && !*((_QWORD *)this + 22) )
                {
                  *((_DWORD *)*v8 + 9) |= 0x4000u;
                  DC::pSurface(*v8, (struct SURFACE *)(v74 - 24));
                  *((_DWORD *)this + 28) |= 0x10u;
                }
                v76 = *v8;
                if ( *v8 )
                {
                  if ( *((_BYTE *)this + 137) )
                  {
                    if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
                    {
                      v77 = *((_QWORD *)v76 + 62);
                      if ( v77 )
                      {
                        v78 = SURFACE::Map(*((_QWORD *)v76 + 62), this);
                        v79 = v78;
                        if ( v78 <= 1 )
                        {
                          if ( (*(_DWORD *)(v77 + 112) & 0x800) != 0
                            && *(_QWORD *)(v77 + 248)
                            && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                          {
                            *((_DWORD *)this + 28) |= 0x400u;
                          }
                          if ( (*(_DWORD *)(v77 + 112) & 0x10) != 0
                            && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120)) )
                          {
                            *((_DWORD *)this + 28) |= 0x2000u;
                          }
                          if ( v79 == 1 )
                            *((_DWORD *)this + 28) |= 0x40u;
                        }
                        else if ( v78 == 2 )
                        {
                          *((_DWORD *)*v8 + 11) |= 1u;
                          *((_DWORD *)this + 28) &= ~1u;
                          return 0LL;
                        }
                      }
                    }
                  }
                }
                goto LABEL_323;
              }
              v63 = 0;
              goto LABEL_221;
            }
            *((_DWORD *)v73 + 11) |= 2u;
            *((_DWORD *)this + 32) = 1;
          }
          if ( (*((_DWORD *)*v8 + 130) & 4) != 0 )
            DC::vMarkTransformDirty(*v8);
          goto LABEL_197;
        }
        v50 = 1;
LABEL_171:
        *v9 = 0LL;
        goto LABEL_172;
      }
      *((_DWORD *)v58 + 11) |= 2u;
      *((_DWORD *)this + 38) = 1;
    }
    if ( (*((_DWORD *)*v9 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(*v9);
    goto LABEL_155;
  }
  if ( (*((_DWORD *)v48 + 9) & 0x200) == 0 )
    goto LABEL_274;
  v80 = *((_QWORD *)v48 + 6);
  LOBYTE(v46) = 1;
  v81 = HmgLockEx(*(_QWORD *)v48, v46, *((unsigned int *)this + 33));
  *v8 = (DC *)v81;
  if ( v81 )
  {
    v82 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v82
      || (v83 = *v82) == 0
      || (v84 = *(_QWORD *)(v83 + 40), v17 = v84 == v83 + 40, v85 = (struct UMPDOBJ *)(v84 - 40), v17) )
    {
      v85 = 0LL;
    }
    v86 = *v8;
    if ( *((_WORD *)*v8 + 6) == 1 )
    {
      *((_QWORD *)v86 + 271) = v85;
      *((_DWORD *)*v8 + 544) = 0xFFFF;
      v86 = *v8;
    }
    else if ( *((struct UMPDOBJ **)v86 + 271) != v85 )
    {
      XDCOBJ::LogUmpdCallbackStatus((DEVLOCKBLTOBJ *)((char *)this + 120), v85);
      _InterlockedDecrement((volatile signed __int32 *)*v8 + 3);
      *v8 = 0LL;
      goto LABEL_242;
    }
    if ( !*((_DWORD *)this + 33) )
      goto LABEL_242;
    if ( (*(_DWORD *)(*((_QWORD *)v86 + 6) + 40LL) & 0x8000) != 0 )
    {
      v87 = *((_DWORD *)v86 + 528);
      if ( v87 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_242;
      v86 = *v8;
    }
    _InterlockedDecrement((volatile signed __int32 *)v86 + 3);
    *v8 = 0LL;
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
LABEL_242:
  if ( *v8 )
  {
    if ( (*((_DWORD *)*v8 + 11) & 2) == 0 )
    {
      v17 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120)) == 0;
      v88 = *v8;
      if ( v17 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v88 + 3);
        *v8 = 0LL;
        goto LABEL_249;
      }
      *((_DWORD *)v88 + 11) |= 2u;
      *((_DWORD *)this + 32) = 1;
    }
    if ( (*((_DWORD *)*v8 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(*v8);
  }
LABEL_249:
  v89 = *(_QWORD *)(v80 + 1400);
  if ( !*v8 || !*((_BYTE *)this + 137) )
  {
    v50 = 1;
LABEL_274:
    *v8 = 0LL;
    goto LABEL_275;
  }
  v90 = *(_DWORD *)(*(_QWORD *)v47 + 36LL);
  if ( (v90 & 1) != 0 && (v90 & 0x4000) == 0 && v89 && !*((_QWORD *)this + 22) )
  {
    *((_DWORD *)*v8 + 9) |= 0x4000u;
    DC::pSurface(*v8, (struct SURFACE *)(v89 - 24));
    *((_DWORD *)this + 28) |= 0x10u;
  }
  v91 = *v8;
  if ( *v8 )
  {
    if ( *((_BYTE *)this + 137) )
    {
      if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
      {
        v92 = *((_QWORD *)v91 + 62);
        if ( v92 )
        {
          v93 = SURFACE::Map(*((_QWORD *)v91 + 62), this);
          v94 = v93;
          if ( v93 <= 1 )
          {
            if ( (*(_DWORD *)(v92 + 112) & 0x800) != 0
              && *(_QWORD *)(v92 + 248)
              && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120)) )
            {
              *((_DWORD *)this + 28) |= 0x400u;
            }
            if ( (*(_DWORD *)(v92 + 112) & 0x10) != 0
              && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120)) )
            {
              *((_DWORD *)this + 28) |= 0x2000u;
            }
            if ( v94 == 1 )
              *((_DWORD *)this + 28) |= 0x40u;
          }
          else if ( v93 == 2 )
          {
            v50 = 1;
            *((_DWORD *)*v8 + 11) |= 1u;
            goto LABEL_275;
          }
        }
      }
    }
  }
  v50 = 0;
LABEL_275:
  _InterlockedOr(v132, 0);
  v95 = *(__int64 **)a3;
  v63 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)a3 + 36LL) & 0x200) != 0 )
  {
    v96 = *v95;
    LOBYTE(v95) = 1;
    v97 = HmgLockEx(v96, v95, *((unsigned int *)this + 39));
    *v9 = (DC *)v97;
    if ( v97 )
    {
      v98 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
      if ( !v98
        || (v99 = *v98) == 0
        || (v100 = *(_QWORD *)(v99 + 40), v17 = v100 == v99 + 40, v101 = (struct UMPDOBJ *)(v100 - 40), v17) )
      {
        v101 = 0LL;
      }
      v102 = *v9;
      if ( *((_WORD *)*v9 + 6) == 1 )
      {
        *((_QWORD *)v102 + 271) = v101;
        *((_DWORD *)*v9 + 544) = 0xFFFF;
        v102 = *v9;
      }
      else if ( *((struct UMPDOBJ **)v102 + 271) != v101 )
      {
        XDCOBJ::LogUmpdCallbackStatus((DEVLOCKBLTOBJ *)((char *)this + 144), v101);
        _InterlockedDecrement((volatile signed __int32 *)*v9 + 3);
        *v9 = 0LL;
        goto LABEL_293;
      }
      if ( !*((_DWORD *)this + 39) )
        goto LABEL_293;
      if ( (*(_DWORD *)(*((_QWORD *)v102 + 6) + 40LL) & 0x8000) != 0 )
      {
        v103 = *((_DWORD *)v102 + 528);
        if ( v103 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
          goto LABEL_293;
        v102 = *v9;
      }
      _InterlockedDecrement((volatile signed __int32 *)v102 + 3);
      *v9 = 0LL;
    }
    else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
    {
      PsGetWin32KFilterSet();
    }
LABEL_293:
    if ( !*v9 )
      goto LABEL_300;
    if ( (*((_DWORD *)*v9 + 11) & 2) == 0 )
    {
      v17 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 144)) == 0;
      v104 = *v9;
      if ( v17 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v104 + 3);
        *v9 = 0LL;
LABEL_300:
        if ( *v9 && *((_BYTE *)this + 161) )
        {
          v105 = *(_DWORD *)(*(_QWORD *)a3 + 36LL);
          if ( (v105 & 1) != 0 && (v105 & 0x4000) == 0 && *((_QWORD *)this + 21) && !*((_QWORD *)this + 25) )
          {
            *((_DWORD *)*v9 + 9) |= 0x4000u;
            DC::pSurface(*v9, *((struct SURFACE **)this + 21));
            *((_DWORD *)this + 28) |= 0x20u;
          }
          if ( *v9 )
          {
            if ( *((_BYTE *)this + 161) )
            {
              if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
              {
                v106 = *((_QWORD *)*v9 + 62);
                if ( v106 )
                {
                  v107 = SURFACE::Map(v106, this);
                  if ( v107 == 2 )
                  {
                    *((_DWORD *)*v9 + 11) |= 1u;
                    *((_DWORD *)this + 28) &= ~1u;
                    return 0LL;
                  }
                  if ( v107 == 1 )
                    *((_DWORD *)this + 28) |= 0x80u;
                }
              }
            }
          }
          goto LABEL_323;
        }
        v63 = 0;
        goto LABEL_316;
      }
      *((_DWORD *)v104 + 11) |= 2u;
      *((_DWORD *)this + 38) = 1;
    }
    if ( (*((_DWORD *)*v9 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(*v9);
    goto LABEL_300;
  }
LABEL_316:
  *v9 = 0LL;
LABEL_222:
  if ( !v63 )
    goto LABEL_223;
LABEL_323:
  if ( v50 )
    goto LABEL_223;
  v38 = *(DC **)a3;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 48LL) + 40LL) & 0x8000) != 0
    && *(_QWORD *)(*(_QWORD *)v47 + 496LL)
    && *(_QWORD *)this )
  {
    goto LABEL_223;
  }
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v47 + 48LL) + 40LL) & 0x8000) == 0 )
    goto LABEL_347;
  v38 = (DC *)*((_QWORD *)v38 + 62);
  if ( !v38 || !*((_QWORD *)this + 1) )
    goto LABEL_347;
  if ( !bCopySurface((DEVLOCKBLTOBJ *)((char *)this + 40), (struct _SURFOBJ *)((char *)v38 + 24)) )
  {
LABEL_223:
    *((_DWORD *)this + 28) &= ~1u;
    return 0LL;
  }
  LOBYTE(v108) = 5;
  v109 = HmgShareLockCheck(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a3 + 496LL) + 32LL), v108);
  if ( hbmSelectBitmap(**(_QWORD **)a3, *(_QWORD *)(*((_QWORD *)this + 5) + 32LL), 1LL, 0LL) )
  {
    *((_QWORD *)this + 13) = a3;
    *((_QWORD *)this + 12) = *(_QWORD *)(v109 + 32);
    INC_SHARE_REF_CNT(v109);
  }
  else
  {
    v110 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
    if ( !v110 || *(_QWORD *)(v110 + 384) )
    {
      *((_DWORD *)this + 28) &= ~1u;
      if ( v109 )
        DEC_SHARE_REF_CNT(v109);
      return 0LL;
    }
    v111 = *((_QWORD *)this + 5);
    v112 = v111 + 24;
    if ( !v111 )
      v112 = 0LL;
    *(_QWORD *)(v110 + 384) = v112;
  }
  if ( !*((_DWORD *)this + 22) )
  {
    PushThreadGuardedObject((char *)this + 56, this, DEVLOCKBLTOBJ::TmpSrcThreadCleanup);
    *((_DWORD *)this + 22) = 1;
  }
  EtwTraceGreLockReleaseSemaphore(L"hsemSrc");
  GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  v38 = (DC *)*((_QWORD *)this + 2);
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  if ( v38 )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  if ( v109 )
    DEC_SHARE_REF_CNT(v109);
LABEL_347:
  v113 = *((_DWORD *)this + 28);
  if ( (v113 & 0x1000) == 0 && (v113 & 0x800000) == 0 )
    return 1LL;
  v114 = *v8;
  if ( *v8 )
    goto LABEL_376;
  LOBYTE(v38) = 1;
  v115 = HmgLockEx(**(_QWORD **)v47, v38, *((unsigned int *)this + 33));
  *v8 = (DC *)v115;
  if ( v115 )
  {
    v116 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v116
      || (v117 = *v116) == 0
      || (v118 = *(_QWORD *)(v117 + 40), v17 = v118 == v117 + 40, v119 = (struct UMPDOBJ *)(v118 - 40), v17) )
    {
      v119 = 0LL;
    }
    v38 = *v8;
    if ( *((_WORD *)*v8 + 6) == 1 )
    {
      *((_QWORD *)v38 + 271) = v119;
      *((_DWORD *)*v8 + 544) = 0xFFFF;
      v38 = *v8;
    }
    else if ( *((struct UMPDOBJ **)v38 + 271) != v119 )
    {
      XDCOBJ::LogUmpdCallbackStatus((DEVLOCKBLTOBJ *)((char *)this + 120), v119);
      _InterlockedDecrement((volatile signed __int32 *)*v8 + 3);
      *v8 = 0LL;
      goto LABEL_367;
    }
    if ( !*((_DWORD *)this + 33) )
      goto LABEL_367;
    if ( (*(_DWORD *)(*((_QWORD *)v38 + 6) + 40LL) & 0x8000) != 0 )
    {
      v120 = *((_DWORD *)v38 + 528);
      if ( v120 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_367;
      v38 = *v8;
    }
    _InterlockedDecrement((volatile signed __int32 *)v38 + 3);
    *v8 = 0LL;
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
LABEL_367:
  if ( *v8 )
  {
    if ( (*((_DWORD *)*v8 + 11) & 2) == 0 )
    {
      v17 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120)) == 0;
      v121 = *v8;
      if ( v17 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v121 + 3);
        *v8 = 0LL;
        goto LABEL_374;
      }
      *((_DWORD *)v121 + 11) |= 2u;
      *((_DWORD *)this + 32) = 1;
    }
    if ( (*((_DWORD *)*v8 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(*v8);
  }
LABEL_374:
  v114 = *v8;
  if ( !*v8 )
    goto LABEL_377;
  *((_BYTE *)this + 137) = 0;
LABEL_376:
  *((_DWORD *)v114 + 10) |= 2u;
  *((_BYTE *)this + 136) = 1;
LABEL_377:
  v122 = **(_QWORD **)a3;
  if ( v122 == **(_QWORD **)v47 )
    return 1LL;
  v123 = *v9;
  if ( *v9 )
  {
LABEL_405:
    *((_DWORD *)v123 + 10) |= 2u;
    *((_BYTE *)this + 160) = 1;
    return 1LL;
  }
  LOBYTE(v38) = 1;
  v124 = HmgLockEx(v122, v38, *((unsigned int *)this + 39));
  *v9 = (DC *)v124;
  if ( v124 )
  {
    v125 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v125
      || (v126 = *v125) == 0
      || (v127 = *(_QWORD *)(v126 + 40), v17 = v127 == v126 + 40, v128 = (struct UMPDOBJ *)(v127 - 40), v17) )
    {
      v128 = 0LL;
    }
    v129 = *v9;
    if ( *((_WORD *)*v9 + 6) == 1 )
    {
      *((_QWORD *)v129 + 271) = v128;
      *((_DWORD *)*v9 + 544) = 0xFFFF;
      v129 = *v9;
    }
    else if ( *((struct UMPDOBJ **)v129 + 271) != v128 )
    {
      XDCOBJ::LogUmpdCallbackStatus((DEVLOCKBLTOBJ *)((char *)this + 144), v128);
      _InterlockedDecrement((volatile signed __int32 *)*v9 + 3);
      *v9 = 0LL;
      goto LABEL_396;
    }
    if ( !*((_DWORD *)this + 39) )
      goto LABEL_396;
    if ( (*(_DWORD *)(*((_QWORD *)v129 + 6) + 40LL) & 0x8000) != 0 )
    {
      v130 = *((_DWORD *)v129 + 528);
      if ( v130 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_396;
      v129 = *v9;
    }
    _InterlockedDecrement((volatile signed __int32 *)v129 + 3);
    *v9 = 0LL;
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
LABEL_396:
  if ( !*v9 )
    goto LABEL_403;
  if ( (*((_DWORD *)*v9 + 11) & 2) == 0 )
  {
    v17 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 144)) == 0;
    v131 = *v9;
    if ( v17 )
    {
      _InterlockedDecrement((volatile signed __int32 *)v131 + 3);
      *v9 = 0LL;
      goto LABEL_403;
    }
    *((_DWORD *)v131 + 11) |= 2u;
    *((_DWORD *)this + 38) = 1;
  }
  if ( (*((_DWORD *)*v9 + 130) & 4) != 0 )
    DC::vMarkTransformDirty(*v9);
LABEL_403:
  v123 = *v9;
  if ( *v9 )
  {
    *((_BYTE *)this + 161) = 0;
    goto LABEL_405;
  }
  return 1LL;
}
