NTSTATUS DisableUserkTraceLogging()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx

  v0 = RegHandle;
  RegHandle = 0LL;
  dword_1C0357098 = 0;
  EtwUnregister(v0);
  TlgUnregisterAggregateProvider();
  v1 = qword_1C035C0A0;
  qword_1C035C0A0 = 0LL;
  dword_1C035C080 = 0;
  return EtwUnregister(v1);
}
