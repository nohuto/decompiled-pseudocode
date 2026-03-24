/*
 * XREFs of ?GreDeleteSpriteInternal@@YAJPEAUHDEV__@@PEAUHWND__@@PEAXH@Z @ 0x1C00EF4A0
 * Callers:
 *     ?DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C00EB92C (-DwmSetPointerShape@@YAKPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z @ 0x1C00EC5A0 (-vSpDwmDestroyCursorSprites@@YAXPEAUHDEV__@@@Z.c)
 *     GreDeleteSprite @ 0x1C00EF428 (GreDeleteSprite.c)
 * Callees:
 *     ?vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z @ 0x1C0015944 (-vspDestroyDwmSpriteObjInternal@@YAXPEAUHDEV__@@_NPEAVDWMSPRITE@@@Z.c)
 *     ?vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z @ 0x1C0015A54 (-vspRemoveStateReferencesForSprite@@YAXPEAVDWMSPRITE@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00BDAE4 (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C00BDB2C (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C00BE4A0 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z @ 0x1C00ED6E8 (-GdiDeleteSprite@@YAJPEAUHDEV__@@PEAUHWND__@@PEAX@Z.c)
 *     DwmAsyncDestroySprite @ 0x1C00EF6E8 (DwmAsyncDestroySprite.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00F01D8 (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ @ 0x1C016A098 (--1-$UnexpectedThreadTerminationHandler@VDLODCOBJ@@@@QEAA@XZ.c)
 */

__int64 __fastcall GreDeleteSpriteInternal(HDEV a1, struct PDEVOBJ *a2, HSPRITE a3, int a4)
{
  int v4; // r14d
  __int64 v8; // rcx
  struct DWMSPRITE *v9; // rsi
  __int64 v10; // rdi
  void *v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rbx
  unsigned int v14; // ebp
  __int64 v15; // rax
  struct DWMSPRITE *v16; // r8
  _BYTE v18[8]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v19[32]; // [rsp+28h] [rbp-50h] BYREF
  struct DWMSPRITE *v20; // [rsp+48h] [rbp-30h]

  v4 = 1;
  if ( a4 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v18, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)v19, (HWND)a2, a3);
    v9 = v20;
    if ( v20 )
    {
      v10 = *((_QWORD *)v20 + 21);
      v11 = (void *)UserReferenceDwmApiPort(v8);
      v12 = DwmAsyncDestroySprite(v11);
      v13 = *(_QWORD *)(v10 + 184);
      v14 = v12;
      if ( !v13 || !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)(v13 - 24)) )
        goto LABEL_10;
      W32PIDLOCK::vLockSingleThread((W32PIDLOCK *)(v13 + 248));
      if ( *(_DWORD *)(v13 + 300) && (*(_DWORD *)(v13 + 92) & 2) == 0 )
      {
        *((_DWORD *)v9 + 41) |= 0x10u;
        vspRemoveStateReferencesForSprite(v9);
        *(_QWORD *)(v13 + 480) = 0LL;
        *(_QWORD *)(v13 + 472) = a1;
        v15 = *(_QWORD *)v9;
        *(_DWORD *)(v13 + 92) |= 2u;
        *(_DWORD *)(v13 + 496) = 1;
        v4 = 0;
        *(_QWORD *)(v13 + 488) = v15;
      }
      W32PIDLOCK::vUnlockSingleThread((W32PIDLOCK *)(v13 + 248));
      if ( v4 )
      {
LABEL_10:
        *((_DWORD *)v9 + 16) = *((_DWORD *)v9 + 14);
        *((_DWORD *)v9 + 17) = *((_DWORD *)v9 + 15);
        v16 = v20;
        if ( v20 )
          _InterlockedDecrement((volatile signed __int32 *)v20 + 3);
        v20 = 0LL;
        vspDestroyDwmSpriteObjInternal(a1, 0LL, v16);
      }
      v9 = v20;
    }
    else
    {
      v14 = -2143354870;
    }
    if ( v9 )
      _InterlockedDecrement((volatile signed __int32 *)v9 + 3);
    v20 = 0LL;
    UnexpectedThreadTerminationHandler<DLODCOBJ>::~UnexpectedThreadTerminationHandler<DLODCOBJ>(v19);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v18);
  }
  else
  {
    return (unsigned int)GdiDeleteSprite(a1, (HWND)a2, a3);
  }
  return v14;
}
