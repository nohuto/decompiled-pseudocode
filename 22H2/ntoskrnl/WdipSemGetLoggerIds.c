/*
 * XREFs of WdipSemGetLoggerIds @ 0x1407E5C34
 * Callers:
 *     WdipSemEnableScenario @ 0x1407E5A8C (WdipSemEnableScenario.c)
 *     WdipSemCleanStart @ 0x1408315A0 (WdipSemCleanStart.c)
 *     WdipSemDisableScenario @ 0x140831AF8 (WdipSemDisableScenario.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14022E1D0 (RtlInitUnicodeString.c)
 *     EtwQueryTraceHandleByLoggerName @ 0x1407E5CC4 (EtwQueryTraceHandleByLoggerName.c)
 */

__int64 WdipSemGetLoggerIds()
{
  int v0; // ebx
  __int32 v1; // ecx
  __int64 result; // rax
  __int32 v3; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"DiagLog");
  v0 = EtwQueryTraceHandleByLoggerName(&DestinationString, &v5);
  if ( v0 < 0 )
    v1 = 0;
  else
    v1 = (unsigned __int16)v5;
  _InterlockedExchange(&WdipDiagLoggerId, v1);
  RtlInitUnicodeString(&DestinationString, L"WdiContextLog");
  result = EtwQueryTraceHandleByLoggerName(&DestinationString, &v5);
  if ( (int)result < 0 )
    v3 = 0;
  else
    v3 = (unsigned __int16)v5;
  _InterlockedExchange(&WdipContextLoggerId, v3);
  if ( v0 < 0 )
    return (unsigned int)v0;
  return result;
}
