/*
 * XREFs of strcpy_s @ 0x1403D9D10
 * Callers:
 *     CmpAddProcessorConfigurationEntry @ 0x140816B6C (CmpAddProcessorConfigurationEntry.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14082FCE4 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140830F7C (BiConvertBootEnvironmentDeviceToNt.c)
 *     RtlIncrementCorrelationVector @ 0x1409BBE50 (RtlIncrementCorrelationVector.c)
 *     ExpSystemErrorHandler2 @ 0x140AA7FE0 (ExpSystemErrorHandler2.c)
 *     HdlspGetLine @ 0x140AE7690 (HdlspGetLine.c)
 *     HdlspSetBlueScreenInformation @ 0x140AE84A8 (HdlspSetBlueScreenInformation.c)
 *     PspInitPhase0 @ 0x140B3F968 (PspInitPhase0.c)
 *     PspInitPhase1 @ 0x140B422C8 (PspInitPhase1.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
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
