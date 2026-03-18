/*
 * XREFs of PopPdcEngagePhases @ 0x14087828C
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x1408781A4 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140993758 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140429560 (_guard_dispatch_icall.c)
 */

__int64 PopPdcEngagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C6B068 )
    return ((__int64 (*)(void))qword_140C6B068)();
  return result;
}
