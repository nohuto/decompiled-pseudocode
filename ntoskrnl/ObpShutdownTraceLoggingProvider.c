/*
 * XREFs of ObpShutdownTraceLoggingProvider @ 0x140B93128
 * Callers:
 *     ObShutdownSystem @ 0x140977E00 (ObShutdownSystem.c)
 * Callees:
 *     EtwUnregister @ 0x14076F9E0 (EtwUnregister.c)
 */

NTSTATUS ObpShutdownTraceLoggingProvider()
{
  REGHANDLE v0; // rcx

  v0 = qword_140C02FB8;
  qword_140C02FB8 = 0LL;
  dword_140C02F98 = 0;
  return EtwUnregister(v0);
}
