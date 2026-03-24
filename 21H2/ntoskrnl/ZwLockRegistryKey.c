/*
 * XREFs of ZwLockRegistryKey @ 0x1403FC540
 * Callers:
 *     NtLockProductActivationKeys @ 0x1407B40D0 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x1407D57D0 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockRegistryKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
