/*
 * XREFs of PopNetIsDisconnectStandbyActive @ 0x1408F1FDC
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 *     PopS0LowPowerIdleInfo @ 0x1408E41CC (PopS0LowPowerIdleInfo.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140A74F08 (PopPdcCsCheckSystemVolumeDevice.c)
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
