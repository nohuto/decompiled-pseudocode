/*
 * XREFs of ZwLockRegistryKey @ 0x1403FBBC0
 * Callers:
 *     NtLockProductActivationKeys @ 0x1407B4510 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x1407D56F0 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockRegistryKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
