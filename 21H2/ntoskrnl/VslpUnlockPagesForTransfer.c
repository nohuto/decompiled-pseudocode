/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x1403A0EB4
 * Callers:
 *     VslValidateSecureImagePages @ 0x1403A0D60 (VslValidateSecureImagePages.c)
 *     VslFinishStartSecureProcessor @ 0x14054E00C (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x14054E1A8 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x14054E1F4 (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x14054E6A4 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x14054E830 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x14054EE64 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x14054F010 (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x14054F3A0 (VslRetrieveMailbox.c)
 *     VslSecurePoolAllocate @ 0x14054F578 (VslSecurePoolAllocate.c)
 *     VslSecurePoolUpdate @ 0x14054F710 (VslSecurePoolUpdate.c)
 *     VslCreateSecureImageSection @ 0x140550030 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x140550130 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x140550550 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x1405507F0 (VslTransferSecureImageVersionResource.c)
 *     VslRegisterSyscallProviderServiceTableMetadata @ 0x1406584BC (VslRegisterSyscallProviderServiceTableMetadata.c)
 *     VslCapturePgoData @ 0x140931660 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x1409317A0 (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x1409319A0 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x140931C60 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x14093212C (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x14093237C (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x140932454 (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x14093267C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x140932778 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x1409328A8 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140932C50 (VslStartSecureProcessor.c)
 *     VslTransformDumpKey @ 0x140932F44 (VslTransformDumpKey.c)
 *     VslCaptureSecureImageIat @ 0x14093334C (VslCaptureSecureImageIat.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140933454 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslConnectSwInterrupt @ 0x140B12930 (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B129C4 (VslRegisterBootDrivers.c)
 * Callees:
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall VslpUnlockPagesForTransfer(__int64 **a1)
{
  struct _MDL *v2; // rbx
  struct _MDL *v3; // rcx

  if ( (*((_BYTE *)a1 + 18) & 2) != 0 )
    MmUnlockPages((PMDL)(a1 + 1));
  if ( ((_DWORD)a1[8] & 8) != 0 )
  {
    v2 = (struct _MDL *)*a1;
    while ( v2 )
    {
      if ( (v2->MdlFlags & 2) != 0 )
        MmUnlockPages(v2);
      v3 = v2;
      v2 = v2->Next;
      ExFreePoolWithTag(v3, 0);
    }
  }
}
