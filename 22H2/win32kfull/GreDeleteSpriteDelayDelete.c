/*
 * XREFs of GreDeleteSpriteDelayDelete @ 0x1C0267588
 * Callers:
 *     ?vClearRendering@DC@@QEAAXXZ @ 0x1C00FDE70 (-vClearRendering@DC@@QEAAXXZ.c)
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C001C2F4 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C007B35C (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00C899C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00CD064 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     IsDwmActive @ 0x1C00D4B60 (IsDwmActive.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00D544C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C013E000 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 *     ?GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C0279FEC (-GdiDeleteSpriteDelayDelete@@YAHPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreDeleteSpriteDelayDelete(Gre::Base *a1, HWND a2, HSPRITE a3, int a4)
{
  unsigned int v4; // edi
  int v9; // r13d
  Gre::Base *v10; // rcx
  struct Gre::Base::SESSION_GLOBALS *v11; // rbp
  struct PDEVOBJ *v12; // rdx
  Gre::Base *v13; // rcx
  struct DWMSPRITE *v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rbx
  struct DWMSPRITE *v17; // r8
  _BYTE v19[32]; // [rsp+20h] [rbp-58h] BYREF
  struct DWMSPRITE *v20; // [rsp+40h] [rbp-38h]
  char v21; // [rsp+98h] [rbp+20h] BYREF

  v4 = 0;
  v9 = 1;
  v11 = Gre::Base::Globals(a1);
  if ( !a4 || !IsDwmActive(v10) )
    return (unsigned int)GdiDeleteSpriteDelayDelete((HDEV)a1, a2, a3);
  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v21, v12, 0, 0);
  GreAcquireSemaphore(*((_QWORD *)v11 + 9));
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDwmState", *((_QWORD *)v11 + 9), 7LL);
  if ( IsDwmActive(v13) )
  {
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v19, a2, a3);
    v14 = v20;
    v9 = 0;
    if ( v20 )
    {
      v15 = *(_QWORD *)(*((_QWORD *)v20 + 18) + 184LL);
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
      v17 = v20;
      if ( v20 )
        _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
      v20 = 0LL;
      vspDestroyDwmSpriteObjInternal((HDEV)a1, 0LL, v17);
      if ( v20 )
        _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
    }
    v20 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>((__int64)v19);
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDwmState");
  GreReleaseSemaphoreInternal(*((_QWORD *)v11 + 9));
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v21);
  if ( v9 )
    return (unsigned int)GdiDeleteSpriteDelayDelete((HDEV)a1, a2, a3);
  return v4;
}
