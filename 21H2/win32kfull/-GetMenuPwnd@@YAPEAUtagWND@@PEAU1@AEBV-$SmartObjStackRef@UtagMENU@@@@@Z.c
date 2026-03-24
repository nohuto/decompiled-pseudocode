/*
 * XREFs of ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C024E73C
 * Callers:
 *     xxxGetMenuItemRect @ 0x1C024EBE8 (xxxGetMenuItemRect.c)
 *     xxxMenuItemFromPoint @ 0x1C024EE94 (xxxMenuItemFromPoint.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C0047998 (MNGetPopupFromMenu.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010FCB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 */

__int64 __fastcall GetMenuPwnd(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  _DWORD *v5; // rax
  __int64 v6; // rcx
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v14; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v17; // rax
  _QWORD v19[3]; // [rsp+20h] [rbp-18h] BYREF

  v3 = a1;
  if ( (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)a2 + 40LL) + 40LL) & 1) != 0
    && (!a1 || (*(_WORD *)(*(_QWORD *)(a1 + 40) + 42LL) & 0x2FFF) != 0x29C) )
  {
    SmartObjStackRefBase<tagPOPUPMENU>::Init(v19, 0LL);
    v4 = *(_QWORD *)(a2 + 16);
    if ( !v4 )
      v4 = **(_QWORD **)a2;
    v5 = MNGetPopupFromMenu(v4, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v19, (__int64)v5);
    if ( *(_QWORD *)v19[0] )
    {
      v6 = *(_QWORD *)v19[0];
      v3 = *(_QWORD *)(*(_QWORD *)v19[0] + 16LL);
    }
    CurrentThread = KeGetCurrentThread();
    v8 = 0LL;
    if ( !(unsigned __int8)KeIsAttachedProcess(v6)
      || (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
          ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
          CurrentThreadProcess = PsGetCurrentThreadProcess(v14),
          ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
    {
      ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
      if ( ThreadWin32Thread )
        v8 = *ThreadWin32Thread;
    }
    if ( v19[0] != gSmartObjNullRef && !--*(_DWORD *)(v19[0] + 8LL) )
    {
      if ( *(_BYTE *)(v19[0] + 12LL) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v19[0]);
    }
    v17 = *(_QWORD **)(v8 + 1472);
    if ( v17 )
      *(_QWORD *)(v8 + 1472) = *v17;
  }
  return v3;
}
