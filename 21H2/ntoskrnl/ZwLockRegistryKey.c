/*
 * XREFs of ZwLockRegistryKey @ 0x1403FC720
 * Callers:
 *     NtLockProductActivationKeys @ 0x1407B4270 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x1407D5940 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
