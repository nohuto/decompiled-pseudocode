/*
 * XREFs of PnprWakeDevices @ 0x140A9E05C
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140964BA0 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140A9DF20 (PnprQuiesceWorker.c)
 * Callees:
 *     PoEndPartitionReplace @ 0x140989618 (PoEndPartitionReplace.c)
 *     PoEndPowerStateTasks @ 0x140989640 (PoEndPowerStateTasks.c)
 *     PoUnblockConsoleSwitch @ 0x1409897B4 (PoUnblockConsoleSwitch.c)
 *     PoClearBroadcast @ 0x14098BC3C (PoClearBroadcast.c)
 *     PnprGetMillisecondCounter @ 0x140A9C974 (PnprGetMillisecondCounter.c)
 *     PoBroadcastSystemState @ 0x140AA6B28 (PoBroadcastSystemState.c)
 */

__int64 __fastcall PnprWakeDevices(__int64 a1)
{
  *(_DWORD *)(PnprContext + 33320) = PnprGetMillisecondCounter(0);
  *(_BYTE *)(a1 + 29) = 1;
  PoBroadcastSystemState(a1 + 4);
  PoClearBroadcast();
  PoEndPartitionReplace((_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 32));
  PoEndPowerStateTasks((_DWORD *)(a1 + 36));
  PoUnblockConsoleSwitch((_DWORD *)(a1 + 36), *(_DWORD *)(a1 + 32));
  *(_DWORD *)(PnprContext + 33324) = PnprGetMillisecondCounter(0);
  return 0LL;
}
