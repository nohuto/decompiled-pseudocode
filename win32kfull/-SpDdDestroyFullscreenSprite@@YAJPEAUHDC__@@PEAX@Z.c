__int64 __fastcall SpDdDestroyFullscreenSprite(HDC a1, void *a2)
{
  unsigned int v3; // ebx
  Gre::Base *v4; // rcx
  struct Gre::Base::SESSION_GLOBALS *v5; // rdi
  Gre::Base *v6; // r14
  struct PDEVOBJ *v7; // rdx
  Gre::Base *v8; // rcx
  _QWORD v10[2]; // [rsp+20h] [rbp-10h] BYREF
  char v11; // [rsp+70h] [rbp+40h] BYREF
  __int64 v12; // [rsp+78h] [rbp+48h] BYREF

  v3 = -1073741811;
  DCOBJ::DCOBJ((DCOBJ *)v10, a1);
  if ( v10[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
    v5 = Gre::Base::Globals(v4);
    v12 = *((_QWORD *)v5 + 15);
    GreAcquireSemaphore(v12);
    v6 = *(Gre::Base **)(v10[0] + 48LL);
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v11, v7, 0, 0);
    GreAcquireSemaphore(*((_QWORD *)v5 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v5 + 9), 7LL);
    if ( IsDwmActive(v8) && (unsigned int)GreDeleteSprite(v6, 0LL, a2, 1) )
      v3 = 0;
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v5 + 9));
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v11);
    SEMOBJ::vUnlock((SEMOBJ *)&v12);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v11);
    if ( v10[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v10);
  }
  else
  {
    DCOBJ::~DCOBJ((DCOBJ *)v10);
  }
  return v3;
}
