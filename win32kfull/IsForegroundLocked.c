/*
 * XREFs of IsForegroundLocked @ 0x1C00236B0
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C0022378 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C002340C (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C0023718 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     xxxActiveWindowTracking @ 0x1C01B83D0 (xxxActiveWindowTracking.c)
 * Callees:
 *     <none>
 */

__int64 IsForegroundLocked()
{
  unsigned int v0; // ecx

  v0 = 0;
  if ( guSFWLockCount || gppiLockSFW )
    return 1;
  return v0;
}
