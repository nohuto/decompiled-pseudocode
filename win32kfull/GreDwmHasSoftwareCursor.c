__int64 __fastcall GreDwmHasSoftwareCursor(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  struct Gre::Base::SESSION_GLOBALS *v5; // rdi
  struct PDEVOBJ *v6; // rdx
  Gre::Base *v7; // rcx
  __int64 v8; // rax
  char v10; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0;
  v5 = Gre::Base::Globals((Gre::Base *)a1);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v10, v6, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v5 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v5 + 9), 7LL);
  if ( IsDwmActive(v7) )
  {
    v8 = *((_QWORD *)v5 + 38);
    if ( (*(_DWORD *)(v8 + 100) || a2)
      && *(_DWORD *)(v8 + 160)
      && (*(_QWORD *)(a1 + 3504) != a1 + 3504 || (*(_DWORD *)(a1 + 40) & 0x20000) != 0) )
    {
      v4 = 1;
    }
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v5 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v10);
  return v4;
}
