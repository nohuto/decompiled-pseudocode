void __fastcall vCleanupUMWindowlessSprite(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  Gre::Base *v5; // rcx
  struct Gre::Base::SESSION_GLOBALS *v6; // rdi
  Gre::Base *HDEV; // rbp
  Gre::Base *v8; // rcx
  struct Gre::Base::SESSION_GLOBALS *v9; // rbx
  _QWORD **v10; // rax
  _QWORD *v11; // rbx
  __int64 v12; // rax
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  int v15; // [rsp+48h] [rbp+10h] BYREF
  __int64 v16; // [rsp+50h] [rbp+18h] BYREF
  __int64 v17; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)IsDwmActive() && PsGetCurrentProcess(v3, v2, v4) != gpepCSRSS )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
    v6 = Gre::Base::Globals(v5);
    v17 = *((_QWORD *)v6 + 15);
    GreAcquireSemaphore(v17);
    HDEV = (Gre::Base *)UserGetHDEV();
    W32GetThreadWin32Thread(KeGetCurrentThread());
    v9 = Gre::Base::Globals(v8);
    GreAcquireSemaphore(*((_QWORD *)v9 + 14));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v9 + 14), 5LL);
    v16 = *((_QWORD *)v6 + 9);
    v15 = 1;
    GreAcquireSemaphore(v16);
    if ( (unsigned int)IsDwmActive() )
    {
      v10 = (_QWORD **)(*((_QWORD *)v6 + 38) + 80LL);
      v11 = *v10;
      while ( v11 != v10 )
      {
        v12 = (__int64)v11;
        v13 = (unsigned __int64)(v11 - 3);
        v11 = (_QWORD *)*v11;
        v14 = -v12;
        if ( (*(_DWORD *)((v13 & -(__int64)(v14 != 0)) + 0x48) & 0x400000) != 0
          && *(_DWORD *)((v13 & -(__int64)(v14 != 0)) + 0x70) == a1 )
        {
          GreDeleteSprite(HDEV, 0LL, *(void **)(v13 & -(__int64)(v14 != 0)), 1);
        }
        v10 = (_QWORD **)(*((_QWORD *)v6 + 38) + 80LL);
      }
    }
    SPRITERANGELOCK::vUnlock((SPRITERANGELOCK *)&v16);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v15);
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v15);
  }
}
