/*
 * XREFs of strcpy_s @ 0x1403D7D70
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1407825D4 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140784FF8 (BiConvertNtDeviceToBootEnvironment.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1407A68A0 (CmpAddProcessorConfigurationEntry.c)
 *     RtlIncrementCorrelationVector @ 0x140916100 (RtlIncrementCorrelationVector.c)
 *     ExpSystemErrorHandler2 @ 0x1409B3000 (ExpSystemErrorHandler2.c)
 *     HdlspGetLine @ 0x1409EF5F8 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x1409F0384 (HdlspSetBlueScreenInformation.c)
 *     PspInitPhase0 @ 0x140A3DC68 (PspInitPhase0.c)
 *     PspInitPhase1 @ 0x140A4B338 (PspInitPhase1.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14039A9F0 (xHalTimerWatchdogStop.c)
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
