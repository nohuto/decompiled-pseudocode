/*
 * XREFs of DxgkEngReleaseStableVisRgn @ 0x1C014D730
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkEngReleaseStableVisRgn(Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *v1; // rbx

  v1 = Gre::Base::Globals(a1);
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDCVisRgn");
  GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 11));
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemGreLock");
  GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 15));
  EtwTraceGreLockReleaseSemaphore(L"GreBaseGlobals.hsemDynamicModeChange");
  GreReleaseSemaphoreInternal(*((_QWORD *)v1 + 10));
  return UserLeaveUserCritSec();
}
