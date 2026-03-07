__int64 __fastcall GreGetSprite(Gre::Base *a1, HWND a2)
{
  __int64 v3; // rdi
  struct Gre::Base::SESSION_GLOBALS *v4; // rbx
  struct PDEVOBJ *v5; // rdx
  Gre::Base *v7; // [rsp+30h] [rbp+8h] BYREF
  volatile signed __int32 *v8; // [rsp+40h] [rbp+18h] BYREF

  v7 = a1;
  v3 = 0LL;
  v4 = Gre::Base::Globals(a1);
  if ( (unsigned int)IsDwmActive() )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v7, v5, 0, 0);
    GreAcquireSemaphore(*((_QWORD *)v4 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v4 + 9), 7LL);
    if ( (unsigned int)IsDwmActive() )
    {
      DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v8, a2);
      if ( v8 )
      {
        v3 = *(_QWORD *)v8;
        _InterlockedDecrement(v8 + 3);
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 9));
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v7);
  }
  return v3;
}
