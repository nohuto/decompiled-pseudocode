__int64 PfInitializeTraceLogging()
{
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C02FD0, 0LL, 0LL);
}
