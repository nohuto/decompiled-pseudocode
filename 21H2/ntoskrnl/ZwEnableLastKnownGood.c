/*
 * XREFs of ZwEnableLastKnownGood @ 0x1403FC140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS ZwEnableLastKnownGood(void)
{
  __int64 v0; // rcx

  _disable();
  __readeflags();
  return KiServiceInternal(v0);
}
