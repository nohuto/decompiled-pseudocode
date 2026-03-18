/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C0021904
 * Callers:
 *     DriverEntry @ 0x1C03DEE7C (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C021EFFC (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C021F138 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void DxgkInitializeTelemetry(void)
{
  TlgRegisterAggregateProviderEx(&dword_1C013F918);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C013F9C0);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C013F8E0);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C013F988);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C013F950);
  TlgRegisterAggregateProviderEx(&dword_1C013F8A8);
}
