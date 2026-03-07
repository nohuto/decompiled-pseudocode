bool DpiTryLidStateRecovery()
{
  return (int)DpiAcpiCallAcpiEventHandler(g_pDeviceObject) >= 0;
}
