NTSTATUS ObpShutdownTraceLoggingProvider()
{
  REGHANDLE v0; // rcx

  v0 = qword_140C02FB8;
  qword_140C02FB8 = 0LL;
  dword_140C02F98 = 0;
  return EtwUnregister(v0);
}
