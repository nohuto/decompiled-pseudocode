/*
 * XREFs of rimObsCalculateObserverMessageSize @ 0x1C01DB69C
 * Callers:
 *     rimObsCopyMessage @ 0x1C01DBA90 (rimObsCopyMessage.c)
 *     rimObsPopInputMessage @ 0x1C01DCA1C (rimObsPopInputMessage.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall rimObsCalculateObserverMessageSize(_DWORD *a1)
{
  unsigned int v1; // ebx

  v1 = 48;
  if ( *a1 )
  {
    if ( *a1 != 1 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 142);
  }
  else
  {
    return (unsigned int)(a1[6] + 48);
  }
  return v1;
}
