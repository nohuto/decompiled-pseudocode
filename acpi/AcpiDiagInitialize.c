/*
 * XREFs of AcpiDiagInitialize @ 0x1C00A71E8
 * Callers:
 *     DriverEntry @ 0x1C00A7300 (DriverEntry.c)
 * Callees:
 *     AcpiDiagRequeueThermalPollingTimer @ 0x1C0007360 (AcpiDiagRequeueThermalPollingTimer.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C007A840 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     OSCloseHandle @ 0x1C008DB38 (OSCloseHandle.c)
 *     OSOpenHandle @ 0x1C008DF10 (OSOpenHandle.c)
 *     OSReadRegValue @ 0x1C008E6A0 (OSReadRegValue.c)
 */

__int64 AcpiDiagInitialize()
{
  unsigned int v0; // ebx
  int v1; // edi
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  void *v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v0 = 0;
  v4 = 0LL;
  KeInitializeTimer2(&AcpiDiagThermalPollingTimer, AcpiDiagThermalPollingTimerRoutine, 0LL, 8LL);
  EtwRegister(&ACPI_ETW_PROVIDER, (PETWENABLECALLBACK)AcpiDiagTraceControlCallback, 0LL, &AcpiDiagHandle);
  EtwRegister(
    &THERMAL_POLLING_ETW_PROVIDER,
    (PETWENABLECALLBACK)AcpiDiagThermalPollingTraceControlCallback,
    0LL,
    &AcpiDiagThermalPollingHandle);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1C006DCE0);
  v1 = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, (__int64)&v4);
  if ( v1 >= 0 )
  {
    v5 = 0LL;
    v3 = 4;
    v1 = OSReadRegValue("TemperatureTelemetryInterval", v4, &v5, &v3);
    if ( v1 >= 0 && v3 == 4 )
    {
      *((_QWORD *)&WPP_MAIN_CB.Reserved + 1) = 10000000 * v5;
      if ( 10000000 * v5 > 0 )
      {
        AcpiDiagThermalTelemetryEnabled = 1;
        AcpiDiagRequeueThermalPollingTimer();
      }
    }
    OSCloseHandle(v4);
  }
  if ( v1 >= 0 )
    return (unsigned int)v1;
  return v0;
}
