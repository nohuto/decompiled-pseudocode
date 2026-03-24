/*
 * XREFs of ZwLockVirtualMemory @ 0x1403FBBE0
 * Callers:
 *     CmSiLockViewOfSection @ 0x140362260 (CmSiLockViewOfSection.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x14059E7A0 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwLockVirtualMemory(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
