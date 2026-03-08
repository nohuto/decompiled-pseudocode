/*
 * XREFs of ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C002194C
 * Callers:
 *     GreIsDisconnectDeviceAttached @ 0x1C00218D0 (GreIsDisconnectDeviceAttached.c)
 *     EngUpdateDeviceSurface @ 0x1C018BD80 (EngUpdateDeviceSurface.c)
 * Callees:
 *     EtwTraceGreLockReleaseSemaphore @ 0x1C0049E20 (EtwTraceGreLockReleaseSemaphore.c)
 */

void __fastcall SEMOBJSHARED::~SEMOBJSHARED(PERESOURCE *this)
{
  __int64 v2; // rdx
  __int64 v3; // rcx

  EtwTraceGreLockReleaseSemaphore(L"hsem", *this);
  if ( *this )
  {
    ExReleaseResourceAndLeaveCriticalRegion(*this);
    PsLeavePriorityRegion(v3, v2);
  }
}
