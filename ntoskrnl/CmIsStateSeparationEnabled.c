/*
 * XREFs of CmIsStateSeparationEnabled @ 0x1402FBD38
 * Callers:
 *     KIsUnlockSettingEnabled @ 0x140792C9C (KIsUnlockSettingEnabled.c)
 *     RtlIsStateSeparationEnabled @ 0x140792EC0 (RtlIsStateSeparationEnabled.c)
 *     PiPnpRtlInit @ 0x14081BE64 (PiPnpRtlInit.c)
 *     PiDrvDbInit @ 0x14081C014 (PiDrvDbInit.c)
 *     PiDrvDbSetupNodeHive @ 0x14081C5C8 (PiDrvDbSetupNodeHive.c)
 *     PiDrvDbResolveNodeFilePaths @ 0x14081C828 (PiDrvDbResolveNodeFilePaths.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14082BFD0 (PopBcdSetDefaultResumeObjectElements.c)
 *     IopInitializeDumpPolicySettings @ 0x14085D5A4 (IopInitializeDumpPolicySettings.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140876FB8 (PiDevCfgEnumDeviceKeys.c)
 *     IopCrashDumpPolicyChangeWnfCallback @ 0x140940B30 (IopCrashDumpPolicyChangeWnfCallback.c)
 *     IopLiveDumpPolicyChangeWnfCallback @ 0x14094BB10 (IopLiveDumpPolicyChangeWnfCallback.c)
 *     PiCMEnumerateSubKeys @ 0x140966A2C (PiCMEnumerateSubKeys.c)
 *     PiDrvDbResolveKeyFilePaths @ 0x14096DFEC (PiDrvDbResolveKeyFilePaths.c)
 *     KIsSideloadingEnabled @ 0x140A077B0 (KIsSideloadingEnabled.c)
 * Callees:
 *     <none>
 */

bool CmIsStateSeparationEnabled()
{
  return CmStateSeparationEnabled != 0;
}
