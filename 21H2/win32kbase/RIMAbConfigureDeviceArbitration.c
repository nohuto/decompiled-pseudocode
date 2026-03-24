/*
 * XREFs of RIMAbConfigureDeviceArbitration @ 0x1C015A2D0
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C01785C4 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ApiSetGetPenArbitrationType @ 0x1C01CF15C (ApiSetGetPenArbitrationType.c)
 */

__int64 RIMAbConfigureDeviceArbitration()
{
  __int64 result; // rax

  result = ApiSetGetPenArbitrationType();
  if ( (unsigned int)result < 4 )
    gDeviceArbitrationType = result;
  if ( gDeviceArbitrationType >= 4u )
    return MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 993);
  return result;
}
