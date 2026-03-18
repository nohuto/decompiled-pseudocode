/*
 * XREFs of GreUpdateSpriteVisRgn @ 0x1C005AA10
 * Callers:
 *     zzzDecomposeDesktop @ 0x1C005861C (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x1C0058DA4 (zzzComposeDesktop.c)
 *     zzzUpdateLayeredWindow @ 0x1C01BD720 (zzzUpdateLayeredWindow.c)
 * Callees:
 *     ?vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z @ 0x1C0034764 (-vSpUpdateSpriteVisRgn@@YAXPEAUHDEV__@@K@Z.c)
 *     UserVisrgnFromHwnd @ 0x1C005ABF0 (UserVisrgnFromHwnd.c)
 *     ?vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z @ 0x1C005AD50 (-vSpDwmUpdateSpriteVisibility@@YAXPEAVDWMSPRITE@@_N@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00CD064 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00D544C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00DA618 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00FA95C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??1RGNOBJAPI@@QEAA@XZ @ 0x1C011BD38 (--1RGNOBJAPI@@QEAA@XZ.c)
 */

void __fastcall GreUpdateSpriteVisRgn(__int64 a1, char a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rdi
  struct PDEVOBJ *v5; // rdx
  Gre::Base *v6; // rcx
  unsigned int v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rcx
  struct DWMSPRITE *v13; // rsi
  __int64 v14; // rdx
  int v15; // r15d
  _QWORD v16[8]; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+A0h] [rbp+40h] BYREF
  char v18; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v19; // [rsp+B8h] [rbp+58h] BYREF

  v4 = Gre::Base::Globals((Gre::Base *)a1);
  v19 = *((_QWORD *)v4 + 15);
  GreAcquireSemaphore(v19);
  v7 = 0;
  if ( (unsigned int)IsDwmActive() )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v17, v5, 0, 0);
    GreAcquireSemaphore(*((_QWORD *)v4 + 9));
    EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v4 + 9), 7LL);
    if ( (unsigned int)IsDwmActive() )
    {
      v8 = *((_QWORD *)v4 + 38);
      v9 = v8 + 80;
      v10 = *(_QWORD *)(v8 + 80);
      while ( v10 != v9 )
      {
        v11 = v10 - 24;
        v12 = -v10;
        v13 = (struct DWMSPRITE *)(v11 & -(__int64)(v12 != 0));
        if ( !v13 )
          break;
        v14 = *(_QWORD *)((v11 & -(__int64)(v12 != 0)) + 0x28);
        if ( v14 )
        {
          v15 = UserVisrgnFromHwnd(v8 + 184, v14, 1LL);
          if ( v15 )
          {
            RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v16, *(HRGN *)(*((_QWORD *)v4 + 38) + 184LL), 0, 0);
            if ( v16[0] )
              v15 = RGNOBJ::iComplexity((RGNOBJ *)v16) != 1;
            RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v16);
          }
          vSpDwmUpdateSpriteVisibility(v13, v15 != 0);
        }
        v8 = *((_QWORD *)v4 + 38);
        v10 = *((_QWORD *)v13 + 3);
        v9 = v8 + 80;
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
    GreReleaseSemaphoreInternal(*((_QWORD *)v4 + 9));
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v17);
  }
  v17 = a1;
  Gre::Base::Globals(v6);
  SPRITELOCK::SPRITELOCK((SPRITELOCK *)&v18, (struct PDEVOBJ *)&v17);
  if ( *(_DWORD *)(a1 + 140) )
  {
    do
      vSpUpdateSpriteVisRgn(*(HDEV *)(*(_QWORD *)(a1 + 144) + 8LL * v7++), a2);
    while ( v7 < *(_DWORD *)(a1 + 140) );
  }
  else
  {
    vSpUpdateSpriteVisRgn(*(HDEV *)(a1 + 80), a2);
  }
  SPRITELOCK::~SPRITELOCK((SPRITELOCK *)&v18);
  SEMOBJ::vUnlock((SEMOBJ *)&v19);
}
