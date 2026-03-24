/*
 * XREFs of ?xxxRedrawForSetLPITEMInfo@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0047758
 * Callers:
 *     xxxSetMenuItemInfo @ 0x1C00457B8 (xxxSetMenuItemInfo.c)
 *     xxxInsertMenuItem @ 0x1C007929C (xxxInsertMenuItem.c)
 * Callees:
 *     MNGetPopupFromMenu @ 0x1C00478F8 (MNGetPopupFromMenu.c)
 *     MNGetpItemIndex @ 0x1C00482D0 (MNGetpItemIndex.c)
 *     DwmAsyncChildStyleChange @ 0x1C004E050 (DwmAsyncChildStyleChange.c)
 *     DirtyVisRgnTrackers @ 0x1C004E4D0 (DirtyVisRgnTrackers.c)
 *     W32GetThreadWin32Thread @ 0x1C008E480 (W32GetThreadWin32Thread.c)
 *     DwmGetClassStyle @ 0x1C00EA158 (DwmGetClassStyle.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x1C010F934 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     xxxMNUpdateShownMenu @ 0x1C0249294 (xxxMNUpdateShownMenu.c)
 */

_QWORD *__fastcall xxxRedrawForSetLPITEMInfo(__int64 **a1, __int64 a2)
{
  __int64 ThreadWin32Thread; // rax
  __int64 *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v9; // rdi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *v13; // rax
  _QWORD *result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  void *v17; // rax
  __int64 *v18; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v21; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v23; // [rsp+20h] [rbp-18h] BYREF
  __int64 v24; // [rsp+28h] [rbp-10h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v23 = gSmartObjNullRef;
  v24 = *(_QWORD *)(ThreadWin32Thread + 1472);
  *(_QWORD *)(ThreadWin32Thread + 1472) = &v24;
  v5 = a1[2];
  if ( !v5 )
    v5 = (__int64 *)**a1;
  v6 = MNGetPopupFromMenu(v5, 0LL);
  SmartObjStackRefBase<tagPOPUPMENU>::operator=(&v23, v6);
  if ( !*(_QWORD *)v23 )
    goto LABEL_4;
  xxxMNUpdateShownMenu(&v23, a2, 1LL);
  v18 = a1[2];
  if ( !v18 )
    v18 = (__int64 *)**a1;
  if ( (unsigned int)MNGetpItemIndex(v18, a2) != -1 )
  {
LABEL_4:
    v7 = **a1;
    if ( (*(_DWORD *)(*(_QWORD *)(v7 + 40) + 40LL) & 0x100) != 0 && *(_DWORD *)(*(_QWORD *)a2 + 8LL) == 61536 )
    {
      v7 = **a1;
      if ( *(_QWORD *)(v7 + 80) )
      {
        if ( (unsigned int)IsWindowDesktopComposed(*(_QWORD *)(**a1 + 80)) )
        {
          DirtyVisRgnTrackers(*(_QWORD *)(**a1 + 80));
          DwmGetClassStyle(*(_QWORD *)(**a1 + 80));
          v17 = (void *)ReferenceDwmApiPort(v16, v15);
          DwmAsyncChildStyleChange(v17);
        }
      }
    }
  }
  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(v7)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v21),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    v13 = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( v13 )
      v9 = *v13;
  }
  if ( v23 != gSmartObjNullRef && !--*(_DWORD *)(v23 + 8) )
  {
    if ( *(_BYTE *)(v23 + 12) )
      Win32FreeToPagedLookasideList(gpStackRefLookAside, v23);
  }
  result = *(_QWORD **)(v9 + 1472);
  if ( result )
  {
    result = (_QWORD *)*result;
    *(_QWORD *)(v9 + 1472) = result;
  }
  return result;
}
