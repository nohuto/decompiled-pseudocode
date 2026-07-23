/*
 * XREFs of SepZwLockRegistryKey @ 0x1407D56F0
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x1403FBBC0 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
