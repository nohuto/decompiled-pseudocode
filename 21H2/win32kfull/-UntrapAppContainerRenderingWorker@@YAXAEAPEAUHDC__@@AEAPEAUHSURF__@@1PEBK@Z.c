/*
 * XREFs of ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C0040528
 * Callers:
 *     UntrapAppContainerRenderingWrap @ 0x1C0040510 (UntrapAppContainerRenderingWrap.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C027A15C (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C002669C (GreDereferenceObject.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00357C0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C004033C (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C00F4808 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C0113C20 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C015D384 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026AD30 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall UntrapAppContainerRenderingWorker(HDC *a1, HSURF *a2, HSURF *a3, const unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  HSURF v12; // rbx
  char v13; // bl
  __int64 v14; // rax
  __int64 v15; // rax
  char v16; // [rsp+28h] [rbp-49h]
  char v17; // [rsp+28h] [rbp-49h]
  _BYTE v18[32]; // [rsp+38h] [rbp-39h] BYREF
  HSURF *v19; // [rsp+58h] [rbp-19h]
  DC *v20[6]; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v21[32]; // [rsp+90h] [rbp+1Fh] BYREF
  struct SURFACE *v22; // [rsp+B0h] [rbp+3Fh]
  char v23; // [rsp+E0h] [rbp+6Fh] BYREF

  if ( *a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v20, *a1);
    SURFREF::SURFREF((SURFREF *)v18);
    SURFREF::SURFREF((SURFREF *)v21);
    LOBYTE(v8) = 5;
    v9 = HmgShareLock(*a3, v8);
    v10 = (__int64)*a2;
    LOBYTE(v11) = 5;
    v19 = (HSURF *)v9;
    v22 = (struct SURFACE *)HmgShareLock(v10, v11);
    v12 = *v19;
    DC::pSurface(v20[0], v22);
    DEC_SHARE_REF_CNT(v19);
    v19 = 0LL;
    DEC_SHARE_REF_CNT(v22);
    v22 = 0LL;
    GreDereferenceObject(v12, 1u);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
      *((_DWORD *)v20[0] + 9) |= *a4;
    if ( (*((_DWORD *)v20[0] + 9) & 0x200) != 0 )
    {
      v13 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v13 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v23);
      v16 = 5;
      v14 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v16);
      if ( v14 )
        SURFACE::bDeleteSurface(v14, 0LL, 1LL);
      *((_QWORD *)v20[0] + 63) = 0LL;
      DC::vClearRendering(v20[0]);
      *a2 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v23);
      if ( v13 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v17 = 5;
      v15 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v17);
      if ( v15 )
        SURFACE::bDeleteSurface(v15, 0LL, 1LL);
      *((_QWORD *)v20[0] + 63) = 0LL;
      *a2 = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v22 )
      DEC_SHARE_REF_CNT(v22);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v21);
    if ( v19 )
      DEC_SHARE_REF_CNT(v19);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v18);
    DCOBJ::~DCOBJ((DCOBJ *)v20);
  }
}
