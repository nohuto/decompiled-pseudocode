/*
 * XREFs of DpiTryLidStateRecovery @ 0x1C005DB6C
 * Callers:
 *     DxgkCheckDisplayState @ 0x1C02F49D0 (DxgkCheckDisplayState.c)
 * Callees:
 *     DpiAcpiCallAcpiEventHandler @ 0x1C00654A4 (DpiAcpiCallAcpiEventHandler.c)
 */

bool DpiTryLidStateRecovery()
{
  return (int)DpiAcpiCallAcpiEventHandler(g_pDeviceObject) >= 0;
}
