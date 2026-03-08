/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1406CFA10
 * Callers:
 *     NtReplacePartitionUnit @ 0x1406772E0 (NtReplacePartitionUnit.c)
 *     PiControlGetPropertyData @ 0x1406C44A0 (PiControlGetPropertyData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1406C488C (PiCMCaptureInterfaceListInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1406C72B0 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureObjectInputData @ 0x1406C7B6C (PiCMCaptureObjectInputData.c)
 *     PiControlGetRelatedDevice @ 0x1406C7ED0 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CD670 (PiControlGetSetDeviceStatus.c)
 *     PiCMCapturePropertyInputData @ 0x1406CF564 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406CF7A0 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406CF8E0 (NtPlugPlayControl.c)
 *     PiCMCaptureRegistryInputData @ 0x14076CA6C (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x14077854C (PiCMCaptureDeviceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x140786C30 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14078E0B8 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiControlQueryDeviceRelations @ 0x14084B7B0 (PiControlQueryDeviceRelations.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140964CC4 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x14096513C (PiCMCaptureRegisterInterfaceInputData.c)
 * Callees:
 *     PiControlCopyUserModeCallersBuffer @ 0x1406D0E28 (PiControlCopyUserModeCallersBuffer.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlMakeUserModeCallersCopy(void **a1, void *a2, unsigned int a3, ULONG a4, char a5, int a6)
{
  __int64 Pool2; // rax
  int v12; // esi

  if ( !a5 )
  {
    *a1 = a2;
    return 0LL;
  }
  if ( !a3 )
  {
    *a1 = 0LL;
    return 0LL;
  }
  if ( a6 )
  {
    Pool2 = ExAllocatePool2(257LL, a3, 538996816LL);
    *a1 = (void *)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
  }
  v12 = 0;
  if ( *a1 )
  {
    v12 = PiControlCopyUserModeCallersBuffer(*a1, a2, a3, a4, a5, a6);
    if ( v12 < 0 )
    {
      if ( a6 )
      {
        ExFreePoolWithTag(*a1, 0);
        *a1 = 0LL;
      }
    }
  }
  return (unsigned int)v12;
}
