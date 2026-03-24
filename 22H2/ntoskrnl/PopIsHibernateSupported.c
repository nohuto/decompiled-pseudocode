/*
 * XREFs of PopIsHibernateSupported @ 0x1406F4158
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C4D58 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x140570498 (PopCaptureSleepStudyStatistics.c)
 *     PopPolicySystemIdle @ 0x1406F2890 (PopPolicySystemIdle.c)
 *     PopIsDozeSupported @ 0x1406F4118 (PopIsDozeSupported.c)
 *     PopVerifyPowerActionPolicy @ 0x14078B6CC (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14078B828 (PopVerifySystemPowerState.c)
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
