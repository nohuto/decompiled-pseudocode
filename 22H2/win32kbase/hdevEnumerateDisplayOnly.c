/*
 * XREFs of hdevEnumerateDisplayOnly @ 0x1C00355C0
 * Callers:
 *     DxgkEngAcquireWin32kAndPDEVLocks @ 0x1C0019C80 (DxgkEngAcquireWin32kAndPDEVLocks.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C00C6D84 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     ?TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C004193C (-TrackObjectReferenceDecrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0041CF0 (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C00428F0 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C005B180 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 */

__int64 *__fastcall hdevEnumerateDisplayOnly(_QWORD *a1)
{
  __int64 v2; // rdi
  struct _ERESOURCE *v3; // rbx
  __int64 v4; // rcx
  __int64 *v5; // rbx
  _QWORD *v6; // rbp
  struct _ERESOURCE *v7; // rcx
  struct _ERESOURCE *v9; // rcx
  _QWORD *v10; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  v3 = *(struct _ERESOURCE **)(v2 + 8);
  if ( v3 )
  {
    PsEnterPriorityRegion();
    ExEnterCriticalRegionAndAcquireResourceExclusive(v3);
  }
  EtwTraceGreLockAcquireSemaphoreExclusive(L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v2 + 8), 16LL);
  if ( a1 )
  {
    v5 = (__int64 *)*a1;
    v6 = a1;
    v10 = a1;
  }
  else
  {
    v5 = *(__int64 **)(*(_QWORD *)(SGDGetSessionState(v4) + 24) + 6080LL);
    v10 = v5;
    v6 = v5;
  }
  while ( v5 )
  {
    if ( (v5[5] & 1) != 0 )
    {
      ++*((_DWORD *)v5 + 2);
      TrackObjectReferenceIncrement(1LL, v5[440]);
      break;
    }
    v5 = (__int64 *)*v5;
  }
  if ( !a1 )
    goto LABEL_11;
  if ( *((_DWORD *)v6 + 2) > 1u )
  {
    TrackObjectReferenceDecrement(1LL, v6[440]);
    --*((_DWORD *)v6 + 2);
LABEL_11:
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
