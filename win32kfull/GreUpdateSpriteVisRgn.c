void __fastcall GreUpdateSpriteVisRgn(__int64 a1, char a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  Gre::Base *v5; // rcx
  struct PDEVOBJ *v6; // rdx
  Gre::Base *v7; // rcx
  unsigned int v8; // ebx
  Gre::Base *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  struct DWMSPRITE *v15; // rsi
  __int64 v16; // rdx
  int v17; // r15d
  _QWORD v18[4]; // [rsp+20h] [rbp-20h] BYREF
  __int64 v19; // [rsp+80h] [rbp+40h] BYREF
  char v20; // [rsp+90h] [rbp+50h] BYREF
  __int64 v21; // [rsp+98h] [rbp+58h] BYREF

  v4 = Gre::Base::Globals((Gre::Base *)a1);
  v21 = *((_QWORD *)v4 + 15);
  GreAcquireSemaphore(v21);
  v8 = 0;
  if ( IsDwmActive(v5) )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v19, v6, 0, 0);
    GreAcquireSemaphore(*((_QWORD *)v4 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v4 + 9), 7LL);
    if ( IsDwmActive(v9) )
    {
      v10 = *((_QWORD *)v4 + 38);
      v11 = v10 + 80;
      v12 = *(_QWORD *)(v10 + 80);
      while ( v12 != v11 )
      {
        v13 = v12 - 24;
        v14 = -v12;
        v15 = (struct DWMSPRITE *)(v13 & -(__int64)(v14 != 0));
        if ( !v15 )
          break;
        v16 = *(_QWORD *)((v13 & -(__int64)(v14 != 0)) + 0x28);
        if ( v16 )
        {
          v17 = UserVisrgnFromHwnd(v10 + 184, v16, 1LL);
          if ( v17 )
          {
            RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v18, *(HRGN *)(*((_QWORD *)v4 + 38) + 184LL), 0, 0);
            if ( v18[0] )
              v17 = RGNOBJ::iComplexity((RGNOBJ *)v18) != 1;
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v18);
          }
          vSpDwmUpdateSpriteVisibility(v15, v17 != 0);
        }
        v10 = *((_QWORD *)v4 + 38);
        v12 = *((_QWORD *)v15 + 3);
        v11 = v10 + 80;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 9));
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v19);
  }
  v19 = a1;
  Gre::Base::Globals(v7);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v20, (struct PDEVOBJ *)&v19);
  if ( *(_DWORD *)(a1 + 140) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(a1 + 144) + 8LL * v8++), a2);
    while ( v8 < *(_DWORD *)(a1 + 140) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(a1 + 80), a2);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v20);
  SEMOBJ::vUnlock((SEMOBJ *)&v21);
}
