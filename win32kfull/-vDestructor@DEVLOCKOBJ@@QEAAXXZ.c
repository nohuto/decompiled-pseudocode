void __fastcall DEVLOCKOBJ::vDestructor(DEVLOCKOBJ *this)
{
  __int64 v1; // rbx
  int v3; // eax
  __int64 *ThreadWin32Thread; // rax
  __int64 v5; // rax
  int v6; // eax
  int v7; // eax
  __int64 v8; // rbx
  __int64 v9; // r8
  SURFACE *v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 *v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 *v20; // rdi
  struct SURFACE *v21; // rax
  __int64 v22; // rbp
  struct SURFACE *v23; // rbx
  Gre::Base *v24; // rcx
  struct Gre::Base::SESSION_GLOBALS *v25; // rbx
  char v26; // di
  __int64 v27; // rax
  __int64 v28; // rax
  _BYTE v29[4]; // [rsp+30h] [rbp-38h] BYREF
  int v30; // [rsp+34h] [rbp-34h] BYREF
  DC *v31[3]; // [rsp+38h] [rbp-30h] BYREF

  v1 = *((_QWORD *)this + 4);
  if ( v1 && *((_BYTE *)this + 49) )
  {
    v7 = *((_DWORD *)this + 6);
    v8 = *(_QWORD *)(v1 + 48);
    if ( (v7 & 0x1000) != 0 )
    {
      if ( *((_BYTE *)this + 49) )
      {
        if ( (v7 & 0x400) != 0 )
        {
          bUnHookRedir((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x400u;
          v7 = *((_DWORD *)this + 6);
        }
        if ( (v7 & 0x2000) != 0 )
        {
          bUnHookBmpDrv((DEVLOCKOBJ *)((char *)this + 32));
          *((_DWORD *)this + 6) &= ~0x2000u;
          v7 = *((_DWORD *)this + 6);
        }
        v9 = *((_QWORD *)this + 4);
        if ( v9 && *((_BYTE *)this + 49) && (v7 & 0x1000) != 0 )
        {
          if ( (*(_DWORD *)(v9 + 44) & 1) == 0 )
          {
            v10 = *(SURFACE **)(v9 + 496);
            if ( v10 )
              SURFACE::bUnMap(v10, this, (struct DC *)v9);
          }
          *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) &= ~1u;
          v11 = *((_QWORD *)this + 4);
          if ( (*(_DWORD *)(v11 + 36) & 0x4000) != 0 && *(_QWORD *)(v11 + 472) && *(_DWORD *)(v11 + 488) )
            GreUpdateSpriteDevLockEnd((DEVLOCKOBJ *)((char *)this + 32), *((_DWORD *)this + 6) & 0x400000);
        }
      }
      if ( (*((_DWORD *)this + 6) & 0x10) != 0 )
      {
        *(_DWORD *)(*((_QWORD *)this + 4) + 36LL) &= ~0x4000u;
        DC::pSurface(*((DC **)this + 4), *(struct SURFACE **)(v8 + 2528));
      }
      DEVLOCKOBJ::vClearRenderState(this);
    }
    v12 = *((_QWORD *)this + 4);
    if ( v12 && *((_BYTE *)this + 48) )
    {
      *(_DWORD *)(v12 + 40) &= ~2u;
      *((_BYTE *)this + 48) = 0;
    }
    v13 = *((_QWORD *)this + 4);
    if ( v13 )
    {
      if ( *((_DWORD *)this + 10) && (*(_DWORD *)(v13 + 44) & 2) != 0 )
      {
        XDCOBJ::RestoreAttributesHelper((DEVLOCKOBJ *)((char *)this + 32));
        *(_DWORD *)(*((_QWORD *)this + 4) + 44LL) &= ~2u;
        *((_DWORD *)this + 10) = 0;
      }
      v14 = (__int64 *)*((_QWORD *)this + 4);
      v15 = *((unsigned int *)this + 11);
      v30 = 0;
      v16 = *v14;
      HmgDecrementExclusiveReferenceCountEx(v14, v15, &v30);
      if ( v30 )
        GrepDeleteDC(v16, 0x2000000LL);
    }
    *((_QWORD *)this + 4) = 0LL;
  }
  v3 = *((_DWORD *)this + 6);
  if ( (v3 & 0x1000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x1000u;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
    if ( ThreadWin32Thread )
    {
      v5 = *ThreadWin32Thread;
      if ( v5 )
      {
        *(_QWORD *)(v5 + 320) = 0LL;
        *(_QWORD *)(v5 + 312) = 0LL;
      }
    }
  }
  else if ( (v3 & 0x800000) != 0 )
  {
    GreDecLockCount();
    *((_DWORD *)this + 6) &= ~0x800000u;
  }
  if ( *(_QWORD *)this )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemTrg");
    GreReleaseSemaphoreInternal(*(_QWORD *)this);
  }
  v6 = *((_DWORD *)this + 6);
  if ( (v6 & 8) != 0 )
    *((_DWORD *)this + 6) = v6 & 0xFFFFFFF7;
  if ( *((_QWORD *)this + 1) )
  {
    EtwTraceGreLockReleaseSemaphore(L"hsemDMC");
    GreReleaseSemaphoreInternal(*((_QWORD *)this + 1));
  }
  if ( *((_QWORD *)this + 8) )
  {
    DCOBJ::DCOBJ((DCOBJ *)v31, *((HDC *)this + 9));
    LOBYTE(v17) = 5;
    v18 = HmgShareLock(*((_QWORD *)this + 7), v17);
    LOBYTE(v19) = 5;
    v20 = (__int64 *)v18;
    v21 = (struct SURFACE *)HmgShareLock(*((_QWORD *)this + 8), v19);
    v22 = *v20;
    v23 = v21;
    DC::pSurface(v31[0], v21);
    DEC_SHARE_REF_CNT(v20);
    DEC_SHARE_REF_CNT(v23);
    GreDereferenceObject(v22, 1LL);
    *((_QWORD *)this + 9) = 0LL;
    *((_QWORD *)this + 7) = 0LL;
    if ( this != (DEVLOCKOBJ *)-28LL )
    {
      v24 = v31[0];
      *((_DWORD *)v31[0] + 9) |= *((_DWORD *)this + 7);
    }
    v25 = Gre::Base::Globals(v24);
    if ( (*((_DWORD *)v31[0] + 9) & 0x200) != 0 )
    {
      v26 = 0;
      if ( !(unsigned int)GreGetLockCount()
        && !(unsigned int)GreIsSemaphoreOwnedOrSharedByCurrentThread(*((_QWORD *)v25 + 15)) )
      {
        GreAcquireSemaphoreSharedInternal(*((_QWORD *)v25 + 15));
        EtwTraceGreLockAcquireSemaphoreShared(L"GreBaseGlobals.hsemGreLock", *((_QWORD *)v25 + 15));
        v26 = 1;
      }
      DCVISRGNSHARELOCK::DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v29);
      v27 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 8), 0LL, 0LL, 0LL, 5);
      if ( v27 )
        SURFACE::bDeleteSurface(v27, 0LL, 1LL);
      *((_QWORD *)v31[0] + 63) = 0LL;
      DC::vClearRendering(v31[0]);
      *((_QWORD *)this + 8) = 0LL;
      DCVISRGNSHARELOCK::~DCVISRGNSHARELOCK((DCVISRGNSHARELOCK *)v29);
      if ( v26 )
      {
        EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
        GreReleaseSemaphoreInternal(*((_QWORD *)v25 + 15));
      }
    }
    else
    {
      v28 = HmgShareUnlockRemoveObject(*((_QWORD *)this + 8), 0LL, 0LL, 0LL, 5);
      if ( v28 )
        SURFACE::bDeleteSurface(v28, 0LL, 1LL);
      *((_QWORD *)v31[0] + 63) = 0LL;
      *((_QWORD *)this + 8) = 0LL;
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
    GreReleaseSemaphoreInternal(*((_QWORD *)v25 + 10));
    if ( v31[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v31);
  }
}
