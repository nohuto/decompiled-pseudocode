/*
 * XREFs of PopIsHibernateSupported @ 0x140873AD4
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x140373610 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x1403C78A0 (PopCaptureSleepStudyStatistics.c)
 *     PopVerifyPowerActionPolicy @ 0x1408256D8 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14082580C (PopVerifySystemPowerState.c)
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x140884F60 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 *     PopIsDozeSupported @ 0x140980BB4 (PopIsDozeSupported.c)
 * Callees:
 *     <none>
 */

bool __fastcall PopIsHibernateSupported(_BYTE *a1)
{
  bool result; // al

  result = 0;
  if ( a1[6] )
  {
    if ( a1[8] )
      return a1[22] == 2;
  }
  return result;
}
