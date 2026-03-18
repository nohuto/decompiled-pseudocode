/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x140864194
 * Callers:
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x14099596C (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x1409985E0 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1409987A0 (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetInitialize @ 0x140B02560 (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x14036AAC4 (PopQueueWorkItem.c)
 */

char __fastcall PopNetSetConnectivityConstraint(int a1)
{
  bool v1; // r8
  signed __int32 v2; // eax

  v1 = 0;
  PopNetStandbyStateMask |= 1 << a1;
  if ( ((a1 - 2) & 0xFFFFFFFA) == 0 )
    v1 = a1 != 7;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  if ( v2 == 2 || v1 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140C1F8C8, DelayedWorkQueue);
  return v2;
}
