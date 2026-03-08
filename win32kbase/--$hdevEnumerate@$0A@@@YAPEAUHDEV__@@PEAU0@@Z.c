/*
 * XREFs of ??$hdevEnumerate@$0A@@@YAPEAUHDEV__@@PEAU0@@Z @ 0x1C006D874
 * Callers:
 *     ?GrepCloseCurrentProcess@@YAHXZ @ 0x1C006D158 (-GrepCloseCurrentProcess@@YAHXZ.c)
 *     hdevEnumerateAll @ 0x1C00D4830 (hdevEnumerateAll.c)
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXXZ @ 0x1C003C110 (-vUnreferencePdev@PDEVOBJ@@QEAAXXZ.c)
 *     ?TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z @ 0x1C0047CDC (-TrackObjectReferenceIncrement@@YAXW4ReferenceTrackerCountedType@@PEAX@Z.c)
 *     EtwTraceGreLockAcquireSemaphoreExclusive @ 0x1C0049800 (EtwTraceGreLockAcquireSemaphoreExclusive.c)
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 *     ?DecrementClientReferenceCount@PDEV@@QEAAKXZ @ 0x1C006DC00 (-DecrementClientReferenceCount@PDEV@@QEAAKXZ.c)
 */

__int64 __fastcall hdevEnumerate<0>(PDEV *this)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  struct _ERESOURCE *v4; // rdi
  __int64 v5; // rcx
  __int64 v6; // rdi
  PDEV *v7; // rbp
  struct _ERESOURCE *v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _ERESOURCE *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct PDEV *v15; // [rsp+30h] [rbp+8h] BYREF

  v3 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  v4 = *(struct _ERESOURCE **)(v3 + 8);
  if ( v4 )
  {
    PsEnterPriorityRegion(v2);
    ExEnterCriticalRegionAndAcquireResourceExclusive(v4);
  }
  EtwTraceGreLockAcquireSemaphoreExclusive((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v3 + 8), 16);
  if ( this )
  {
    v6 = *(_QWORD *)this;
    v7 = this;
    v15 = this;
  }
  else
  {
    v6 = *(_QWORD *)(*(_QWORD *)(SGDGetSessionState(v5) + 24) + 6080LL);
    v15 = (struct PDEV *)v6;
    v7 = (PDEV *)v6;
  }
  if ( v6 )
  {
    ++*(_DWORD *)(v6 + 8);
    TrackObjectReferenceIncrement(
      1LL,
      *(struct NSInstrumentation::CReferenceTracker::CReferenceCountedType::SCircularBuffer **)(v6 + 3520));
  }
  if ( !this )
    goto LABEL_10;
  if ( *((_DWORD *)v7 + 2) > 1u )
  {
    PDEV::DecrementClientReferenceCount(v7);
LABEL_10:
    EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v3 + 8));
    v8 = *(struct _ERESOURCE **)(v3 + 8);
    if ( v8 )
    {
      ExReleaseResourceAndLeaveCriticalRegion(v8);
      PsLeavePriorityRegion(v10, v9);
    }
    return v6;
  }
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v3 + 8));
  v12 = *(struct _ERESOURCE **)(v3 + 8);
  if ( v12 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v12);
    PsLeavePriorityRegion(v14, v13);
  }
  PDEVOBJ::vUnreferencePdev(&v15);
  return v6;
}
