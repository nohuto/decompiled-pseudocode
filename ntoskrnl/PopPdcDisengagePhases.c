/*
 * XREFs of PopPdcDisengagePhases @ 0x140995050
 * Callers:
 *     PopPowerAggregatorEnterScreenOff @ 0x140879524 (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorModernStandbyExitStateHandler @ 0x140990AE0 (PopPowerAggregatorModernStandbyExitStateHandler.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 */

__int64 PopPdcDisengagePhases()
{
  __int64 result; // rax

  result = 3221225474LL;
  if ( qword_140C6AC00 )
    return ((__int64 (*)(void))qword_140C6AC00)();
  return result;
}
