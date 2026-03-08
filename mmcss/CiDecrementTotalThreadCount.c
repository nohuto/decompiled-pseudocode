/*
 * XREFs of CiDecrementTotalThreadCount @ 0x1C000212C
 * Callers:
 *     CiThreadCleanup @ 0x1C000A4B0 (CiThreadCleanup.c)
 *     CiThreadCreate @ 0x1C000AD80 (CiThreadCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall CiDecrementTotalThreadCount(volatile signed __int32 *a1)
{
  _InterlockedDecrement(a1);
}
