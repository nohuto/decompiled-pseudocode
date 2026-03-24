/*
 * XREFs of xxxEnableMenuItem @ 0x1C0046FB0
 * Callers:
 *     xxxSetSysMenu @ 0x1C0046D10 (xxxSetSysMenu.c)
 *     NtUserEnableMenuItem @ 0x1C012A080 (NtUserEnableMenuItem.c)
 * Callees:
 *     xxxRedrawTitle @ 0x1C00469E0 (xxxRedrawTitle.c)
 *     ?MenuItemState@@YAKAEBV?$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z @ 0x1C0046F48 (-MenuItemState@@YAKAEBV-$SmartObjStackRef@UtagMENU@@@@IKKPEAPEAUtagMENU@@@Z.c)
 *     MNGetPopupFromMenu @ 0x1C0047998 (MNGetPopupFromMenu.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E0F0 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E570 (DirtyVisRgnTrackers.c)
 *     ??1?$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ @ 0x1C008A9DC (--1-$SmartObjStackRefBase@UtagMENU@@@@IEAA@XZ.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 *     ??B?$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ @ 0x1C00DCADC (--B-$SmartObjStackRef@UtagMENU@@@@QEBA_NXZ.c)
 *     DwmGetClassStyle @ 0x1C00EA4A8 (DwmGetClassStyle.c)
 *     ?Init@?$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z @ 0x1C00FE4E0 (-Init@-$SmartObjStackRefBase@UtagMENU@@@@AEAAXPEAUtagMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x1C010139C (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010FCB4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0249854 (xxxMNUpdateShownMenu.c)
 */

__int64 __fastcall xxxEnableMenuItem(__int64 **a1, unsigned int a2, int a3)
{
  __int64 v6; // rax
  unsigned int v7; // r14d
  __int64 v8; // rdx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 *v14; // rax
  _QWORD *v15; // rax
  __int64 v17; // rbx
  __int64 ThreadWin32Thread; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  void *v24; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 CurrentThreadProcess; // rax
  _QWORD v28[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v29[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v30; // [rsp+50h] [rbp-20h]
  _QWORD v31[3]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v32; // [rsp+A0h] [rbp+30h] BYREF

  SmartObjStackRefBase<tagMENU>::Init(v29, 0LL);
  v30 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v28, 0LL);
  v6 = v30;
  if ( !v30 )
    v6 = *(_QWORD *)v29[0];
  v32 = v6;
  v7 = MenuItemState(a1, a2, a3, 3, (__int64)&v32);
  SmartObjStackRefBase<tagMENU>::operator=(v29);
  v8 = **a1;
  if ( (*(_DWORD *)(*(_QWORD *)(v8 + 40) + 40LL) & 0x100) != 0 )
  {
    v8 = **a1;
    if ( a3 != v7 )
    {
      if ( *(_QWORD *)(v8 + 80) )
      {
        v31[2] = 0LL;
        if ( a2 == 61440 || a2 == 61456 || a2 == 61472 || a2 == 61488 || a2 == 61536 || a2 == 61728 )
        {
          v17 = *(_QWORD *)(**a1 + 80);
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          v31[0] = *(_QWORD *)(ThreadWin32Thread + 416);
          *(_QWORD *)(ThreadWin32Thread + 416) = v31;
          v31[1] = v17;
          if ( v17 )
            HMLockObject(v17);
          xxxRedrawTitle(*(unsigned __int64 **)(**a1 + 80), 0x1000u);
          if ( a2 == 61536 && (unsigned int)IsWindowDesktopComposed(v17) )
          {
            DirtyVisRgnTrackers(v17);
            DwmGetClassStyle(v17);
            v24 = (void *)ReferenceDwmApiPort(v23, v22);
            DwmAsyncChildStyleChange(v24);
          }
          ThreadUnlock1(v19);
        }
      }
    }
  }
  if ( (a3 & 3) != v7 && (unsigned __int8)SmartObjStackRef<tagMENU>::operator bool(v29, v8) )
  {
    v20 = v30;
    if ( !v30 )
      v20 = *(_QWORD *)v29[0];
    v21 = MNGetPopupFromMenu(v20, 0LL);
    SmartObjStackRefBase<tagPOPUPMENU>::operator=(v28, v21);
    if ( *(_QWORD *)v28[0] )
      xxxMNUpdateShownMenu(v28, 0LL, 1LL);
  }
  CurrentThread = KeGetCurrentThread();
  v10 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess()
    || (CurrentProcess = PsGetCurrentProcess(v12, v11, v13),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v14 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v14 )
      v10 = *v14;
  }
  if ( v28[0] != gSmartObjNullRef && !--*(_DWORD *)(v28[0] + 8LL) )
  {
    if ( *(_BYTE *)(v28[0] + 12LL) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v28[0]);
  }
  v15 = *(_QWORD **)(v10 + 1472);
  if ( v15 )
    *(_QWORD *)(v10 + 1472) = *v15;
  SmartObjStackRefBase<tagMENU>::~SmartObjStackRefBase<tagMENU>(v29);
  return v7;
}
