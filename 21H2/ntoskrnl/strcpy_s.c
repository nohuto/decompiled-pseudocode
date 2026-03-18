/*
 * XREFs of strcpy_s @ 0x1403E71A0
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140802A64 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1408038B4 (BiConvertNtDeviceToBootEnvironment.c)
 *     CmpAddProcessorConfigurationEntry @ 0x140837688 (CmpAddProcessorConfigurationEntry.c)
 *     RtlIncrementCorrelationVector @ 0x1409BB750 (RtlIncrementCorrelationVector.c)
 *     ExpSystemErrorHandler2 @ 0x140A6CC50 (ExpSystemErrorHandler2.c)
 *     HdlspGetLine @ 0x140AA9660 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x140AAA44C (HdlspSetBlueScreenInformation.c)
 *     PspInitPhase0 @ 0x140AFD7A4 (PspInitPhase0.c)
 *     PspInitPhase1 @ 0x140B1E0A8 (PspInitPhase1.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 */

errno_t __cdecl strcpy_s(char *a1, rsize_t SizeInBytes, const char *Src)
{
  errno_t v4; // ebx
  signed __int64 v5; // rcx
  char v6; // al

  if ( a1 && SizeInBytes )
  {
    if ( Src )
    {
      v5 = a1 - Src;
      while ( 1 )
      {
        v6 = *Src;
        Src[v5] = *Src;
        ++Src;
        if ( !v6 )
          return 0;
        if ( !--SizeInBytes )
        {
          v4 = 34;
          goto LABEL_9;
        }
      }
    }
    else
    {
      v4 = 22;
LABEL_9:
      *a1 = 0;
      xHalTimerWatchdogStop();
      return v4;
    }
  }
  else
  {
    xHalTimerWatchdogStop();
    return 22;
  }
}
