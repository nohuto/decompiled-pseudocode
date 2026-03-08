/*
 * XREFs of PopIsMostRecentWakeAttended @ 0x140A9DF8C
 * Callers:
 *     PopPowerAggregatorHandleSystemTransitionEndIntent @ 0x1409909E0 (PopPowerAggregatorHandleSystemTransitionEndIntent.c)
 *     PopTransitionSystemPowerStateEx @ 0x140AA5F80 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PopGetMostRecentWakeInfo @ 0x14058C140 (PopGetMostRecentWakeInfo.c)
 *     PopWakeInfoDereference @ 0x14058C3B8 (PopWakeInfoDereference.c)
 */

char PopIsMostRecentWakeAttended()
{
  char v0; // bl
  __int64 MostRecentWakeInfo; // rax

  v0 = 1;
  MostRecentWakeInfo = PopGetMostRecentWakeInfo();
  if ( MostRecentWakeInfo )
  {
    v0 = *(_BYTE *)(MostRecentWakeInfo + 80);
    PopWakeInfoDereference(MostRecentWakeInfo);
  }
  return v0;
}
