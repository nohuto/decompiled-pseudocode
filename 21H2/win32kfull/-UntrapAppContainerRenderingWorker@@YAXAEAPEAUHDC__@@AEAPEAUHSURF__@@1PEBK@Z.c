/*
 * XREFs of ?UntrapAppContainerRenderingWorker@@YAXAEAPEAUHDC__@@AEAPEAUHSURF__@@1PEBK@Z @ 0x1C008E5D8
 * Callers:
 *     UntrapAppContainerRenderingWrap @ 0x1C008E5C0 (UntrapAppContainerRenderingWrap.c)
 *     ?vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ @ 0x1C027C5EC (-vDestructorNULL@DEVLOCKOBJ@@QEAAXXZ.c)
 * Callees:
 *     GreDereferenceObject @ 0x1C004B94C (GreDereferenceObject.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008BAA8 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C008BAEC (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C0090120 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C00B2BF0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00B2C98 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C01256A0 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@XZ @ 0x1C026CF90 (--0SURFREF@@QEAA@XZ.c)
 */

void __fastcall UntrapAppContainerRenderingWorker(HDC *a1, HSURF *a2, HSURF *a3, const unsigned int *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  HSURF v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  char v15; // bl
  __int64 v16; // rax
  DCVISRGNSHARELOCK *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdx
  char v21; // [rsp+28h] [rbp-49h]
  char v22; // [rsp+28h] [rbp-49h]
  _BYTE v23[32]; // [rsp+38h] [rbp-39h] BYREF
  HSURF *v24; // [rsp+58h] [rbp-19h]
  DC *v25[6]; // [rsp+60h] [rbp-11h] BYREF
  _BYTE v26[32]; // [rsp+90h] [rbp+1Fh] BYREF
  struct SURFACE *v27; // [rsp+B0h] [rbp+3Fh]
  char v28; // [rsp+E0h] [rbp+6Fh] BYREF

  if ( *a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v25, *a1);
    SURFREF::SURFREF((SURFREF *)v23);
    SURFREF::SURFREF((SURFREF *)v26);
    LOBYTE(v8) = 5;
    v9 = HmgShareLock(*a3, v8);
    v10 = (__int64)*a2;
    LOBYTE(v11) = 5;
    v24 = (HSURF *)v9;
    v27 = (struct SURFACE *)HmgShareLock(v10, v11);
    v12 = *v24;
    DC::pSurface(v25[0], v27);
    DEC_SHARE_REF_CNT(v24, v13);
    v24 = 0LL;
    DEC_SHARE_REF_CNT(v27, v14);
    v27 = 0LL;
    GreDereferenceObject(v12, 1u);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
      *((_DWORD *)v25[0] + 9) |= *a4;
    if ( (*((_DWORD *)v25[0] + 9) & 0x200) != 0 )
    {
      v15 = 0;
      if ( !(unsigned int)GreGetLockCount() && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(ghsemGreLock) )
      {
        GreAcquireSemaphoreSharedInternal(ghsemGreLock);
        EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
        v15 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v28);
      v21 = 5;
      v16 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v21);
      if ( v16 )
        SURFACE::bDeleteSurface(v16, 0LL, 1LL);
      *((_QWORD *)v25[0] + 63) = 0LL;
      DC::vClearRendering(v25[0]);
      *a2 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK(v17);
      if ( v15 )
      {
        EtwTraceGreLockReleaseSemaphore(L"ghsemGreLock", ghsemGreLock);
        GreReleaseSemaphoreInternal(ghsemGreLock);
      }
    }
    else
    {
      v22 = 5;
      v18 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v22);
      if ( v18 )
        SURFACE::bDeleteSurface(v18, 0LL, 1LL);
      *((_QWORD *)v25[0] + 63) = 0LL;
      *a2 = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(ghsemDynamicModeChange);
    if ( v27 )
      DEC_SHARE_REF_CNT(v27, v19);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v26);
    if ( v24 )
      DEC_SHARE_REF_CNT(v24, v20);
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v23);
    DCOBJ::~DCOBJ((DCOBJ *)v25);
  }
}
