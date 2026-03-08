/*
 * XREFs of ZwLockRegistryKey @ 0x140414590
 * Callers:
 *     NtLockProductActivationKeys @ 0x140838E20 (NtLockProductActivationKeys.c)
 *     SepZwLockRegistryKey @ 0x140861C60 (SepZwLockRegistryKey.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockRegistryKey(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
