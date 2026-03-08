/*
 * XREFs of PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1409909E0
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x140757290 (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage @ 0x14040B89C (Feature_PowerEventProcessorSystemIdle__private_ReportDeviceUsage.c)
 *     PopGetMostRecentWakeInfo @ 0x14058C140 (PopGetMostRecentWakeInfo.c)
 *     PopWakeInfoDereference @ 0x14058C3B8 (PopWakeInfoDereference.c)
 *     TtmIsEnabled @ 0x14073C8BC (TtmIsEnabled.c)
 *     PopIsMostRecentWakeAttended @ 0x140A9DF8C (PopIsMostRecentWakeAttended.c)
 */

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
