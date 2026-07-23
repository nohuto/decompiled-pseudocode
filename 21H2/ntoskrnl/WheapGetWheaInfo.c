/*
 * XREFs of WheapGetWheaInfo @ 0x1405BB050
 * Callers:
 *     WheaReportHwError @ 0x1405BB360 (WheaReportHwError.c)
 * Callees:
 *     <none>
 */

void *WheapGetWheaInfo()
{
  return KeGetPcr()->Prcb.WheaInfo;
}
