/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x14032D940
 * Callers:
 *     PiCMGetDeviceIdList @ 0x140689BD4 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x14068A104 (PiCMCaptureDeviceListInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x14068DBC8 (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x14068DD54 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x14068FD38 (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x14068FF1C (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetPropertyData @ 0x140690D50 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x140690FC0 (PiControlGetRelatedDevice.c)
 *     PiControlGetDeviceDepth @ 0x1406A0750 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureRegistryInputData @ 0x1406ACA2C (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryInputData @ 0x1406ACC40 (PiCMReleaseRegistryInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1406ADBB4 (PiCMCapturePropertyInputData.c)
 *     PiCMReleasePropertyInputData @ 0x1406ADE74 (PiCMReleasePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406AE240 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406AE380 (NtPlugPlayControl.c)
 *     PiCMReleaseObjectInputData @ 0x1406B1920 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406B1954 (PiCMCaptureObjectInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x1406B2710 (PiControlGetSetDeviceStatus.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14072BCFC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14072C3C0 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1408AEE0C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408AF190 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x1408AF490 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x1408B0D6C (PiCMRegisterDeviceInterface.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408B3740 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408B38A0 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408B3AC0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1408B3C10 (PiControlStartDevice.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
