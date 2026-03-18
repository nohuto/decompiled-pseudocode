/*
 * XREFs of ViUnlockContextPointer @ 0x140AC516C
 * Callers:
 *     VfInsertContext @ 0x1405CE4D0 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405CE660 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
