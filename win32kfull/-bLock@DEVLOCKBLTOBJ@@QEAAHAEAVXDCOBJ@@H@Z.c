/*
 * XREFs of ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002180
 * Callers:
 *     GreGradientFill @ 0x1C0001610 (GreGradientFill.c)
 *     GreStretchBltInternal @ 0x1C0059930 (GreStretchBltInternal.c)
 *     GreMaskBlt @ 0x1C007F6E8 (GreMaskBlt.c)
 *     ?GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z @ 0x1C029CA5C (-GreRectBlt@@YAHAEAVDCOBJ@@PEAVERECTL@@@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ?vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z @ 0x1C0050964 (-vLock@XDCOBJ@@IEAAXPEAUHDC__@@@Z.c)
 *     ?vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z @ 0x1C0055220 (-vClearRenderState@DEVLOCKBLTOBJ@@QEAAXAEAVXDCOBJ@@@Z.c)
 *     ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C005DF10 (-TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z.c)
 *     ?bHookRedir@@YAHAEAVXDCOBJ@@@Z @ 0x1C00D2120 (-bHookRedir@@YAHAEAVXDCOBJ@@@Z.c)
 *     ?bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ @ 0x1C00D50B8 (-bUnMapSrcSurfaceView@DEVLOCKBLTOBJ@@QEAAHXZ.c)
 *     ?SaveAttributesHelper@XDCOBJ@@AEAAHXZ @ 0x1C00F5BEC (-SaveAttributesHelper@XDCOBJ@@AEAAHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C011354C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vMarkTransformDirty@DC@@QEAAXXZ @ 0x1C0269660 (-vMarkTransformDirty@DC@@QEAAXXZ.c)
 *     ?bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z @ 0x1C02A5774 (-bHookBmpDrv@@YAHAEAVXDCOBJ@@@Z.c)
 */

__int64 __fastcall DEVLOCKBLTOBJ::bLock(DEVLOCKBLTOBJ *this, struct XDCOBJ *a2)
{
  int v4; // ebp
  Gre::Base *v5; // rcx
  DC **v6; // r14
  struct Gre::Base::SESSION_GLOBALS *v7; // rax
  struct Gre::Base::SESSION_GLOBALS *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r8
  int v12; // edx
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rax
  bool v15; // zf
  __int64 *v17; // rax
  __int64 v18; // rdi
  Gre::Base *v19; // rcx
  __int64 *v20; // rdx
  int v21; // ecx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  struct UMPDOBJ *v28; // rax
  DC *v29; // rdx
  int v30; // edi
  DC *v31; // rax
  __int64 v32; // rdx
  int v33; // ecx
  DC *v34; // r8
  __int64 v35; // rbx
  unsigned int v36; // eax
  unsigned int v37; // edi
  int v38; // eax
  DC *v39; // rax
  __int64 v40; // [rsp+50h] [rbp+8h] BYREF

  *((_DWORD *)this + 28) = 1;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  v4 = 0;
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 25) = 0LL;
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = **(_QWORD **)a2;
  if ( !TrapAppContainerRenderingWorker(a2, (HSURF *)this + 23, (HSURF *)this + 22, (unsigned int *)this + 29) )
    return 0LL;
  v6 = (DC **)((char *)this + 120);
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  v7 = Gre::Base::Globals(v5);
  v8 = v7;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0 )
  {
    if ( !(unsigned int)GreGetLockCount() )
    {
      *((_DWORD *)this + 28) |= 0x800000u;
      GreIncLockCount();
    }
    goto LABEL_27;
  }
  *((_QWORD *)this + 2) = *((_QWORD *)v7 + 10);
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v7 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v8 + 10));
  *((_DWORD *)this + 28) |= 8u;
  if ( !(unsigned int)GreGetLockCount()
    && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v8 + 15)) )
  {
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v8 + 15));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v8 + 15));
    v4 = 1;
  }
  v9 = *(_QWORD *)a2;
  v40 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( (**(_DWORD **)(v9 + 976) & 1) != 0 || (*(_DWORD *)(v9 + 36) & 0x8000) != 0 )
  {
    if ( PDEVOBJ::bAllowShareAccess((PDEVOBJ *)&v40) )
      goto LABEL_18;
    v9 = *(_QWORD *)a2;
  }
  v10 = *(_QWORD *)(v9 + 64);
  *(_QWORD *)this = v10;
  *((_QWORD *)this + 3) = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  if ( v4 && v10 == *((_QWORD *)v8 + 15) )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
    GreReleaseSemaphoreInternal(*((_QWORD *)v8 + 15));
    v4 = 0;
  }
  GreAcquireSemaphore(*(_QWORD *)this);
  v11 = 2LL;
  if ( *(_QWORD *)this != *((_QWORD *)v8 + 15) )
    v11 = 11LL;
  EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", *(_QWORD *)this, v11);
  v12 = *((_DWORD *)this + 28);
  if ( (v12 & 0x200) == 0 && (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) != 0 )
    *((_DWORD *)this + 28) = v12 | 0x200;
LABEL_18:
  if ( !(unsigned int)GreGetLockCount() )
  {
    *((_DWORD *)this + 28) |= 0x1000u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v14 = *ThreadWin32Thread;
      if ( v14 )
      {
        *(_QWORD *)(v14 + 320) = 0LL;
        *(_QWORD *)(v14 + 312) = 0LL;
      }
    }
    GreIncLockCount();
    GreAcquireSemaphoreSharedInternal(*((_QWORD *)v8 + 11));
    EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDCVisRgn", *((_QWORD *)v8 + 11));
  }
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x5000) == 0x1000 )
  {
    v15 = (*((_DWORD *)this + 28) & 0x1000) == 0;
LABEL_30:
    if ( !v15 )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
      GreReleaseSemaphoreInternal(*((_QWORD *)v8 + 11));
    }
    *((_DWORD *)this + 28) &= ~1u;
    if ( v4 )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
      GreReleaseSemaphoreInternal(*((_QWORD *)v8 + 15));
    }
    return 0LL;
  }
LABEL_27:
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x80000) != 0 )
    {
LABEL_29:
      v15 = *((_QWORD *)this + 2) == 0LL;
      goto LABEL_30;
    }
  }
  else if ( *((_QWORD *)this + 2) )
  {
    goto LABEL_38;
  }
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x10) != 0 && !DC::bCompute(*(DC **)a2) )
    goto LABEL_29;
LABEL_38:
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) != 0 )
  {
    if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
      goto LABEL_49;
    if ( !*((_QWORD *)this + 22) )
      DC::vSetRendering(*(DC **)a2);
    v17 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( v17 )
    {
      v18 = *v17;
      if ( *v17 )
      {
        *(_QWORD *)(v18 + 312) = v6;
        if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x4000) == 0 )
        {
          *(_DWORD *)(v18 + 328) |= 1u;
          *(_QWORD *)(*(_QWORD *)a2 + 1976LL) = 0LL;
          GreAcquireSemaphoreSharedInternal(*((_QWORD *)v8 + 12));
          EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemVisRgnUniqueness", *((_QWORD *)v8 + 12));
          *(_DWORD *)(v18 + 336) = *((_DWORD *)Gre::Base::Globals(v19) + 1629);
          EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemVisRgnUniqueness");
          GreReleaseSemaphoreInternal(*((_QWORD *)v8 + 12));
        }
      }
    }
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 2) )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
    GreReleaseSemaphoreInternal(*((_QWORD *)v8 + 11));
  }
LABEL_49:
  if ( v4 )
  {
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
    GreReleaseSemaphoreInternal(*((_QWORD *)v8 + 15));
  }
  if ( (*((_DWORD *)this + 28) & 0x1000) == 0 )
    goto LABEL_108;
  v20 = *(__int64 **)a2;
  v21 = 1;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0x200) == 0 )
    goto LABEL_96;
  v22 = v20[6];
  v23 = *v20;
  LOBYTE(v20) = 1;
  v24 = HmgLockEx(v23, v20, *((unsigned int *)this + 33));
  *v6 = (DC *)v24;
  if ( v24 )
  {
    v25 = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( !v25
      || (v26 = *v25) == 0
      || (v27 = *(_QWORD *)(v26 + 40), v15 = v27 == v26 + 40, v28 = (struct UMPDOBJ *)(v27 - 40), v15) )
    {
      v28 = 0LL;
    }
    v29 = *v6;
    if ( *((_WORD *)*v6 + 6) == 1 )
    {
      *((_QWORD *)v29 + 271) = v28;
      *((_DWORD *)*v6 + 544) = 0xFFFF;
      v29 = *v6;
    }
    else if ( *((struct UMPDOBJ **)v29 + 271) != v28 )
    {
      XDCOBJ::LogUmpdCallbackStatus((DEVLOCKBLTOBJ *)((char *)this + 120), v28);
      _InterlockedDecrement((volatile signed __int32 *)*v6 + 3);
      *v6 = 0LL;
      goto LABEL_70;
    }
    if ( !*((_DWORD *)this + 33) )
      goto LABEL_70;
    if ( (*(_DWORD *)(*((_QWORD *)v29 + 6) + 40LL) & 0x8000) != 0 )
    {
      v30 = *((_DWORD *)v29 + 528);
      if ( v30 == ((unsigned int)PsGetCurrentProcessId() & 0xFFFFFFFC) )
        goto LABEL_70;
      v29 = *v6;
    }
    _InterlockedDecrement((volatile signed __int32 *)v29 + 3);
    *v6 = 0LL;
  }
  else if ( (unsigned __int8)PsIsWin32KFilterAuditEnabled() || (unsigned __int8)PsIsWin32KFilterEnabled() )
  {
    PsGetWin32KFilterSet();
  }
LABEL_70:
  if ( *v6 )
  {
    if ( (*((_DWORD *)*v6 + 11) & 2) == 0 )
    {
      v15 = (unsigned int)XDCOBJ::SaveAttributesHelper((DEVLOCKBLTOBJ *)((char *)this + 120)) == 0;
      v31 = *v6;
      if ( v15 )
      {
        _InterlockedDecrement((volatile signed __int32 *)v31 + 3);
        *v6 = 0LL;
        goto LABEL_77;
      }
      *((_DWORD *)v31 + 11) |= 2u;
      *((_DWORD *)this + 32) = 1;
    }
    if ( (*((_DWORD *)*v6 + 130) & 4) != 0 )
      DC::vMarkTransformDirty(*v6);
  }
LABEL_77:
  v32 = *(_QWORD *)(v22 + 1400);
  if ( *v6 && *((_BYTE *)this + 137) )
  {
    v33 = *(_DWORD *)(*(_QWORD *)a2 + 36LL);
    if ( (v33 & 1) != 0 && (v33 & 0x4000) == 0 && v32 && !*((_QWORD *)this + 22) )
    {
      *((_DWORD *)*v6 + 9) |= 0x4000u;
      DC::pSurface(*v6, (struct SURFACE *)(v32 - 24));
      *((_DWORD *)this + 28) |= 0x10u;
    }
    v34 = *v6;
    if ( *v6 )
    {
      if ( *((_BYTE *)this + 137) )
      {
        if ( (*((_DWORD *)this + 28) & 0x1000) != 0 )
        {
          v35 = *((_QWORD *)v34 + 62);
          if ( v35 )
          {
            v36 = SURFACE::Map(*((_QWORD *)v34 + 62), this);
            v37 = v36;
            if ( v36 <= 1 )
            {
              if ( (*(_DWORD *)(v35 + 112) & 0x800) != 0
                && *(_QWORD *)(v35 + 248)
                && (unsigned int)bHookRedir((DEVLOCKBLTOBJ *)((char *)this + 120)) )
              {
                *((_DWORD *)this + 28) |= 0x400u;
              }
              if ( (*(_DWORD *)(v35 + 112) & 0x10) != 0
                && (unsigned int)bHookBmpDrv((DEVLOCKBLTOBJ *)((char *)this + 120)) )
              {
                *((_DWORD *)this + 28) |= 0x2000u;
              }
              if ( v37 == 1 )
                *((_DWORD *)this + 28) |= 0x40u;
            }
            else if ( v36 == 2 )
            {
              if ( (*((_DWORD *)this + 28) & 0x1000) != 0 && *((_QWORD *)this + 18) && *((_BYTE *)this + 161) )
                DEVLOCKBLTOBJ::bUnMapSrcSurfaceView(this);
              DEVLOCKBLTOBJ::vClearRenderState(this, (DEVLOCKBLTOBJ *)((char *)this + 120));
              DLODCOBJ::vUnlock((DEVLOCKBLTOBJ *)((char *)this + 120));
              goto LABEL_95;
            }
          }
        }
      }
    }
LABEL_108:
    v38 = *((_DWORD *)this + 28);
    if ( (v38 & 0x1000) == 0 && (v38 & 0x800000) == 0 )
      return 1LL;
    v39 = *v6;
    if ( !*v6 )
    {
      XDCOBJ::vLock((DEVLOCKBLTOBJ *)((char *)this + 120), **(HDC **)a2);
      v39 = *v6;
      if ( !*v6 )
        return 1LL;
      *((_BYTE *)this + 137) = 0;
    }
    *((_DWORD *)v39 + 10) |= 2u;
    *((_BYTE *)this + 136) = 1;
    return 1LL;
  }
LABEL_95:
  v21 = 0;
LABEL_96:
  *v6 = 0LL;
  if ( v21 )
    goto LABEL_108;
  *((_DWORD *)this + 28) &= ~1u;
  return 0LL;
}
