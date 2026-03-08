/*
 * XREFs of KeStallWhileFrozen @ 0x1405745F0
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckStall @ 0x14022AD70 (KiCheckStall.c)
 */

__int64 KeStallWhileFrozen()
{
  return KiCheckStall((__int64)KeGetCurrentPrcb(), 0);
}
