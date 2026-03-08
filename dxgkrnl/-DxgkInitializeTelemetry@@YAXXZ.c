/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C0021DF4
 * Callers:
 *     DriverEntry @ 0x1C03D9E6C (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C0210A1C (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C0210B58 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void DxgkInitializeTelemetry(void)
{
  TlgRegisterAggregateProviderEx(&dword_1C013A918);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C013A9C0);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C013A8E0);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C013A988);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C013A950);
  TlgRegisterAggregateProviderEx(&dword_1C013A8A8);
}
