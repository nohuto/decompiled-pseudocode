/*
 * XREFs of PopIsHibernateSupported @ 0x1408111A0
 * Callers:
 *     PopCaptureSleepStudyStatistics @ 0x14039A210 (PopCaptureSleepStudyStatistics.c)
 *     PopCheckAndHandleThermalConditions @ 0x1403D33C4 (PopCheckAndHandleThermalConditions.c)
 *     PopPowerAggregatorDetermineTargetSystemPowerState @ 0x14080BDD0 (PopPowerAggregatorDetermineTargetSystemPowerState.c)
 *     PopVerifyPowerActionPolicy @ 0x140819A74 (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x140819BD0 (PopVerifySystemPowerState.c)
 *     PopIsDozeSupported @ 0x140989788 (PopIsDozeSupported.c)
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
