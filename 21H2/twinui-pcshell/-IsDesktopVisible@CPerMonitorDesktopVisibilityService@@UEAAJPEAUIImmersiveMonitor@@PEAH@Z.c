/*
 * XREFs of ?IsDesktopVisible@CPerMonitorDesktopVisibilityService@@UEAAJPEAUIImmersiveMonitor@@PEAH@Z @ 0x1800799D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPerMonitorDesktopVisibilityService::IsDesktopVisible(
        RTL_SRWLOCK *this,
        struct IImmersiveMonitor *a2,
        int *a3)
{
  RTL_SRWLOCK *v3; // rsi

  v3 = this + 15;
  AcquireSRWLockShared(this + 15);
  *a3 = (int)this[14].Ptr;
  if ( v3 )
    ReleaseSRWLockShared(v3);
  return 0LL;
}
