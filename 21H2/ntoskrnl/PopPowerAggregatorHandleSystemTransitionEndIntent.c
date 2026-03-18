/*
 * XREFs of PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1408080F0
 * Callers:
 *     PopPowerAggregatorHandleIntentUnsafe @ 0x1407F22AC (PopPowerAggregatorHandleIntentUnsafe.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1402D6B0C (wil_details_FeatureReporting_ReportUsageToService.c)
 *     PopIsMostRecentWakeFromBattery @ 0x14039888C (PopIsMostRecentWakeFromBattery.c)
 *     TtmIsEnabled @ 0x1407F0F98 (TtmIsEnabled.c)
 *     PopIsMostRecentWakeAttended @ 0x140A5179C (PopIsMostRecentWakeAttended.c)
 */

__int64 __fastcall PopPowerAggregatorHandleSystemTransitionEndIntent(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  unsigned int v6; // ebx
  int v8; // [rsp+30h] [rbp-18h]

  if ( *(_DWORD *)(a1 + 16) == 3 )
  {
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_PowerEventProcessorSystemIdle__private_reporting,
      0x16F54A4u,
      0,
      0,
      (__int64)&Feature_HgsPlusParkingSupportRequired_logged_traits,
      1u,
      v8);
    v6 = 0;
    if ( TtmIsEnabled() )
    {
      *(_DWORD *)a2 = 0;
    }
    else
    {
      if ( !PopIsMostRecentWakeFromBattery()
        || (unsigned __int8)PopIsMostRecentWakeAttended()
        || dword_140C232CC
        || *a4 != 5 )
      {
        *(_DWORD *)a2 = 4;
        *(_DWORD *)(a2 + 28) = *a4;
      }
      else
      {
        *(_DWORD *)a2 = 1;
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
