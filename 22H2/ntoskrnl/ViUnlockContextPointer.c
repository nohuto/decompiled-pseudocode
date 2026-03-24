/*
 * XREFs of ViUnlockContextPointer @ 0x1409C861C
 * Callers:
 *     VfInsertContext @ 0x1405A0790 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405A0960 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
