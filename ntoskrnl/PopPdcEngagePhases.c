/*
 * XREFs of PopPdcEngagePhases @ 0x14087960C
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140879524 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1409906A8 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 PopPdcEngagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C6ABF8 )
    return ((__int64 (*)(void))qword_140C6ABF8)();
  return result;
}
