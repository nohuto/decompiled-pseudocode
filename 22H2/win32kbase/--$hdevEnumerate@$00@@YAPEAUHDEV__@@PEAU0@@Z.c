/*
 * XREFs of ??$hdevEnumerate@$00@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C0035498
 * Callers:
 *     DrvNotifyModeChangeStartStop @ 0x1C001B11C (DrvNotifyModeChangeStartStop.c)
 *     DxgkEngReleaseWin32kAndPDEVLocks @ 0x1C001B2D0 (DxgkEngReleaseWin32kAndPDEVLocks.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1C001C364 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     GreSuspendDirectDraw @ 0x1C001C510 (GreSuspendDirectDraw.c)
 *     DxgkEngFindViewDesktopPosition @ 0x1C001C6C0 (DxgkEngFindViewDesktopPosition.c)
 *     DrvEnumDisplaySettings @ 0x1C0033CC0 (DrvEnumDisplaySettings.c)
 *     ?DxLddmCleanupAtProcessDestroy@@YAXK@Z @ 0x1C0034BE0 (-DxLddmCleanupAtProcessDestroy@@YAXK@Z.c)
 *     DxgkEngAssertGdiOutput @ 0x1C00BC500 (DxgkEngAssertGdiOutput.c)
 * Callees:
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1C0035700 (-DecrementClientReferenceCount@PDEV@@QEAAKXZ.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0041CF0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

PDEV *__fastcall hdevEnumerate<1>(PDEV **this)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rbx
  __int64 v4; // rcx
  PDEV *v5; // rbx
  PDEV *v6; // rbp
  struct _ERESOURCE *v7; // rcx
  struct _ERESOURCE *v9; // rcx
  PDEV *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v3 = *(struct _ERESOURCE **)(v2 + 8);
  if ( v3 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8), 16LL);
  if ( this )
  {
    v5 = *this;
    v6 = (PDEV *)this;
    v10 = (PDEV *)this;
  }
  else
  {
    v5 = *(PDEV **)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 6080LL);
    v10 = v5;
    v6 = v5;
  }
  while ( v5 )
  {
    if ( (*((_DWORD *)v5 + 10) & 1) != 0 )
    {
      ++*((_DWORD *)v5 + 2);
      TrackObjectReferenceIncrement(1LL, *((_QWORD *)v5 + 440));
      break;
    }
    v5 = *(PDEV **)v5;
  }
  if ( !this )
    goto LABEL_10;
  if ( *((_DWORD *)v6 + 2) > 1u )
  {
    PDEV::DecrementClientReferenceCount(v6);
LABEL_10:
    EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
    v7 = *(struct _ERESOURCE **)(v2 + 8);
    if ( v7 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v7);
      PsLeavePriorityRegion();
    }
    return v5;
  }
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8));
  v9 = *(struct _ERESOURCE **)(v2 + 8);
  if ( v9 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v9);
    PsLeavePriorityRegion();
  }
  PDEVOBJ::vUnreferencePdev((PDEVOBJ *)&v10);
  return v5;
}
