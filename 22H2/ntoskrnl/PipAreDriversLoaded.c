/*
 * XREFs of PipAreDriversLoaded @ 0x14022B108
 * Callers:
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406CBFE4 (PiControlGetUserFlagsFromDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     PiDevCfgProcessDeviceCallback @ 0x1408446E0 (PiDevCfgProcessDeviceCallback.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140867948 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     PipAreDriversLoadedWorker @ 0x14022B12C (PipAreDriversLoadedWorker.c)
 */

__int64 __fastcall PipAreDriversLoaded(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return PipAreDriversLoadedWorker(*(unsigned int *)(a1 + 300), *(unsigned int *)(a1 + 304), a3, a4);
}
