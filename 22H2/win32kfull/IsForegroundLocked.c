/*
 * XREFs of IsForegroundLocked @ 0x1C005FED4
 * Callers:
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C005D604 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C005F270 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     _anonymous_namespace_::CheckCanonicalForegroundAccess @ 0x1C005FC30 (_anonymous_namespace_--CheckCanonicalForegroundAccess.c)
 *     xxxActiveWindowTracking @ 0x1C01B7230 (xxxActiveWindowTracking.c)
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
