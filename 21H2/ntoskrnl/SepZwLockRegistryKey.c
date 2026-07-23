/*
 * XREFs of SepZwLockRegistryKey @ 0x1407D5940
 * Callers:
 *     <none>
 * Callees:
 *     ZwLockRegistryKey @ 0x1403FC720 (ZwLockRegistryKey.c)
 */

NTSTATUS __fastcall SepZwLockRegistryKey(void *a1)
{
  return ZwLockRegistryKey(a1);
}
