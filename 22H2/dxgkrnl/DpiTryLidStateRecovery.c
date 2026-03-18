/*
 * XREFs of DpiTryLidStateRecovery @ 0x1C005E78C
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C02F9800 (DxgkCheckDisplayState.c)
 * Callees:
 *     DpiAcpiCallAcpiEventHandler @ 0x1C00660C4 (DpiAcpiCallAcpiEventHandler.c)
 */

bool DpiTryLidStateRecovery()
{
  return (int)DpiAcpiCallAcpiEventHandler(g_pDeviceObject) >= 0;
}
