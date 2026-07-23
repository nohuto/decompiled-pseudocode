/*
 * XREFs of ViUnlockContextPointer @ 0x1409C960C
 * Callers:
 *     VfInsertContext @ 0x1405A0A80 (VfInsertContext.c)
 *     VfRemoveContext @ 0x1405A0C50 (VfRemoveContext.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall ViUnlockContextPointer(volatile signed __int64 *a1)
{
  return _InterlockedExchangeAdd64(a1, 1uLL);
}
