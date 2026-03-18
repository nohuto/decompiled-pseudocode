/*
 * XREFs of GreLockVisRgnShared @ 0x1C0030750
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceGreLockAcquireSemaphoreShared @ 0x1C0089800 (EtwTraceGreLockAcquireSemaphoreShared.c)
 */

__int64 __fastcall GreLockVisRgnShared(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rdx

  if ( ghsemDynamicModeChange )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDynamicModeChange, a2);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", ghsemDynamicModeChange);
  if ( ghsemGreLock )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemGreLock, v2);
  EtwTraceGreLockAcquireSemaphoreShared(L"ghsemGreLock", ghsemGreLock);
  if ( ghsemDCVisRgn )
    ExEnterPriorityRegionAndAcquireResourceShared(ghsemDCVisRgn, v3);
  return EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDCVisRgn", ghsemDCVisRgn);
}
