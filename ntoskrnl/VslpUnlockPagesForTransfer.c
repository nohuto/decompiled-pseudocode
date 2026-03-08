/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x1403C90EC
 * Callers:
 *     VslFinishStartSecureProcessor @ 0x140548B00 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x140548C84 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x140548CD0 (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x140549298 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x140549420 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x140549A64 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x140549C10 (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x14054A040 (VslRetrieveMailbox.c)
 *     VslSecurePoolAllocate @ 0x14054A218 (VslSecurePoolAllocate.c)
 *     VslSecurePoolUpdate @ 0x14054A3B0 (VslSecurePoolUpdate.c)
 *     VslCreateSecureImageSection @ 0x14054B5D0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14054B6D0 (VslFillSecureAllocation.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14054BA60 (VslInitFunctionOverrideCapabilities.c)
 *     VslPrepareSecureImageRelocations @ 0x14054BBC0 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x14054BE60 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x14054BF70 (VslValidateSecureImagePages.c)
 *     VslValidateDynamicCodePages @ 0x14087A498 (VslValidateDynamicCodePages.c)
 *     VslCapturePgoData @ 0x14093E940 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x14093EA80 (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x14093EC80 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x14093EF40 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x14093F40C (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x14093F65C (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14093F734 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x14093F95C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x14093FA58 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x14093FB88 (VslObtainHotPatchUndoTable.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x14093FDB8 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslStartSecureProcessor @ 0x14094009C (VslStartSecureProcessor.c)
 *     VslTransformDumpKey @ 0x140940390 (VslTransformDumpKey.c)
 *     VslCaptureSecureImageIat @ 0x14094081C (VslCaptureSecureImageIat.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140940924 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslConnectSwInterrupt @ 0x140B6F5B0 (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B6F694 (VslRegisterBootDrivers.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall VslpUnlockPagesForTransfer(__int64 **a1)
{
  int v2; // eax
  struct _MDL *v3; // rdi
  struct _MDL *v4; // rcx

  if ( (*((_BYTE *)a1 + 18) & 2) != 0 )
    MmUnlockPages((PMDL)(a1 + 1));
  v2 = *((_DWORD *)a1 + 16);
  if ( (v2 & 8) != 0 )
  {
    v3 = (struct _MDL *)*a1;
    while ( v3 )
    {
      if ( (v3->MdlFlags & 2) != 0 )
        MmUnlockPages(v3);
      v2 = *((_DWORD *)a1 + 16);
      v4 = v3;
      v3 = v3->Next;
      if ( (v2 & 0x20) == 0 )
      {
        ExFreePoolWithTag(v4, 0);
        v2 = *((_DWORD *)a1 + 16);
      }
    }
  }
  if ( (v2 & 0x20) != 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VslpReservedTransferLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VslpReservedTransferLock);
    KeAbPostRelease((ULONG_PTR)&VslpReservedTransferLock);
    KeLeaveCriticalRegion();
  }
}
