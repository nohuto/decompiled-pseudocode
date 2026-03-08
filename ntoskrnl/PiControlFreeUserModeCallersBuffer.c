/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x1402459EC
 * Callers:
 *     PiControlGetPropertyData @ 0x1406C44A0 (PiControlGetPropertyData.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406C46EC (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1406C488C (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406C72B0 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1406C764C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMReleaseObjectInputData @ 0x1406C7AC0 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406C7B6C (PiCMCaptureObjectInputData.c)
 *     PiControlGetRelatedDevice @ 0x1406C7ED0 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CD670 (PiControlGetSetDeviceStatus.c)
 *     PiCMReleasePropertyInputData @ 0x1406CF510 (PiCMReleasePropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1406CF564 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406CF7A0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406CF8E0 (NtPlugPlayControl.c)
 *     PiCMCaptureRegistryInputData @ 0x14076CA6C (PiCMCaptureRegistryInputData.c)
 *     PiCMGetDeviceIdList @ 0x14077813C (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x14077854C (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x140786C30 (PiControlGetDeviceDepth.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14078DEB0 (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14078E0B8 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlQueryDeviceRelations @ 0x14084B7B0 (PiControlQueryDeviceRelations.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140964CC4 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x14096513C (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x1409654C0 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x140967714 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
