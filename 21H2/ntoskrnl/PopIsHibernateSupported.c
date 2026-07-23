/*
 * XREFs of PopIsHibernateSupported @ 0x14066EAA8
 * Callers:
 *     PopCheckAndHandleThermalConditions @ 0x1403C5528 (PopCheckAndHandleThermalConditions.c)
 *     PopCaptureSleepStudyStatistics @ 0x140570798 (PopCaptureSleepStudyStatistics.c)
 *     PopPolicySystemIdle @ 0x14066D1E0 (PopPolicySystemIdle.c)
 *     PopIsDozeSupported @ 0x14066EA68 (PopIsDozeSupported.c)
 *     PopVerifyPowerActionPolicy @ 0x14078B98C (PopVerifyPowerActionPolicy.c)
 *     PopVerifySystemPowerState @ 0x14078BAE8 (PopVerifySystemPowerState.c)
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
