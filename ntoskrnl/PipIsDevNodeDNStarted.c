/*
 * XREFs of PipIsDevNodeDNStarted @ 0x140245658
 * Callers:
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1403B1C68 (PipRestoreDevNodeState.c)
 *     PnpCheckForActiveDependencies @ 0x1406CD3AC (PnpCheckForActiveDependencies.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406CD404 (PiControlGetUserFlagsFromDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140802A80 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x14085EEA4 (PnpDriverLoadingFailed.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140861CA0 (PnpRequestDeviceRemovalWorker.c)
 *     PnpProcessDependencyRelations @ 0x14086220C (PnpProcessDependencyRelations.c)
 *     PiDevCfgConfigureDevice @ 0x14087384C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgLogDeviceStarted @ 0x140874EF4 (PiDevCfgLogDeviceStarted.c)
 *     PiControlGetDevicePowerData @ 0x14096A910 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  __int64 result; // rax

  switch ( *(_DWORD *)(a1 + 300) )
  {
    case 0x307:
    case 0x308:
    case 0x309:
    case 0x30A:
    case 0x30B:
    case 0x30C:
    case 0x30D:
    case 0x30E:
    case 0x30F:
      result = 1LL;
      break;
    default:
      result = 0LL;
      break;
  }
  return result;
}
