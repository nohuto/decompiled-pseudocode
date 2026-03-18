/*
 * XREFs of PiControlFreeUserModeCallersBuffer @ 0x14022BC8C
 * Callers:
 *     PiControlGetRelatedDevice @ 0x1406C9150 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBDD0 (PiControlGetSetDeviceStatus.c)
 *     PiCMReleasePropertyInputData @ 0x1406D0CE0 (PiCMReleasePropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1406D0D34 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406D4030 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406D4170 (NtPlugPlayControl.c)
 *     PiControlGetPropertyData @ 0x140792C60 (PiControlGetPropertyData.c)
 *     PiCMReleaseObjectInputData @ 0x14079A5E8 (PiCMReleaseObjectInputData.c)
 *     PiCMCaptureObjectInputData @ 0x14079A694 (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1407BF0EC (PiCMCaptureRegistryInputData.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x1407C0FAC (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1407C1150 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1407C56AC (PiCMGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1407C58B4 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMGetDeviceIdList @ 0x1407C7F0C (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x1407C831C (PiCMCaptureDeviceListInputData.c)
 *     PiCMGetDeviceInterfaceList @ 0x1407CA19C (PiCMGetDeviceInterfaceList.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1407CA33C (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1407D6070 (PiControlGetDeviceDepth.c)
 *     PiControlQueryDeviceRelations @ 0x14084EB60 (PiControlQueryDeviceRelations.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140967CE4 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x14096815C (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x1409684E0 (PiCMCreateDevice.c)
 *     PiCMRegisterDeviceInterface @ 0x14096A734 (PiCMRegisterDeviceInterface.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall PiControlFreeUserModeCallersBuffer(char a1, void *a2)
{
  if ( a1 )
  {
    if ( a2 )
      ExFreePoolWithTag(a2, 0);
  }
}
