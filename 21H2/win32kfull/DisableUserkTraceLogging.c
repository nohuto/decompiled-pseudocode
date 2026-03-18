/*
 * XREFs of DisableUserkTraceLogging @ 0x1C011DCE0
 * Callers:
 *     <none>
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1C0377BA0 (TlgUnregisterAggregateProvider.c)
 */

NTSTATUS DisableUserkTraceLogging()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx

  v0 = qword_1C0326418;
  qword_1C0326418 = 0LL;
  dword_1C03263F8 = 0;
  EtwUnregister(v0);
  TlgUnregisterAggregateProvider();
  v1 = qword_1C032BE40;
  qword_1C032BE40 = 0LL;
  dword_1C032BE20 = 0;
  return EtwUnregister(v1);
}
