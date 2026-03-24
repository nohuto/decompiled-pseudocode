/*
 * XREFs of DisableUserkTraceLogging @ 0x1C0133860
 * Callers:
 *     <none>
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C037BB6C (TlgUnregisterAggregateProvider.c)
 */

NTSTATUS DisableUserkTraceLogging()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx

  v0 = qword_1C032B3F8;
  qword_1C032B3F8 = 0LL;
  dword_1C032B3D8 = 0;
  EtwUnregister(v0);
  TlgUnregisterAggregateProvider();
  v1 = qword_1C0330B40;
  qword_1C0330B40 = 0LL;
  dword_1C0330B20 = 0;
  return EtwUnregister(v1);
}
