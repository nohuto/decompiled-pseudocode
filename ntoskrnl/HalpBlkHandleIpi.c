/*
 * XREFs of HalpBlkHandleIpi @ 0x140B13190
 * Callers:
 *     HalpBlkIpiInterrupt @ 0x140B12100 (HalpBlkIpiInterrupt.c)
 * Callees:
 *     HalpBlkPoPerformPpmOperation @ 0x140B12DC4 (HalpBlkPoPerformPpmOperation.c)
 */

char HalpBlkHandleIpi()
{
  return HalpBlkPoPerformPpmOperation();
}
