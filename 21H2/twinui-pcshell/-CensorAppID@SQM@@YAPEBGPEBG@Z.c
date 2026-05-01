/*
 * XREFs of ?CensorAppID@SQM@@YAPEBGPEBG@Z @ 0x180071C94
 * Callers:
 *     ?PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@@Z @ 0x1800719DC (-PositionViewForActivation_@ShellPositionerTelemetry@@QEBAXPEAUIApplicationView@@W4SHELL_POSITIO.c)
 *     ?GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z @ 0x1800837AC (-GetCensoredAumidFromView@VoiceAssistantPositionerTelemetry@@CAPEBGPEAUIApplicationView@@@Z.c)
 *     GetPidlsFromTaskbarLayout @ 0x18015601C (GetPidlsFromTaskbarLayout.c)
 *     ?CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z @ 0x1801D82D4 (-CensorAppIdBuffer@AppIdCensorUtility@LoggingUtil@@SAJPEBGPEAPEAG@Z.c)
 *     ?GetAppNameFromView@LoggingUtil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEAUIApplicationView@@@Z @ 0x1801DA0F0 (-GetAppNameFromView@LoggingUtil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6.c)
 *     ?StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z @ 0x1801DC754 (-StartActivity@DragEnterForView@AppViewManagerTabTelemetry@@QEAAXPEBGAEBU_GUID@@AEBUtagPOINT@@@Z.c)
 *     ?OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z @ 0x18029138C (-OemAppLoaded_@PenWorkspaceBrokerTelemetry@@QEAAXPEBG@Z.c)
 *     ?GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x1802E04B8 (-GetUnmetTabRequirements@ShellFrameAggregateTelemetry@@SAXIAEBUWindowCharacteristics@TelemetryHe.c)
 *     ?UnmetTabRequirementsChanged@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLogging@@QEAAXW4DWM_TAB_WINDOW_REQUIREMENTS@@0AEBUWindowCharacteristics@TelemetryHelpers@@@Z @ 0x1802EF020 (-UnmetTabRequirementsChanged@TabViewManager_OnUnmetTabRequirementsChanged@TabViewManagerTraceLog.c)
 *     ?AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1@Z @ 0x1804159F8 (-AppSwitched_@AppSwitchTelemetry@PerfTrack@@QEAAXW4SwitchLocation@2@PEBGW4SwitchInvokeMethod@2@1.c)
 * Callees:
 *     <none>
 */

const unsigned __int16 *__fastcall SQM::CensorAppID(LPCWSTR pszPath, const unsigned __int16 *a2)
{
  __int64 v2; // rbx

  v2 = 0LL;
  if ( pszPath )
  {
    if ( PathIsFileSpecW(pszPath) )
      return pszPath;
    else
      return PathFindFileNameW(pszPath);
  }
  return (const unsigned __int16 *)v2;
}
