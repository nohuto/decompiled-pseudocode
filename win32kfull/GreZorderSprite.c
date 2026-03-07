void __fastcall GreZorderSprite(Gre::Base *a1, HWND a2, HWND a3, int a4)
{
  int v8; // r14d
  struct Gre::Base::SESSION_GLOBALS *v9; // rdi
  Gre::Base *v10; // rcx
  int v11; // ebx
  __int64 *ThreadWin32Thread; // rax
  Gre::Base *v13; // rcx
  __int64 v14; // rax
  struct Gre::Base::SESSION_GLOBALS *v15; // rbx
  Gre::Base *v16; // rcx
  HSPRITE v17; // rsi
  HSPRITE v18; // r15
  Gre::Base *v19; // rcx
  struct Gre::Base::SESSION_GLOBALS *v20; // rbx
  _QWORD v21[7]; // [rsp+20h] [rbp-38h] BYREF

  v8 = 1;
  v9 = Gre::Base::Globals(a1);
  v21[0] = *((_QWORD *)v9 + 15);
  GreAcquireSemaphore(v21[0]);
  if ( !a4 || !*((_QWORD *)Gre::Base::Globals(v10) + 38) )
    goto LABEL_16;
  v11 = 0;
  ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread || (v14 = *ThreadWin32Thread) == 0 || !*(_DWORD *)(v14 + 104) && !*(_DWORD *)(v14 + 108) )
  {
    v15 = Gre::Base::Globals(v13);
    GreAcquireSemaphore(*((_QWORD *)v15 + 14));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemSprite", *((_QWORD *)v15 + 14), 5LL);
    v11 = 1;
  }
  GreAcquireSemaphore(*((_QWORD *)v9 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v9 + 9), 7LL);
  if ( *((_QWORD *)Gre::Base::Globals(v16) + 38) )
  {
    v8 = 0;
    v17 = 0LL;
    v18 = DWMSPRITEREF::hspLookupWindow(a2);
    if ( a3 )
      v17 = DWMSPRITEREF::hspLookupWindow(a3);
    vSpDwmZorderSprite(v18, v17);
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v9 + 9));
  if ( v11 )
  {
    v20 = Gre::Base::Globals(v19);
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemSprite");
    GreReleaseSemaphoreInternal(*((_QWORD *)v20 + 14));
  }
  if ( v8 )
LABEL_16:
    GdiZorderSprite((HDEV)a1, a2, a3);
  SEMOBJ::vUnlock((SEMOBJ *)v21);
}
