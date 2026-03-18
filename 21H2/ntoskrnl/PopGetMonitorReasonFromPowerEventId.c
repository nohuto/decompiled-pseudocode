/*
 * XREFs of PopGetMonitorReasonFromPowerEventId @ 0x14039ADE8
 * Callers:
 *     PopPowerAggregatorSystemTransitionEnterStateHandler @ 0x140806FC0 (PopPowerAggregatorSystemTransitionEnterStateHandler.c)
 *     PopPowerAggregatorEnterScreenOff @ 0x1408091FC (PopPowerAggregatorEnterScreenOff.c)
 *     PopPowerAggregatorStartNextSession @ 0x1408095C4 (PopPowerAggregatorStartNextSession.c)
 *     PopPowerAggregatorDisengageModernStandby @ 0x140995888 (PopPowerAggregatorDisengageModernStandby.c)
 *     PopPowerAggregatorEngageModernStandby @ 0x1409959F8 (PopPowerAggregatorEngageModernStandby.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PopGetMonitorReasonFromPowerEventId(int a1)
{
  unsigned int v1; // r8d
  _DWORD *v2; // rdx
  __int64 v3; // rax

  v1 = 0;
  v2 = &unk_140D05A84;
  v3 = 0LL;
  while ( *v2 != a1 )
  {
    v3 = (unsigned int)(v3 + 1);
    v2 += 2;
    if ( (unsigned int)v3 >= 0x37 )
      return v1;
  }
  return *((unsigned int *)&PopMonitorEventMapping + 2 * v3);
}
