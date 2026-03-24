/*
 * XREFs of WheapGetWheaInfo @ 0x1405BAE20
 * Callers:
 *     WheaReportHwError @ 0x1405BB130 (WheaReportHwError.c)
 * Callees:
 *     <none>
 */

void *WheapGetWheaInfo()
{
  return KeGetPcr()->Prcb.WheaInfo;
}
