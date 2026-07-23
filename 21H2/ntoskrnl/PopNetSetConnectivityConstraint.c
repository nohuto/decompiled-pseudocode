/*
 * XREFs of PopNetSetConnectivityConstraint @ 0x140796A00
 * Callers:
 *     PopPowerAggregatorEngageAggressiveStandbyActions @ 0x1408EE2F0 (PopPowerAggregatorEngageAggressiveStandbyActions.c)
 *     PopNetCompliantNicUpdate @ 0x1408F1E30 (PopNetCompliantNicUpdate.c)
 *     PopNetNonCompliantDeviceUpdate @ 0x1408F206C (PopNetNonCompliantDeviceUpdate.c)
 *     PopNetInitialize @ 0x140A407C8 (PopNetInitialize.c)
 * Callees:
 *     PopQueueWorkItem @ 0x140251CA4 (PopQueueWorkItem.c)
 */

char __fastcall PopNetSetConnectivityConstraint(int a1)
{
  bool v1; // r8
  signed __int32 v2; // eax
  char v3; // cl

  v1 = 0;
  PopNetStandbyStateMask |= 1 << a1;
  if ( ((a1 - 2) & 0xFFFFFFFA) == 0 )
    v1 = a1 != 7;
  v2 = _InterlockedExchangeAdd(&PopNetGracePeriodState, 0);
  v3 = v1;
  if ( v2 == 2 )
    v3 = 1;
  if ( v3 )
    LOBYTE(v2) = PopQueueWorkItem((__int64)&unk_140C20A28, DelayedWorkQueue);
  return v2;
}
