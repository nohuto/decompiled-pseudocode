/*
 * XREFs of ?DxgkCleanupTelemetry@@YAXXZ @ 0x1C004F1A0
 * Callers:
 *     DxgkUnload @ 0x1C030A890 (DxgkUnload.c)
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C03D80D8 (TlgUnregisterAggregateProvider.c)
 */

void DxgkCleanupTelemetry(void)
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx
  REGHANDLE v3; // rcx

  TlgUnregisterAggregateProvider(&dword_1C013F8A8);
  v0 = qword_1C013F9A8;
  qword_1C013F9A8 = 0LL;
  dword_1C013F988 = 0;
  EtwUnregister(v0);
  v1 = qword_1C013F970;
  qword_1C013F970 = 0LL;
  dword_1C013F950 = 0;
  EtwUnregister(v1);
  v2 = qword_1C013F900;
  qword_1C013F900 = 0LL;
  dword_1C013F8E0 = 0;
  EtwUnregister(v2);
  TlgUnregisterAggregateProvider(&dword_1C013F918);
  v3 = qword_1C013F9E0;
  qword_1C013F9E0 = 0LL;
  dword_1C013F9C0 = 0;
  EtwUnregister(v3);
}
