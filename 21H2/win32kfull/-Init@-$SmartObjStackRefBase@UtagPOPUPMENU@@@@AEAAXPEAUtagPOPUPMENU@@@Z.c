/*
 * XREFs of ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C0104AC8
 * Callers:
 *     xxxSetMenuInfo @ 0x1C0046AB4 (xxxSetMenuInfo.c)
 *     xxxEnableMenuItem @ 0x1C0046FB0 (xxxEnableMenuItem.c)
 *     ?xxxRemoveDeleteMenuHelper@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@IKH@Z @ 0x1C00473F8 (-xxxRemoveDeleteMenuHelper@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@IKH@Z.c)
 *     GetInheritedMonitor @ 0x1C006C184 (GetInheritedMonitor.c)
 *     xxxInsertMenuItem @ 0x1C007933C (xxxInsertMenuItem.c)
 *     xxxFreeWindow @ 0x1C007A7C0 (xxxFreeWindow.c)
 *     xxxGetSystemMenu @ 0x1C00DC8C4 (xxxGetSystemMenu.c)
 *     xxxSysCommand @ 0x1C0130714 (xxxSysCommand.c)
 *     ??0?$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z @ 0x1C0167A60 (--0-$SmartObjStackRef@UtagPOPUPMENU@@@@QEAA@PEAUtagPOPUPMENU@@@Z.c)
 *     ?xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z @ 0x1C01F19F8 (-xxxPointerActivateInternal@@YAXPEAUtagWND@@F_KPEBUtagPOINTEREVENTINT@@H@Z.c)
 *     MNFlushDestroyedPopups @ 0x1C0221AF0 (MNFlushDestroyedPopups.c)
 *     MNUnlinkDelayedFreePopups @ 0x1C0221FC0 (MNUnlinkDelayedFreePopups.c)
 *     xxxMNEndMenuState @ 0x1C0222200 (xxxMNEndMenuState.c)
 *     xxxMNEndMenuStateInternal @ 0x1C02223F0 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenuState @ 0x1C0222A90 (xxxMNStartMenuState.c)
 *     xxxEndMenuLoop @ 0x1C0233D00 (xxxEndMenuLoop.c)
 *     xxxHandleMenuMessages @ 0x1C0233F78 (xxxHandleMenuMessages.c)
 *     ?GetMenuInheritedContextHelpId@@YAKAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@@Z @ 0x1C0235370 (-GetMenuInheritedContextHelpId@@YAKAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@@Z.c)
 *     ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0235540 (-MNCheckScroll@@YAHAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV-$SmartObjStackRef@UtagMENU@@@@PE.c)
 *     ?xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z @ 0x1C0235CC8 (-xxxMNDestroyHandler@@YAXPEAUtagMENUWND@@@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0236330 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?zzzMNFadeSelection@@YAHAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z @ 0x1C0236740 (-zzzMNFadeSelection@@YAHAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@@Z.c)
 *     MNSetTimerToCloseHierarchy @ 0x1C0236E00 (MNSetTimerToCloseHierarchy.c)
 *     xxxCallHandleMenuMessages @ 0x1C0237090 (xxxCallHandleMenuMessages.c)
 *     xxxMNCancel @ 0x1C0237494 (xxxMNCancel.c)
 *     xxxMNCloseHierarchy @ 0x1C0237D20 (xxxMNCloseHierarchy.c)
 *     xxxMNDismissIfOffMenu @ 0x1C02380E4 (xxxMNDismissIfOffMenu.c)
 *     xxxMNKeyDown @ 0x1C0238A98 (xxxMNKeyDown.c)
 *     xxxMNMouseMove @ 0x1C02396FC (xxxMNMouseMove.c)
 *     xxxMNOpenHierarchy @ 0x1C0239AB8 (xxxMNOpenHierarchy.c)
 *     xxxMNSelectItem @ 0x1C023AB7C (xxxMNSelectItem.c)
 *     xxxMenuWindowProc @ 0x1C023BBA0 (xxxMenuWindowProc.c)
 *     xxxHiliteMenuItem @ 0x1C02490D4 (xxxHiliteMenuItem.c)
 *     xxxMNDragOver @ 0x1C0249BDC (xxxMNDragOver.c)
 *     xxxMNSetGapState @ 0x1C0249E4C (xxxMNSetGapState.c)
 *     xxxMNUpdateDraggingInfo @ 0x1C024A138 (xxxMNUpdateDraggingInfo.c)
 *     xxxEndMenu @ 0x1C024A3F4 (xxxEndMenu.c)
 *     xxxTrackPopupMenuEx @ 0x1C024ABB0 (xxxTrackPopupMenuEx.c)
 *     ?GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV?$SmartObjStackRef@UtagMENU@@@@@Z @ 0x1C024E73C (-GetMenuPwnd@@YAPEAUtagWND@@PEAU1@AEBV-$SmartObjStackRef@UtagMENU@@@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmartObjStackRefBase<tagPOPUPMENU>::Init(_QWORD *a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 *ThreadWin32Thread; // rax
  _QWORD *v10; // rcx
  __int64 result; // rax
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v14; // rcx
  __int64 CurrentThreadProcess; // rax

  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v7, v6, v8),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v14),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v5 = *ThreadWin32Thread;
  }
  v10 = a1 + 1;
  a1[1] = 0LL;
  *a1 = gSmartObjNullRef;
  if ( a2 )
  {
    *a1 = *(_QWORD *)(a2 + 88);
    ++*(_DWORD *)(*(_QWORD *)(a2 + 88) + 8LL);
  }
  result = *(_QWORD *)(v5 + 1472);
  *v10 = result;
  *(_QWORD *)(v5 + 1472) = v10;
  return result;
}
