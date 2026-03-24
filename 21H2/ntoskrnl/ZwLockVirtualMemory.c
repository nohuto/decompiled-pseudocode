/*
 * XREFs of ZwLockVirtualMemory @ 0x1403FC560
 * Callers:
 *     CmSiLockViewOfSection @ 0x140362B90 (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14059E860 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
