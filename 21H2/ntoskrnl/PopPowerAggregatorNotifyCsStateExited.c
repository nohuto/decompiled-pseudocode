/*
 * XREFs of PopPowerAggregatorNotifyCsStateExited @ 0x1408EE750
 * Callers:
 *     PopPowerAggregatorScreenOffActiveToActiveStateHandler @ 0x1408EE900 (PopPowerAggregatorScreenOffActiveToActiveStateHandler.c)
 * Callees:
 *     PopInvokeWin32Callout @ 0x14066EF08 (PopInvokeWin32Callout.c)
 *     PopBlockSessionSwitch @ 0x140779F20 (PopBlockSessionSwitch.c)
 *     TtmNotifyLowPowerStateExited @ 0x1408FEAD8 (TtmNotifyLowPowerStateExited.c)
 */

ULONG PopPowerAggregatorNotifyCsStateExited()
{
  __int128 v1; // [rsp+20h] [rbp-30h] BYREF
  __int128 v2; // [rsp+30h] [rbp-20h]
  __int64 v3; // [rsp+40h] [rbp-10h]
  unsigned int v4; // [rsp+60h] [rbp+10h] BYREF

  v4 = -1;
  v3 = 0LL;
  v1 = 0LL;
  v2 = 0LL;
  PopBlockSessionSwitch(1, &v4);
  if ( TtmpEnabled == 1 )
  {
    TtmNotifyLowPowerStateExited(v4);
  }
  else
  {
    v1 = 5uLL;
    v2 = 0uLL;
    v3 = 0LL;
    PopInvokeWin32Callout(5u, (__int64)&v1, 1u, (int *)&v4);
  }
  return PopBlockSessionSwitch(0, &v4);
}
