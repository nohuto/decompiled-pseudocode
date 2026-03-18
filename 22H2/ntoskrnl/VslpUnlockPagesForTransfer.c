/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x1403CE69C
 * Callers:
 *     VslFinishStartSecureProcessor @ 0x14054AFA0 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x14054B124 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x14054B170 (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x14054B738 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x14054B8C0 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14054BF04 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14054C0B0 (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x14054C4E0 (VslRetrieveMailbox.c)
 *     VslSecurePoolAllocate @ 0x14054C6B8 (VslSecurePoolAllocate.c)
 *     VslSecurePoolUpdate @ 0x14054C850 (VslSecurePoolUpdate.c)
 *     VslCreateSecureImageSection @ 0x14054DA70 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x14054DB70 (VslFillSecureAllocation.c)
 *     VslInitFunctionOverrideCapabilities @ 0x14054DF00 (VslInitFunctionOverrideCapabilities.c)
 *     VslPrepareSecureImageRelocations @ 0x14054E060 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x14054E300 (VslTransferSecureImageVersionResource.c)
 *     VslValidateSecureImagePages @ 0x14054E410 (VslValidateSecureImagePages.c)
 *     VslValidateDynamicCodePages @ 0x14087F3C8 (VslValidateDynamicCodePages.c)
 *     VslCapturePgoData @ 0x140941960 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x140941AA0 (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x140941CA0 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x140941F60 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x14094242C (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x14094267C (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x140942754 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x14094297C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x140942A78 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140942BA8 (VslObtainHotPatchUndoTable.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x140942DD8 (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslStartSecureProcessor @ 0x1409430BC (VslStartSecureProcessor.c)
 *     VslTransformDumpKey @ 0x1409433B0 (VslTransformDumpKey.c)
 *     VslCaptureSecureImageIat @ 0x14094383C (VslCaptureSecureImageIat.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140943944 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslConnectSwInterrupt @ 0x140B7391C (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B73A00 (VslRegisterBootDrivers.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140231460 (KeLeaveCriticalRegion.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     MmUnlockPages @ 0x1402CAB10 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
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
