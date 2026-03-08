/*
 * XREFs of PnprWakeDevices @ 0x140A9AF1C
 * Callers:
 *     PnpReplacePartitionUnit @ 0x140961B80 (PnpReplacePartitionUnit.c)
 *     PnprQuiesceWorker @ 0x140A9ADE0 (PnprQuiesceWorker.c)
 * Callees:
 *     PoEndPartitionReplace @ 0x140986568 (PoEndPartitionReplace.c)
 *     PoEndPowerStateTasks @ 0x140986590 (PoEndPowerStateTasks.c)
 *     PoUnblockConsoleSwitch @ 0x140986704 (PoUnblockConsoleSwitch.c)
 *     PoClearBroadcast @ 0x140988B8C (PoClearBroadcast.c)
 *     PnprGetMillisecondCounter @ 0x140A99834 (PnprGetMillisecondCounter.c)
 *     PoBroadcastSystemState @ 0x140AA38F8 (PoBroadcastSystemState.c)
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
