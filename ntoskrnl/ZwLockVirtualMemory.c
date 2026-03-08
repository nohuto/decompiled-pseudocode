/*
 * XREFs of ZwLockVirtualMemory @ 0x1404145B0
 * Callers:
 *     CmSiLockViewOfSection @ 0x1402B2DA4 (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x1405C9C84 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
