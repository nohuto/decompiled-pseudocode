/*
 * XREFs of LdrpResReportResourceAccessInternalInitOnce @ 0x180083E80
 * Callers:
 *     <none>
 * Callees:
 *     TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation @ 0x180045A9C (TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation.c)
 */

__int64 LdrpResReportResourceAccessInternalInitOnce()
{
  TraceLoggingRegisterEx_EtwEventRegister_EtwEventSetInformation((__int64 *)&dword_180166520);
  dword_18016D190 = (unsigned __int16)(__rdtsc() >> 4);
  return 1LL;
}
