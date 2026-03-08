/*
 * XREFs of PopNetClearConnectivityConstraint @ 0x140993680
 * Callers:
 *     PopPowerAggregatorDisengageModernStandby @ 0x14099057C (PopPowerAggregatorDisengageModernStandby.c)
 *     PopNetCompliantNicUpdate @ 0x1409936D4 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x140993894 (PopNetNonCompliantDeviceUpdate.c)
 * Callees:
 *     PopQueueWorkItem @ 0x1402BCCB4 (PopQueueWorkItem.c)
 */

char __fastcall PopNetClearConnectivityConstraint(int a1)
{
  char v1; // dl
  signed __int32 v2; // eax

  v1 = 0;
  PopNetStandbyStateMask &= ~(1 << a1);
  if ( a1 == 3 || a1 == 6 )
    v1 = 1;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  if ( v2 == 2 || v1 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140C39F88, DelayedWorkQueue);
  return v2;
}
