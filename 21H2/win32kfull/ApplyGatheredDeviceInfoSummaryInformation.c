/*
 * XREFs of ApplyGatheredDeviceInfoSummaryInformation @ 0x1C011CC20
 * Callers:
 *     <none>
 * Callees:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C009C170 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall ApplyGatheredDeviceInfoSummaryInformation(int a1, int a2, int a3, int a4, int a5, unsigned int a6)
{
  int v6; // ebx

  v6 = 0;
  switch ( a1 )
  {
    case 0:
      goto LABEL_2;
    case 1:
      ApplyGatheredKeyboardDeviceCount(a6);
      return;
    case 2:
LABEL_2:
      UpdateTPCurrentActiveState();
      if ( a2 )
      {
        if ( !*((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) )
        {
          gdwGTERMFlags |= 1u;
          *(_DWORD *)(gpsi + 1972LL) = 1;
          SetGlobalCursorLevel(0);
          CursorApiRouter::MovePointer(
            gpsi,
            *(HDEV *)(gpDispInfo + 40LL),
            *(_DWORD *)(gpsi + 4960LL),
            *(_DWORD *)(gpsi + 4964LL),
            1u);
        }
      }
      else if ( *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) )
      {
        gdwGTERMFlags &= ~1u;
        *(_DWORD *)(gpsi + 1972LL) = 0;
        SetGlobalCursorLevel(-1);
        ForceResetMouseButtonsDownState();
      }
      if ( !a1 )
      {
        LOBYTE(v6) = a4 != 0;
        *(_DWORD *)(gpsi + 2068LL) = a3;
        *(_DWORD *)(gpsi + 2196LL) = v6;
        *(_DWORD *)(gpsi + 2260LL) = a5;
      }
      *((_DWORD *)&WPP_MAIN_CB.Dpc.0 + 1) = a2;
      break;
  }
}
