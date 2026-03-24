/*
 * XREFs of rimObsCalculateObserverMessageSize @ 0x1C017DCD0
 * Callers:
 *     rimObsCopyMessage @ 0x1C017DF88 (rimObsCopyMessage.c)
 *     rimObsPopInputMessage @ 0x1C017E928 (rimObsPopInputMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimObsCalculateObserverMessageSize(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 48;
  if ( *a1 )
  {
    if ( *a1 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 141);
  }
  else
  {
    return (unsigned int)(a1[6] + 48);
  }
  return v1;
}
