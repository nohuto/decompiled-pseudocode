/*
 * XREFs of ZwLockProductActivationKeys @ 0x1403FC700
 * Callers:
 *     ExInitializeTimeRefresh @ 0x140A5C1EC (ExInitializeTimeRefresh.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockProductActivationKeys(ULONG *pPrivateVer, ULONG *pSafeMode)
{
  _disable();
  __readeflags();
  return KiServiceInternal(pPrivateVer);
}
