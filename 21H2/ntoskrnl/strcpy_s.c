/*
 * XREFs of strcpy_s @ 0x1403D7EE0
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140782794 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1407851B8 (BiConvertNtDeviceToBootEnvironment.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407A6AA0 (CmpAddProcessorConfigurationEntry.c)
 *     RtlIncrementCorrelationVector @ 0x140916260 (RtlIncrementCorrelationVector.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3F30 (ExpSystemErrorHandler2.c)
 *     HdlspGetLine @ 0x1409F05F8 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x1409F1384 (HdlspSetBlueScreenInformation.c)
 *     PspInitPhase0 @ 0x140A3EC68 (PspInitPhase0.c)
 *     PspInitPhase1 @ 0x140A4C338 (PspInitPhase1.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039AB40 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strcpy_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  char v6; // al

  if ( a1 && SizeInBytes )
  {
    if ( !Src )
    {
      v4 = 22;
LABEL_10:
      *a1 = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
    v5 = a1 - Src;
    do
    {
      v6 = *Src;
      Src[v5] = *Src;
      ++Src;
      if ( !v6 )
        break;
      --SizeInBytes;
    }
    while ( SizeInBytes );
    if ( !SizeInBytes )
    {
      v4 = 34;
      goto LABEL_10;
    }
    return 0;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
