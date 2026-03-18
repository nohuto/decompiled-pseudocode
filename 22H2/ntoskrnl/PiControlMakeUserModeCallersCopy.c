/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1406D42A0
 * Callers:
 *     NtReplacePartitionUnit @ 0x140679930 (NtReplacePartitionUnit.c)
 *     PiControlGetRelatedDevice @ 0x1406C9150 (PiControlGetRelatedDevice.c)
 *     PiControlGetSetDeviceStatus @ 0x1406CBDD0 (PiControlGetSetDeviceStatus.c)
 *     PiCMCapturePropertyInputData @ 0x1406D0D34 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406D4030 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406D4170 (NtPlugPlayControl.c)
 *     PiControlGetPropertyData @ 0x140792C60 (PiControlGetPropertyData.c)
 *     PiCMCaptureObjectInputData @ 0x14079A694 (PiCMCaptureObjectInputData.c)
 *     PiCMCaptureRegistryInputData @ 0x1407BF0EC (PiCMCaptureRegistryInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x1407C1150 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x1407C58B4 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureDeviceListInputData @ 0x1407C831C (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x1407CA33C (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetDeviceDepth @ 0x1407D6070 (PiControlGetDeviceDepth.c)
 *     PiControlQueryDeviceRelations @ 0x14084EB60 (PiControlQueryDeviceRelations.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140967CE4 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x14096815C (PiCMCaptureRegisterInterfaceInputData.c)
 * Callees:
 *     PiControlCopyUserModeCallersBuffer @ 0x1406D241C (PiControlCopyUserModeCallersBuffer.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PiControlMakeUserModeCallersCopy(void **a1, char *a2, unsigned int a3, ULONG a4, char a5, int a6)
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
