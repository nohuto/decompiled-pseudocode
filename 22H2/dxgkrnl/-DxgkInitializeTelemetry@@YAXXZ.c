/*
 * XREFs of ?DxgkInitializeTelemetry@@YAXXZ @ 0x1C0021644
 * Callers:
 *     DriverEntry @ 0x1C03072C8 (DriverEntry.c)
 * Callees:
 *     TlgRegisterAggregateProviderEx @ 0x1C017A778 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1C017A8B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 */

void DxgkInitializeTelemetry(void)
{
  TlgRegisterAggregateProviderEx(&dword_1C00B1A90);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00B1A58);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00B1A20);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00B1B00);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_1C00B1AC8);
  TlgRegisterAggregateProviderEx(&dword_1C00B19E8);
}
