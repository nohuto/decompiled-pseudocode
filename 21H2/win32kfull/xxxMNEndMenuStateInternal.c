/*
 * XREFs of xxxMNEndMenuStateInternal @ 0x1C021C050
 * Callers:
 *     xxxMNEndMenuState @ 0x1C021BF30 (xxxMNEndMenuState.c)
 * Callees:
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x1C0068D40 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     IsMiPEnabledForThread @ 0x1C00AD354 (IsMiPEnabledForThread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00F227C (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C00FE2A4 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DB7A8 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01DB7D4 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     MNDestroyAnimationBitmap @ 0x1C021BBC8 (MNDestroyAnimationBitmap.c)
 *     UnlockMFMWFPWindow @ 0x1C0230320 (UnlockMFMWFPWindow.c)
 *     xxxMNSetCapture @ 0x1C0233B40 (xxxMNSetCapture.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxMNEndMenuStateInternal(__int64 a1, HDC a2)
{
  HDC v4; // rax
  _QWORD *v5; // rcx
  int v6; // ecx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF
  struct tagMENUSTATE *v11; // [rsp+40h] [rbp+8h] BYREF

  UnlockMFMWFPWindow(a2 + 16);
  UnlockMFMWFPWindow(a2 + 20);
  v4 = *(HDC *)(a1 + 608);
  if ( v4 == a2 )
  {
    *(_QWORD *)(a1 + 608) = *((_QWORD *)a2 + 6);
  }
  else
  {
    while ( v4 )
    {
      v5 = v4 + 12;
      v4 = (HDC)*((_QWORD *)v4 + 6);
      if ( v4 == a2 )
      {
        *v5 = *((_QWORD *)a2 + 6);
        break;
      }
    }
  }
  if ( IsMiPEnabledForThread(a1) && *(_QWORD *)(a1 + 1312) )
    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 432LL) = 0LL;
  v6 = *((_DWORD *)a2 + 2);
  if ( (v6 & 0x2000100) == 0x2000000 )
  {
    --guSFWLockCount;
    *((_DWORD *)a2 + 2) = v6 & 0xFDFFFFFF;
  }
  if ( *((_QWORD *)a2 + 16) )
    MNDestroyAnimationBitmap((__int64)a2);
  if ( a2 == gMenuState[0] )
  {
    gdwPUDFlags &= ~0x2000000u;
    GreCleanDCAndSetOwnerEx(gMenuState[17], 2147483666LL, 0LL, 1LL);
  }
  else
  {
    v7 = *((_QWORD *)a2 + 17);
    if ( v7 )
      GreDeleteDC(v7);
    Win32FreePool(a2);
  }
  v8 = *(_QWORD *)(a1 + 608);
  if ( v8 )
  {
    MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
      (MenuStateOwnerLockxxxUnlock *)&v11,
      *(struct tagMENUSTATE **)(a1 + 608));
    v9 = *(_QWORD *)v8;
    if ( (*(_DWORD *)(v8 + 8) & 0x100) != 0 )
    {
      xxxActivateWindow(*(struct tagWND **)(v9 + 56));
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v10, v9);
      xxxMNSetCapture(v10, v8);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>(v10);
    }
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(&v11);
  }
}
