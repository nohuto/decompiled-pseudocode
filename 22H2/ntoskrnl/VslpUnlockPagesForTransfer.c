/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x140393974
 * Callers:
 *     VslValidateSecureImagePages @ 0x140393820 (VslValidateSecureImagePages.c)
 *     VslFinishStartSecureProcessor @ 0x1404FBFF4 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x1404FC190 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x1404FC1DC (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x1404FC694 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404FC820 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FCD30 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404FCEDC (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x1404FD280 (VslRetrieveMailbox.c)
 *     VslpSkStopProfiling @ 0x1404FDD6C (VslpSkStopProfiling.c)
 *     VslCreateSecureImageSection @ 0x1404FE040 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404FE140 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x1404FE560 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x1404FE800 (VslTransferSecureImageVersionResource.c)
 *     VslCapturePgoData @ 0x14088EE60 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x14088EFA0 (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x14088F1A0 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x14088F460 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x14088F8C4 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x14088FB14 (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14088FBEC (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x14088FE0C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x14088FF08 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140890028 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140890348 (VslStartSecureProcessor.c)
 *     VslpSkMapBuffers @ 0x1408909A8 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x140890C48 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A5F044 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x1402443E0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
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
