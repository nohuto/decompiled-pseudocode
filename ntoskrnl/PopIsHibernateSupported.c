/*
 * XREFs of PopIsHibernateSupported @ 0x140870C14
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x14039CAB4 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x1403C24C4 (PopCaptureSleepStudyStatistics.c)
 *     PopVerifyPowerActionPolicy @ 0x14082A608 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14082A73C (PopVerifySystemPowerState.c)
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x140880280 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 *     PopIsDozeSupported @ 0x14097DB04 (PopIsDozeSupported.c)
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
