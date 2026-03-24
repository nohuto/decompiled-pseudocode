/*
 * XREFs of WheapGetWheaInfo @ 0x1405BAD60
 * Callers:
 *     WheaReportHwError @ 0x1405BB070 (WheaReportHwError.c)
 * Callees:
 *     <none>
 */

void *WheapGetWheaInfo()
{
  return KeGetPcr()->Prcb.WheaInfo;
}
