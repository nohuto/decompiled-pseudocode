/*
 * XREFs of ??1DYNAMICMODECHANGELOCK@@QEAA@XZ @ 0x1C005B120
 * Callers:
 *     hdcOpenDCW @ 0x1C005ADC0 (hdcOpenDCW.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0042EC0 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall DYNAMICMODECHANGELOCK::~DYNAMICMODECHANGELOCK(DYNAMICMODECHANGELOCK *this)
{
  __int64 v1; // rbx
  struct _ERESOURCE *v2; // rcx

  v1 = *(_QWORD *)(SGDGetSessionState(this) + 24);
  EtwTraceGreLockReleaseSemaphore((__int64)L"GreBaseGlobals.hsemDynamicModeChange", *(_QWORD *)(v1 + 80));
  v2 = *(struct _ERESOURCE **)(v1 + 80);
  if ( v2 )
  {
    ExReleaseResourceAndLeaveCriticalRegion(v2);
    PsLeavePriorityRegion();
  }
}
