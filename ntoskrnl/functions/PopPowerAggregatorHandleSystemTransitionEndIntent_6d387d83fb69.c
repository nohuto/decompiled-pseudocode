__int64 __fastcall PopPowerAggregatorHandleSystemTransitionEndIntent(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 MostRecentWakeInfo; // rax
  char v10; // bl

  if ( *(_DWORD *)(a1 + 16) == 3 )
  {
    Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage();
    v6 = 0;
    if ( TtmIsEnabled(v8, v7) )
    {
      *(_DWORD *)a2 = 0;
    }
    else
    {
      MostRecentWakeInfo = PopGetMostRecentWakeInfo();
      if ( MostRecentWakeInfo
        && (v10 = *(_BYTE *)(MostRecentWakeInfo + 81), PopWakeInfoDereference(MostRecentWakeInfo), v10)
        && !(unsigned __int8)PopIsMostRecentWakeAttended()
        && !dword_140C3D48C
        && *a4 == 5 )
      {
        *(_DWORD *)a2 = 1;
      }
      else
      {
        *(_DWORD *)a2 = 4;
        *(_DWORD *)(a2 + 28) = *a4;
      }
      *(_BYTE *)(a2 + 24) = 1;
    }
  }
  else
  {
    return (unsigned int)-1073700861;
  }
  return v6;
}
