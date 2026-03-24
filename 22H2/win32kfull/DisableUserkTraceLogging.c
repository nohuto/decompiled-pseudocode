/*
 * XREFs of DisableUserkTraceLogging @ 0x1C01334B0
 * Callers:
 *     <none>
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C037AB6C (TlgUnregisterAggregateProvider.c)
 */

NTSTATUS DisableUserkTraceLogging()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx

  v0 = qword_1C032A3F8;
  qword_1C032A3F8 = 0LL;
  dword_1C032A3D8 = 0;
  EtwUnregister(v0);
  TlgUnregisterAggregateProvider();
  v1 = qword_1C032FB40;
  qword_1C032FB40 = 0LL;
  dword_1C032FB20 = 0;
  return EtwUnregister(v1);
}
