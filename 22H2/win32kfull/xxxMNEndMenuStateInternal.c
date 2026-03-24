/*
 * XREFs of xxxMNEndMenuStateInternal @ 0x1C0221E30
 * Callers:
 *     xxxMNEndMenuState @ 0x1C0221C40 (xxxMNEndMenuState.c)
 * Callees:
 *     IsMiPEnabledForThread @ 0x1C00C1220 (IsMiPEnabledForThread.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104778 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C0111900 (-xxxActivateWindow@@YA_NPEAUtagWND@@@Z.c)
 *     ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C01DF974 (--0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z.c)
 *     ??1MenuStateOwnerLockxxxUnlock@@QEAA@XZ @ 0x1C01DF9D8 (--1MenuStateOwnerLockxxxUnlock@@QEAA@XZ.c)
 *     MNDestroyAnimationBitmap @ 0x1C02214D8 (MNDestroyAnimationBitmap.c)
 *     UnlockMFMWFPWindow @ 0x1C02369E8 (UnlockMFMWFPWindow.c)
 *     xxxMNSetCapture @ 0x1C023AEB4 (xxxMNSetCapture.c)
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
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v18; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v21; // rax
  _QWORD v22[3]; // [rsp+20h] [rbp-18h] BYREF
  struct tagMENUSTATE *v23; // [rsp+40h] [rbp+8h] BYREF

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
  if ( IsMiPEnabledForThread(a1) && *(_QWORD *)(a1 + 1280) )
    *(_QWORD *)(*(_QWORD *)(a1 + 432) + 440LL) = 0LL;
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
      (MenuStateOwnerLockxxxUnlock *)&v23,
      *(struct tagMENUSTATE **)(a1 + 608));
    v9 = *(_QWORD *)v8;
    if ( (*(_DWORD *)(v8 + 8) & 0x100) != 0 )
    {
      xxxActivateWindow(*(struct tagWND **)(v9 + 56));
    }
    else
    {
      SmartObjStackRefBase<tagPOPUPMENU>::Init(v22, v9);
      xxxMNSetCapture(v22, v8);
      CurrentThread = KeGetCurrentThread();
      v11 = 0LL;
      if ( !(unsigned __int8)KeIsAttachedProcess(v12)
        || (CurrentProcess = PsGetCurrentProcess(v14, v13, v15),
            ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
            CurrentThreadProcess = PsGetCurrentThreadProcess(v18),
            ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
      {
        ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
        if ( ThreadWin32Thread )
          v11 = *ThreadWin32Thread;
      }
      if ( v22[0] != gSmartObjNullRef && !--*(_DWORD *)(v22[0] + 8LL) )
      {
        if ( *(_BYTE *)(v22[0] + 12LL) )
          Win32FreeToPagedLookasideList(gpStackRefLookAside, v22[0]);
      }
      v21 = *(_QWORD **)(v11 + 1472);
      if ( v21 )
        *(_QWORD *)(v11 + 1472) = *v21;
    }
    MenuStateOwnerLockxxxUnlock::~MenuStateOwnerLockxxxUnlock(&v23);
  }
}
