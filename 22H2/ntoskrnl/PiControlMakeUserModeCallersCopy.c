/*
 * XREFs of PiControlMakeUserModeCallersCopy @ 0x1406AE4B0
 * Callers:
 *     NtReplacePartitionUnit @ 0x1405C9F30 (NtReplacePartitionUnit.c)
 *     PiCMCaptureDeviceListInputData @ 0x14068A104 (PiCMCaptureDeviceListInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x14068DD54 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiCMCaptureInterfaceListInputData @ 0x14068FF1C (PiCMCaptureInterfaceListInputData.c)
 *     PiControlGetPropertyData @ 0x140690D50 (PiControlGetPropertyData.c)
 *     PiControlGetRelatedDevice @ 0x140690FC0 (PiControlGetRelatedDevice.c)
 *     PiControlGetDeviceDepth @ 0x1406A0750 (PiControlGetDeviceDepth.c)
 *     PiCMCaptureRegistryInputData @ 0x1406ACA2C (PiCMCaptureRegistryInputData.c)
 *     PiCMCapturePropertyInputData @ 0x1406ADBB4 (PiCMCapturePropertyInputData.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x1406AE240 (PiControlGetDeviceInterfaceEnabled.c)
 *     NtPlugPlayControl @ 0x1406AE380 (NtPlugPlayControl.c)
 *     PiCMCaptureObjectInputData @ 0x1406B1954 (PiCMCaptureObjectInputData.c)
 *     PiControlGetSetDeviceStatus @ 0x1406B2710 (PiControlGetSetDeviceStatus.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14072C3C0 (PiCMCaptureInterfaceAliasInputData.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x1408AEE0C (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x1408AF190 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiControlQueryAndRemoveDevice @ 0x1408B3740 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x1408B38A0 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x1408B3AC0 (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x1408B3C10 (PiControlStartDevice.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x1402D37D0 (ExAllocatePoolWithQuotaTag.c)
 *     PiControlCopyUserModeCallersBuffer @ 0x1406B0460 (PiControlCopyUserModeCallersBuffer.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiControlMakeUserModeCallersCopy(void **a1, void *a2, unsigned int a3, ULONG a4, char a5, int a6)
{
  PVOID PoolWithQuotaTag; // rax
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
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, a3, 0x20207050u);
    *a1 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
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
