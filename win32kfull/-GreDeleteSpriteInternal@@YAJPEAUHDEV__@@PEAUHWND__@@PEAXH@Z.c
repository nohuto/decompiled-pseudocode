__int64 __fastcall GreDeleteSpriteInternal(Gre::Base *a1, HWND a2, HSPRITE a3, int a4)
{
  int v4; // r14d
  int v6; // esi
  HWND v8; // rdi
  struct Gre::Base::SESSION_GLOBALS *v10; // r15
  struct PDEVOBJ *v11; // rdx
  struct DWMSPRITE *v12; // rbx
  __int64 v13; // rsi
  __int64 v14; // rdi
  void *v15; // rax
  unsigned int v16; // eax
  __int64 v17; // rdi
  unsigned int v18; // ebp
  struct DWMSPRITE *v19; // r8
  __int64 v21; // rax
  _BYTE v22[8]; // [rsp+20h] [rbp-48h] BYREF
  struct DWMSPRITE *v23; // [rsp+28h] [rbp-40h] BYREF

  v4 = 1;
  v6 = 1;
  v8 = a2;
  v10 = Gre::Base::Globals(a1);
  if ( !a4 || !(unsigned int)IsDwmActive() )
    return (unsigned int)GdiDeleteSprite((HDEV)a1, v8, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v22, v11, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v10 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v10 + 9), 7LL);
  if ( (unsigned int)IsDwmActive() )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v23, v8, a3);
    v12 = v23;
    if ( v23 )
    {
      v13 = *((_QWORD *)v23 + 18);
      v14 = *(_QWORD *)v23;
      v15 = (void *)UserReferenceDwmApiPort();
      v16 = DwmAsyncDestroySprite(v15, v14);
      v17 = *(_QWORD *)(v13 + 184);
      v18 = v16;
      if ( !v17 || !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v17 - 24)) )
        goto LABEL_9;
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v17 + 248));
      if ( *(_DWORD *)(v17 + 300) && (*(_DWORD *)(v17 + 92) & 2) == 0 )
      {
        *((_DWORD *)v12 + 35) |= 0x10u;
        vspRemoveStateReferencesForSprite(v12);
        *(_QWORD *)(v17 + 480) = 0LL;
        *(_QWORD *)(v17 + 472) = a1;
        v21 = *(_QWORD *)v12;
        *(_DWORD *)(v17 + 92) |= 2u;
        *(_DWORD *)(v17 + 496) = 1;
        v4 = 0;
        *(_QWORD *)(v17 + 488) = v21;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v17 + 248));
      if ( v4 )
      {
LABEL_9:
        v19 = v12;
        *((_DWORD *)v12 + 16) = *((_DWORD *)v12 + 14);
        *((_DWORD *)v12 + 17) = *((_DWORD *)v12 + 15);
        _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
        v12 = 0LL;
        v23 = 0LL;
        vspDestroyDwmSpriteObjInternal((HDEV)a1, 0, v19);
      }
      v8 = a2;
    }
    else
    {
      v18 = -2143354870;
    }
    v6 = 0;
    if ( v12 )
      _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
  }
  else
  {
    v18 = -1071775733;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v10 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v22);
  if ( v6 )
    return (unsigned int)GdiDeleteSprite((HDEV)a1, v8, a3);
  return v18;
}
