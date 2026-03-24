/*
 * XREFs of CmIsStateSeparationEnabled @ 0x140323318
 * Callers:
 *     SeQuerySigningPolicyWorker @ 0x140603818 (SeQuerySigningPolicyWorker.c)
 *     RtlIsStateSeparationEnabled @ 0x14069AC30 (RtlIsStateSeparationEnabled.c)
 *     KIsUnlockSettingEnabled @ 0x14069AC48 (KIsUnlockSettingEnabled.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1407670D8 (PiDevCfgEnumDeviceKeys.c)
 *     PiPnpRtlInit @ 0x1407A3780 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x1407A393C (PiDrvDbInit.c)
 *     PiCMEnumerateSubKeys @ 0x1408B03BC (PiCMEnumerateSubKeys.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x1408B7874 (PiDrvDbResolveKeyFilePaths.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x1408B79AC (PiDrvDbResolveNodeFilePaths.c)
 *     PiDrvDbSetupNodeHive @ 0x1408B7EB4 (PiDrvDbSetupNodeHive.c)
 *     KIsSideloadingEnabled @ 0x14095EFF4 (KIsSideloadingEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
