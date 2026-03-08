/*
 * XREFs of SepZwLockRegistryKey @ 0x140861C60
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x140414590 (ZwLockRegistryKey.c)
 */

__int64 __fastcall SepZwLockRegistryKey(__int64 a1, __int64 a2)
{
  return ZwLockRegistryKey(a1, a2);
}
