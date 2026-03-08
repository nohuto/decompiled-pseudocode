/*
 * XREFs of ??1DRIVERMANAGEMENTSHARELOCK@@QEAA@XZ @ 0x1C018C7B0
 * Callers:
 *     DrvDisplayConfigGetScaleFactorOverrides @ 0x1C0193370 (DrvDisplayConfigGetScaleFactorOverrides.c)
 *     DrvDisplayConfigSetScaleFactorOverride @ 0x1C0193A60 (DrvDisplayConfigSetScaleFactorOverride.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DRIVERMANAGEMENTSHARELOCK::~DRIVERMANAGEMENTSHARELOCK(DRIVERMANAGEMENTSHARELOCK *this)
{
  __int64 v1; // rbx
  struct _ERESOURCE *v2; // rcx
  __int64 v3; // rdx
  __int64 v4; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDriverMgmt", *(_QWORD *)(v1 + 8));
  v2 = *(struct _ERESOURCE **)(v1 + 8);
  if ( v2 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v2);
    PsLeavePriorityRegion(v4, v3);
  }
}
