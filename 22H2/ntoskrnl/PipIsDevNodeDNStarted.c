/*
 * XREFs of PipIsDevNodeDNStarted @ 0x14022B1A0
 * Callers:
 *     PipSetDevNodeState @ 0x14022AEA4 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1403B6928 (PipRestoreDevNodeState.c)
 *     PnpCheckForActiveDependencies @ 0x1406CBD6C (PnpCheckForActiveDependencies.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406CBFE4 (PiControlGetUserFlagsFromDeviceNode.c)
 *     IoReportDetectedDevice @ 0x140836920 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x140862E64 (PnpDriverLoadingFailed.c)
 *     PnpProcessDependencyRelations @ 0x14086931C (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x140869470 (PnpRequestDeviceRemovalWorker.c)
 *     PiDevCfgLogDeviceStarted @ 0x140879E9C (PiDevCfgLogDeviceStarted.c)
 *     PiDevCfgConfigureDevice @ 0x14087AC04 (PiDevCfgConfigureDevice.c)
 *     PiControlGetDevicePowerData @ 0x14096D930 (PiControlGetDevicePowerData.c)
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
