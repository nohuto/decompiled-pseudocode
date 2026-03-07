void DxgkCleanupTelemetry(void)
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx
  REGHANDLE v3; // rcx

  TlgUnregisterAggregateProvider(&dword_1C013A8A8);
  v0 = qword_1C013A9A8;
  qword_1C013A9A8 = 0LL;
  dword_1C013A988 = 0;
  EtwUnregister(v0);
  v1 = qword_1C013A970;
  qword_1C013A970 = 0LL;
  dword_1C013A950 = 0;
  EtwUnregister(v1);
  v2 = qword_1C013A900;
  qword_1C013A900 = 0LL;
  dword_1C013A8E0 = 0;
  EtwUnregister(v2);
  TlgUnregisterAggregateProvider(&dword_1C013A918);
  v3 = qword_1C013A9E0;
  qword_1C013A9E0 = 0LL;
  dword_1C013A9C0 = 0;
  EtwUnregister(v3);
}
