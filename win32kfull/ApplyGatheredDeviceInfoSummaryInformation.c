/*
 * XREFs of ApplyGatheredDeviceInfoSummaryInformation @ 0x1C00F08A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z @ 0x1C0020334 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHK@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall ApplyGatheredDeviceInfoSummaryInformation(int a1, int a2, int a3, int a4, int a5, unsigned int a6)
{
  int v6; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 result; // rax

  v6 = 0;
  if ( !a1 )
    goto LABEL_2;
  result = (unsigned int)(a1 - 1);
  if ( a1 == 1 )
    return ApplyGatheredKeyboardDeviceCount(a6);
  if ( a1 == 2 )
  {
LABEL_2:
    UpdateTPCurrentActiveState();
    v12 = SGDGetUserSessionState(v11);
    if ( a2 )
    {
      if ( !*(_DWORD *)(v12 + 15960) )
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
    else if ( *(_DWORD *)(v12 + 15960) )
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
      v13 = gpsi;
      *(_DWORD *)(gpsi + 2260LL) = a5;
    }
    result = SGDGetUserSessionState(v13);
    *(_DWORD *)(result + 15960) = a2;
  }
  return result;
}
