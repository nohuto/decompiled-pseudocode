/*
 * XREFs of KeIsExecutingDpc @ 0x140304690
 * Callers:
 *     KiDeliverApc @ 0x14024A0C0 (KiDeliverApc.c)
 * Callees:
 *     <none>
 */

__int64 KeIsExecutingDpc()
{
  return KeGetPcr()->Prcb.DpcRequestSummary & 0x10001;
}
