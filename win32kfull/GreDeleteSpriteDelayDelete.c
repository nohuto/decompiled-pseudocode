__int64 __fastcall GreDeleteSpriteDelayDelete(Gre::Base *a1, HWND a2, HSPRITE a3, int a4)
{
  unsigned int v4; // esi
  int v9; // r12d
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rbp
  struct PDEVOBJ *v12; // rdx
  Gre::Base *v13; // rcx
  struct DWMSPRITE *v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rdi
  struct DWMSPRITE *v18; // [rsp+20h] [rbp-38h] BYREF
  char v19; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  v9 = 1;
  v11 = Gre::Base::Globals(a1);
  if ( !a4 || !IsDwmActive(v10) )
    return (unsigned int)GdiDeleteSpriteDelayDelete((HDEV)a1, a2, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v19, v12, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v11 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v11 + 9), 7LL);
  if ( IsDwmActive(v13) )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v18, a2, a3);
    v14 = v18;
    v9 = 0;
    if ( v18 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)v18 + 18) + 184LL);
      if ( v15 )
      {
        v16 = v15 - 24;
        if ( (unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v15 - 24)) )
        {
          W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v16 + 272));
          W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v16 + 272));
        }
      }
      *((_DWORD *)v14 + 16) = *((_DWORD *)v14 + 14);
      *((_DWORD *)v14 + 17) = *((_DWORD *)v14 + 15);
      _InterlockedDecrement((volatile signed __int32 *)v14 + 3);
      v18 = 0LL;
      vspDestroyDwmSpriteObjInternal((HDEV)a1, 0LL, v14);
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v11 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v19);
  if ( v9 )
    return (unsigned int)GdiDeleteSpriteDelayDelete((HDEV)a1, a2, a3);
  return v4;
}
