/*
 * XREFs of PipIsDevNodeDNStarted @ 0x14032E358
 * Callers:
 *     PipSetDevNodeState @ 0x14036EEA8 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x140371258 (PipRestoreDevNodeState.c)
 *     PiControlGetUserFlagsFromDeviceNode @ 0x1406B2B28 (PiControlGetUserFlagsFromDeviceNode.c)
 *     PiDevCfgLogDeviceStarted @ 0x14073727C (PiDevCfgLogDeviceStarted.c)
 *     PnpCheckForActiveDependencies @ 0x14073DD50 (PnpCheckForActiveDependencies.c)
 *     PiDevCfgConfigureDevice @ 0x14073F2C0 (PiDevCfgConfigureDevice.c)
 *     PnpProcessDependencyRelations @ 0x140749770 (PnpProcessDependencyRelations.c)
 *     PnpRequestDeviceRemovalWorker @ 0x14074A8A0 (PnpRequestDeviceRemovalWorker.c)
 *     IoReportDetectedDevice @ 0x1407AED50 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1407D2B70 (PnpDriverLoadingFailed.c)
 *     PiControlGetDevicePowerData @ 0x1408B34E4 (PiControlGetDevicePowerData.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PipIsDevNodeDNStarted(__int64 a1)
{
  int v1; // eax

  v1 = *(_DWORD *)(a1 + 300);
  return v1 > 772 && v1 <= 781;
}
