/*
 * XREFs of ZwLockRegistryKey @ 0x1403FBBC0
 * Callers:
 *     NtLockProductActivationKeys @ 0x1407B4510 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x1407D56F0 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwLockRegistryKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
