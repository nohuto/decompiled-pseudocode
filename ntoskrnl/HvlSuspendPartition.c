/*
 * XREFs of HvlSuspendPartition @ 0x140543B10
 * Callers:
 *     <none>
 * Callees:
 *     HvlSetPartitionProperty @ 0x140543734 (HvlSetPartitionProperty.c)
 */

__int64 __fastcall HvlSuspendPartition(LONGLONG a1, __int64 a2)
{
  return HvlSetPartitionProperty(a1, a2, (PHYSICAL_ADDRESS)1LL);
}
