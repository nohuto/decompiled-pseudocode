/*
 * XREFs of PipAreDriversLoaded @ 0x1402455C0
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406CD404 (PiControlGetUserFlagsFromDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x140842090 (PiDevCfgProcessDeviceCallback.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1408625F0 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x1402455E4 (PipAreDriversLoadedWorker.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304), a3, a4);
}
