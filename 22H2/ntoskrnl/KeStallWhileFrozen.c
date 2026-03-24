/*
 * XREFs of KeStallWhileFrozen @ 0x14051DA20
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x14051DC60 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall(KeGetCurrentPrcb(), 0LL);
}
