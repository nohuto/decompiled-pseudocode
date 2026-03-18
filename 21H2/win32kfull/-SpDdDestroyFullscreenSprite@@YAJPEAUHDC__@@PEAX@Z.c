/*
 * XREFs of ?SpDdDestroyFullscreenSprite@@YAJPEAUHDC__@@PEAX@Z @ 0x1C026BE20
 * Callers:
 *     NtGdiDdDestroyFullscreenSprite @ 0x1C0275930 (NtGdiDdDestroyFullscreenSprite.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C001174C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C0022A50 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026DCC (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0026E10 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C003FC30 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0041DDC (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C00495DC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     GreDeleteSprite @ 0x1C00B3D48 (GreDeleteSprite.c)
 */

__int64 __fastcall SpDdDestroyFullscreenSprite(HDC a1, HSPRITE a2)
{
  unsigned int v3; // ebx
  HDEV v4; // rsi
  struct PDEVOBJ *v5; // rdx
  _QWORD v7[9]; // [rsp+20h] [rbp-48h] BYREF
  char v8; // [rsp+80h] [rbp+18h] BYREF
  __int64 v9; // [rsp+88h] [rbp+20h] BYREF

  v3 = -1073741811;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
    v9 = ghsemGreLock;
    GreAcquireSemaphore(ghsemGreLock);
    v4 = *(HDEV *)(v7[0] + 48LL);
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v8, v5, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    if ( g_pDwmState && (unsigned int)GreDeleteSprite(v4, 0LL, a2, 1) )
      v3 = 0;
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v8);
    SEMOBJ::vUnlock((SEMOBJ *)&v9);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v8);
  }
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return v3;
}
