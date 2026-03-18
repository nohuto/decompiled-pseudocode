/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x140864D18
 * Callers:
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x140993758 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x140996784 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x140996944 (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetInitialize @ 0x140B51D10 (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x14032CB04 (PopQueueWorkItem.c)
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
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140C3A368, DelayedWorkQueue);
  return v2;
}
