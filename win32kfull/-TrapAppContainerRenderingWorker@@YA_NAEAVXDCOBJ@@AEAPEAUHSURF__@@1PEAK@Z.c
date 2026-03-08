/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C005DF10
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C0002180 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C005C760 (TrapAppContainerRenderingWrap.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C005C780 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A694 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002A6E0 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0050938 (W32GetThreadWin32Thread.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00589A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C007BB00 (GreCreateCompatibleBitmapInternal.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C010C43C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F7D4 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F858 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  char v4; // r12
  __int64 ThreadWin32Thread; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rdi
  __int64 v15; // rdx
  Gre::Base *v16; // rcx
  __int64 v17; // r8
  DC *v18; // rbx
  __int64 v19; // rcx
  struct Gre::Base::SESSION_GLOBALS *v20; // r13
  __int64 v21; // rdx
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // rdx
  SURFACE *v25; // rdi
  struct SURFACE *v26; // rbx
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 CompatibleBitmapInternal; // rbx
  __int64 v30; // rax
  __int64 v31; // rdx
  char v32; // [rsp+68h] [rbp+10h] BYREF

  v4 = 0;
  *a2 = 0LL;
  if ( !(unsigned int)UserIsCurrentProcessImmersiveAppContainer(a1) )
    return 1;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( ThreadWin32Thread )
  {
    if ( (*(_DWORD *)(ThreadWin32Thread + 328) & 4) != 0 )
      return 1;
  }
  DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v32);
  v14 = *((_QWORD *)*a1 + 62);
  if ( !v14
    || *(_QWORD *)(v14 + 640) == PsGetCurrentProcess(v12, v11, v13) && *(int *)(v14 + 112) >= 0
    || (v18 = *a1, *((_QWORD *)*a1 + 59))
    && *((_DWORD *)v18 + 122)
    && !*((_DWORD *)v18 + 123)
    && (v27 = *((_QWORD *)v18 + 60), PsGetCurrentProcess(v16, v15, v17) == v27) )
  {
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v32);
    return 1;
  }
  v20 = Gre::Base::Globals(v16);
  if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
  {
    if ( !(unsigned int)GreGetLockCount(v19)
      && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v20 + 15)) )
    {
      GreAcquireSemaphore(*((_QWORD *)v20 + 15));
      v4 = 1;
    }
    DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v32);
    DC::vSetRendering(*a1);
    CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(
                                 *(_QWORD *)*a1,
                                 *(_DWORD *)(v14 + 56),
                                 *(_DWORD *)(v14 + 60),
                                 0,
                                 0LL,
                                 0LL);
    if ( CompatibleBitmapInternal )
    {
      LOBYTE(v28) = 5;
      v30 = HmgShareLock(**((_QWORD **)*a1 + 62), v28);
      LOBYTE(v31) = 5;
      v25 = (SURFACE *)v30;
      v26 = (struct SURFACE *)HmgShareLock(CompatibleBitmapInternal, v31);
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v32);
      if ( v4 )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
        GreReleaseSemaphoreInternal(*((_QWORD *)v20 + 15));
      }
      goto LABEL_14;
    }
    DC::vClearRendering(*a1);
    if ( v4 )
    {
      EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
      GreReleaseSemaphoreInternal(*((_QWORD *)v20 + 15));
    }
    DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v32);
LABEL_30:
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v32);
    return 0;
  }
  v22 = GreCreateCompatibleBitmapInternal(*(_QWORD *)*a1, *(_DWORD *)(v14 + 56), *(_DWORD *)(v14 + 60), 0, 0LL, 0LL);
  if ( !v22 )
    goto LABEL_30;
  LOBYTE(v21) = 5;
  v23 = HmgShareLock(**((_QWORD **)*a1 + 62), v21);
  LOBYTE(v24) = 5;
  v25 = (SURFACE *)v23;
  v26 = (struct SURFACE *)HmgShareLock(v22, v24);
LABEL_14:
  *a2 = *(HSURF *)v25;
  *a3 = *(HSURF *)v26;
  INC_SHARE_REF_CNT(v25);
  if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v25) )
    ++*((_DWORD *)v26 + 81);
  *((_QWORD *)*a1 + 63) = *a2;
  DC::pSurface(*a1, v26);
  INC_SHARE_REF_CNT(v26);
  if ( a4 )
  {
    *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
    *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
  }
  GreAcquireSemaphoreSharedInternal(*((_QWORD *)v20 + 10));
  EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemDynamicModeChange", *((_QWORD *)v20 + 10));
  DEC_SHARE_REF_CNT(v26);
  DEC_SHARE_REF_CNT(v25);
  DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v32);
  return 1;
}
