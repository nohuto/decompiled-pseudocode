/*
 * XREFs of ?TrapAppContainerRenderingWorker@@YA_NAEAVXDCOBJ@@AEAPEAUHSURF__@@1PEAK@Z @ 0x1C008D7B0
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C008C890 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     TrapAppContainerRenderingWrap @ 0x1C008D790 (TrapAppContainerRenderingWrap.c)
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z @ 0x1C00B7CA8 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@H@Z.c)
 * Callees:
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018C00 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0018F2C (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008BAA8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008BAEC (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0090120 (-vClearRendering@DC@@QEAAXXZ.c)
 *     GreCreateCompatibleBitmapInternal @ 0x1C00AAFE8 (GreCreateCompatibleBitmapInternal.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00F01D8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C01256A0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026CF90 (--0SURFREF@@QEAA@XZ.c)
 */

char __fastcall TrapAppContainerRenderingWorker(DC **a1, HSURF *a2, HSURF *a3, unsigned int *a4)
{
  __int64 ThreadWin32Thread; // rax
  __int64 v9; // rdx
  DYNAMICMODECHANGESHARELOCK *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  DC *v16; // rbx
  __int64 v17; // rbx
  char v18; // bl
  char v19; // r14
  __int64 v20; // rdx
  __int64 CompatibleBitmapInternal; // rsi
  DCVISRGNSHARELOCK *v22; // rcx
  __int64 v23; // rdx
  SURFACE *v24; // rax
  __int64 v25; // rdx
  DCVISRGNSHARELOCK *v26; // rcx
  __int64 v27; // rsi
  SURFACE *v28; // rax
  __int64 v29; // rdx
  SURFACE *v30; // rcx
  DC *v31; // r8
  __int64 v32; // rdx
  _BYTE v34[8]; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v35[32]; // [rsp+40h] [rbp-21h] BYREF
  struct SURFACE *v36; // [rsp+60h] [rbp-1h]
  _BYTE v37[32]; // [rsp+68h] [rbp+7h] BYREF
  SURFACE *v38; // [rsp+88h] [rbp+27h]
  char v39; // [rsp+D0h] [rbp+6Fh] BYREF

  *a2 = 0LL;
  if ( (unsigned int)UserIsCurrentProcessImmersiveAppContainer() )
  {
    ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
    if ( !ThreadWin32Thread || (*(_DWORD *)(ThreadWin32Thread + 328) & 8) == 0 )
    {
      DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v39);
      v12 = *((_QWORD *)*a1 + 62);
      if ( !v12
        || (v13 = *(_QWORD *)(v12 + 640), v13 == PsGetCurrentProcess(v10, v9, v11)) && *(int *)(v12 + 112) >= 0
        || (v16 = *a1, *((_QWORD *)*a1 + 59))
        && *((_DWORD *)v16 + 122)
        && !*((_DWORD *)v16 + 123)
        && (v17 = *((_QWORD *)v16 + 60), PsGetCurrentProcess(v10, v14, v15) == v17) )
      {
        v18 = 1;
LABEL_36:
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v10);
        return v18;
      }
      SURFREF::SURFREF((SURFREF *)v37);
      SURFREF::SURFREF((SURFREF *)v35);
      v18 = 1;
      if ( (*((_DWORD *)*a1 + 9) & 0x200) != 0 )
      {
        v19 = 0;
        if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
        {
          GreAcquireSemaphore(ghsemGreLock);
          v19 = 1;
        }
        DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v34);
        DC::vSetRendering(*a1);
        CompatibleBitmapInternal = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL, 0LL);
        if ( !CompatibleBitmapInternal )
        {
          DC::vClearRendering(*a1);
          if ( v19 )
          {
            EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
            GreReleaseSemaphoreInternal(ghsemGreLock);
          }
          DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v22);
          goto LABEL_22;
        }
        LOBYTE(v20) = 5;
        v24 = (SURFACE *)HmgShareLock(**((_QWORD **)*a1 + 62), v20);
        LOBYTE(v25) = 5;
        v38 = v24;
        v36 = (struct SURFACE *)HmgShareLock(CompatibleBitmapInternal, v25);
        DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v26);
        if ( v19 )
        {
          EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
          GreReleaseSemaphoreInternal(ghsemGreLock);
        }
      }
      else
      {
        v27 = GreCreateCompatibleBitmapInternal(*(HDC *)*a1, 0LL, 0LL);
        if ( !v27 )
        {
LABEL_22:
          v18 = 0;
LABEL_30:
          if ( v36 )
            DEC_SHARE_REF_CNT(v36, v23);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v35);
          if ( v38 )
            DEC_SHARE_REF_CNT(v38, v32);
          UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v37);
          goto LABEL_36;
        }
        LOBYTE(v23) = 5;
        v28 = (SURFACE *)HmgShareLock(**((_QWORD **)*a1 + 62), v23);
        LOBYTE(v29) = 5;
        v38 = v28;
        v36 = (struct SURFACE *)HmgShareLock(v27, v29);
      }
      v30 = v38;
      *a2 = *(HSURF *)v38;
      *a3 = *(HSURF *)v36;
      INC_SHARE_REF_CNT(v30);
      v31 = *a1;
      if ( (*((_DWORD *)*a1 + 9) & 0x4000) != 0 && (unsigned int)SURFACE::bRedirectionBitmap(v38) )
      {
        ++*((_DWORD *)v36 + 81);
        v31 = *a1;
      }
      *((_QWORD *)v31 + 63) = *a2;
      DC::pSurface(*a1, v36);
      INC_SHARE_REF_CNT(v36);
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
