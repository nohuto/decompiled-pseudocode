__int64 ExInitTraceLogging()
{
  return TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_140C06760, 0LL, 0LL);
}
