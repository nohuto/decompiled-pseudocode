/*
 * XREFs of IsForegroundLocked @ 0x1C003D264
 * Callers:
 *     _anonymous_namespace_::CanSetForegroundWindow @ 0x1C003CB30 (_anonymous_namespace_--CanSetForegroundWindow.c)
 *     ?CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z @ 0x1C003D1D4 (-CheckCanonicalForegroundAccess@@YA_NW4ForegroundChangeAllowPolicy@@@Z.c)
 *     _anonymous_namespace_::FAllowForegroundActivate @ 0x1C003DAA8 (_anonymous_namespace_--FAllowForegroundActivate.c)
 *     xxxActiveWindowTracking @ 0x1C01E2A2C (xxxActiveWindowTracking.c)
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
