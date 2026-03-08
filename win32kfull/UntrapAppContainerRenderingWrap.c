/*
 * XREFs of UntrapAppContainerRenderingWrap @ 0x1C00510F0
 * Callers:
 *     <none>
 * Callees:
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C000FF70 (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     GreDereferenceObject @ 0x1C00447CC (GreDereferenceObject.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004FFBC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@IEAAXXZ @ 0x1C0050C60 (-vUnlockFast@XDCOBJ@@IEAAXXZ.c)
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00589A0 (-vClearRendering@DC@@QEAAXXZ.c)
 *     ??0DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F7D4 (--0DCVISRGNSHARELOCK@@QEAA@XZ.c)
 *     ??1DCVISRGNSHARELOCK@@QEAA@XZ @ 0x1C012F858 (--1DCVISRGNSHARELOCK@@QEAA@XZ.c)
 */

void __fastcall UntrapAppContainerRenderingWrap(HDC *a1, _QWORD *a2, _QWORD *a3, _DWORD *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 *v11; // rdi
  struct SURFACE *v12; // rax
  __int64 v13; // rsi
  struct SURFACE *v14; // rbx
  Gre::Base *v15; // rcx
  struct Gre::Base::SESSION_GLOBALS *v16; // rbx
  char v17; // di
  __int64 v18; // rax
  __int64 v19; // rax
  char v20; // [rsp+20h] [rbp-48h]
  char v21; // [rsp+20h] [rbp-48h]
  DC *v22[2]; // [rsp+30h] [rbp-38h] BYREF
  char v23; // [rsp+78h] [rbp+10h] BYREF

  if ( *a2 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v22, *a1);
    LOBYTE(v8) = 5;
    v9 = HmgShareLock(*a3, v8);
    LOBYTE(v10) = 5;
    v11 = (__int64 *)v9;
    v12 = (struct SURFACE *)HmgShareLock(*a2, v10);
    v13 = *v11;
    v14 = v12;
    DC::pSurface(v22[0], v12);
    DEC_SHARE_REF_CNT(v11);
    DEC_SHARE_REF_CNT(v14);
    GreDereferenceObject(v13, 1LL);
    *a1 = 0LL;
    *a3 = 0LL;
    if ( a4 )
    {
      v15 = v22[0];
      *((_DWORD *)v22[0] + 9) |= *a4;
    }
    v16 = Gre::Base::Globals(v15);
    if ( (*((_DWORD *)v22[0] + 9) & 0x200) != 0 )
    {
      v17 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v16 + 15)) )
      {
        GreAcquireSemaphoreSharedInternal(*((_QWORD *)v16 + 15));
        EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v16 + 15));
        v17 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v23);
      v20 = 5;
      v18 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v20);
      if ( v18 )
        SURFACE::bDeleteSurface(v18, 0LL, 1LL);
      *((_QWORD *)v22[0] + 63) = 0LL;
      DC::vClearRendering(v22[0]);
      *a2 = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)&v23);
      if ( v17 )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
        GreReleaseSemaphoreInternal(*((_QWORD *)v16 + 15));
      }
    }
    else
    {
      v21 = 5;
      v19 = HmgShareUnlockRemoveObject(*a2, 0LL, 0LL, 0LL, v21);
      if ( v19 )
        SURFACE::bDeleteSurface(v19, 0LL, 1LL);
      *((_QWORD *)v22[0] + 63) = 0LL;
      *a2 = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v16 + 10));
    if ( v22[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v22);
  }
}
