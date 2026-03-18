/*
 * XREFs of PopNetIsDisconnectStandbyActive @ 0x14080A3F8
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 *     PopS0LowPowerIdleInfo @ 0x14098CA3C (PopS0LowPowerIdleInfo.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140B3116C (PopPdcCsCheckSystemVolumeDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopNetIsDisconnectStandbyActive(_DWORD *a1)
{
  if ( a1 )
  {
    if ( PopNetStandbyReason )
    {
      switch ( PopNetStandbyReason )
      {
        case 1:
          *a1 = 2;
          break;
        case 2:
          *a1 = 3;
          break;
        case 3:
          *a1 = 4;
          break;
        case 6:
          *a1 = 1;
          break;
        case 7:
          *a1 = 5;
          break;
      }
    }
    else
    {
      *a1 = 0;
    }
  }
  return PopNetStandbyState == 2;
}
