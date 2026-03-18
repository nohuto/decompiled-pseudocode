/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C00414F0
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00408D0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C00414D0 (TrapAppContainerRenderingWrap.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00894E4 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00357C0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C004033C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C0086C6C (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C0090C1C (GreCreateCompatibleBitmapInternal.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00F4808 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0113C20 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  DC *v14; // rbx
  __int64 v15; // rbx
  char v16; // bl
  char v17; // r14
  __int64 v18; // rdx
  __int64 CompatibleBitmapInternal; // rsi
  SURFACE *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rsi
  SURFACE *v24; // rax
  __int64 v25; // rdx
  SURFACE *v26; // rcx
  DC *v27; // r8
  _BYTE v29[32]; // [rsp+30h] [rbp-50h] BYREF
  struct SURFACE *v30; // [rsp+50h] [rbp-30h]
  _BYTE v31[32]; // [rsp+58h] [rbp-28h] BYREF
  SURFACE *v32; // [rsp+78h] [rbp-8h]
  char v33; // [rsp+B8h] [rbp+38h] BYREF

  *a2 = 0LL;
  if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || (*(_DWORD *)(ThreadWin32Thread + 328) & 4) == 0 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v33);
      v11 = *((_QWORD *)*a1 + 62);
      if ( !v11
        || *(_QWORD *)(v11 + 640) == PsGetCurrentProcess(v10, v9) && *(int *)(v11 + 112) >= 0
        || (v14 = *a1, *((_QWORD *)*a1 + 59))
        && *((_DWORD *)v14 + 122)
        && !*((_DWORD *)v14 + 123)
        && (v15 = *((_QWORD *)v14 + 60), PsGetCurrentProcess(v13, v12) == v15) )
      {
        v16 = 1;
LABEL_36:
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v33);
        return v16;
      }
      SURFREF::SURFREF((SURFREF *)v31);
      SURFREF::SURFREF((SURFREF *)v29);
      v16 = 1;
      if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
      {
        v17 = 0;
        if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
        {
          GreAcquireSemaphore(ghsemGreLock);
          v17 = 1;
        }
        DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v33);
        DC::vSetRendering(*a1);
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL, 0LL);
        if ( !CompatibleBitmapInternal )
        {
          DC::vClearRendering(*a1);
          if ( v17 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            GreReleaseSemaphoreInternal(ghsemGreLock);
          }
          DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v33);
          goto LABEL_22;
        }
        LOBYTE(v18) = 5;
        v20 = (SURFACE *)HmgShareLock(**((_QWORD **)*a1 + 62), v18);
        LOBYTE(v21) = 5;
        v32 = v20;
        v30 = (struct SURFACE *)HmgShareLock(CompatibleBitmapInternal, v21);
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v33);
        if ( v17 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
      }
      else
      {
        v23 = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL, 0LL);
        if ( !v23 )
        {
LABEL_22:
          v16 = 0;
LABEL_30:
          if ( v30 )
            DEC_SHARE_REF_CNT(v30);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v29);
          if ( v32 )
            DEC_SHARE_REF_CNT(v32);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v31);
          goto LABEL_36;
        }
        LOBYTE(v22) = 5;
        v24 = (SURFACE *)HmgShareLock(**((_QWORD **)*a1 + 62), v22);
        LOBYTE(v25) = 5;
        v32 = v24;
        v30 = (struct SURFACE *)HmgShareLock(v23, v25);
      }
      v26 = v32;
      *a2 = *(HSURF *)v32;
      *a3 = *(HSURF *)v30;
      INC_SHARE_REF_CNT(v26);
      v27 = *a1;
      if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v32) )
      {
        ++*((_DWORD *)v30 + 81);
        v27 = *a1;
      }
      *((_QWORD *)v27 + 63) = *a2;
      DC::pSurface(*a1, v30);
      INC_SHARE_REF_CNT(v30);
      if ( a4 )
      {
        *a4 = *((_DWORD *)*a1 + 9) & 0xE0;
        *((_DWORD *)*a1 + 9) &= 0xFFFFFF1F;
      }
      GreAcquireSemaphoreSharedInternal(ghsemDynamicModeChange);
      EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
      goto LABEL_30;
    }
  }
  return 1;
}
