/*
 * XREFs of PopIsHibernateSupported @ 0x14067B368
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C50F8 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x140570558 (PopCaptureSleepStudyStatistics.c)
 *     PopPolicySystemIdle @ 0x140679AA0 (PopPolicySystemIdle.c)
 *     PopIsDozeSupported @ 0x14067B328 (PopIsDozeSupported.c)
 *     PopVerifyPowerActionPolicy @ 0x14078B7CC (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14078B928 (PopVerifySystemPowerState.c)
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
