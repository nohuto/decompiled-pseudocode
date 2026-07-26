/*
 * XREFs of NdisCurrentProcessorIndexExported @ 0x1C0008A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG NdisCurrentProcessorIndexExported(void)
{
  return KeGetPcr()->Prcb.Number;
}
