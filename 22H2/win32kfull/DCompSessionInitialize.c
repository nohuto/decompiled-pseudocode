/*
 * XREFs of DCompSessionInitialize @ 0x1C0394060
 * Callers:
 *     <none>
 * Callees:
 *     Feature_DWMTouchTargeting__private_ReportDeviceUsage @ 0x1C0166D1C (Feature_DWMTouchTargeting__private_ReportDeviceUsage.c)
 */

__int64 DCompSessionInitialize()
{
  Feature_DWMTouchTargeting__private_ReportDeviceUsage();
  g_bHitTestDwmFirstForTouch = 1;
  return DCompositionSessionInitialize(0LL);
}
