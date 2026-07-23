/*
 * XREFs of ZwLockProductActivationKeys @ 0x1403FBBA0
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140A5B1EC (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockProductActivationKeys(ULONG *pPrivateVer, ULONG *pSafeMode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(pPrivateVer);
}
