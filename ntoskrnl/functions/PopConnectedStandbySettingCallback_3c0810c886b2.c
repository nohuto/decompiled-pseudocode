__int64 __fastcall PopConnectedStandbySettingCallback(_QWORD *a1, int *a2, int a3)
{
  __int64 v3; // r9
  unsigned int v4; // ebx
  int v5; // eax
  bool v7; // zf

  v3 = *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 - *a1;
  if ( *(_QWORD *)&GUID_CONSOLE_DISPLAY_STATE.Data1 == *a1 )
    v3 = *(_QWORD *)GUID_CONSOLE_DISPLAY_STATE.Data4 - a1[1];
  v4 = 0;
  if ( !v3 && a3 == 4 && a2 )
  {
    v5 = *a2;
    if ( PopPlatformAoAc )
    {
      if ( PopMonitorOffDueToSleep )
      {
        PopMonitorOffDueToSleep = 0;
        v7 = v5 == 0;
        if ( v5 )
          return v4;
      }
      else
      {
        if ( (_DWORD)qword_140C3CD64 || PopHiberBootForceMonitorOff )
        {
          PopMonitorOffDueToSleep = 1;
          return v4;
        }
        v7 = v5 == 0;
      }
      LOBYTE(a1) = !v7;
      PopFanUpdateCsState(a1);
    }
    else
    {
      return (unsigned int)-1073741637;
    }
  }
  return v4;
}
