/*
 * XREFs of VfMiscKeAcquireQueuedSpinLockRaiseToSynch_Entry @ 0x140AA4070
 * Callers:
 *     <none>
 * Callees:
 *     ViMiscCheckKeRaiseIrql @ 0x140AA568C (ViMiscCheckKeRaiseIrql.c)
 */

__int64 __fastcall VfMiscKeAcquireQueuedSpinLockRaiseToSynch_Entry(__int64 a1)
{
  LOBYTE(a1) = 12;
  return ViMiscCheckKeRaiseIrql(a1);
}
