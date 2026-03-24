/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x140394074
 * Callers:
 *     VslValidateSecureImagePages @ 0x140393F20 (VslValidateSecureImagePages.c)
 *     VslFinishStartSecureProcessor @ 0x1404FC374 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x1404FC510 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x1404FC55C (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x1404FCA14 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404FCBA0 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FD0B0 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404FD25C (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x1404FD600 (VslRetrieveMailbox.c)
 *     VslpSkStopProfiling @ 0x1404FE0EC (VslpSkStopProfiling.c)
 *     VslCreateSecureImageSection @ 0x1404FE3C0 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404FE4C0 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x1404FE8E0 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x1404FEB80 (VslTransferSecureImageVersionResource.c)
 *     VslCapturePgoData @ 0x14088EE10 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x14088EF50 (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x14088F150 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x14088F410 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x14088F874 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x14088FAC4 (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14088FB9C (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x14088FDBC (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x14088FEB8 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x14088FFD8 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x1408902F8 (VslStartSecureProcessor.c)
 *     VslpSkMapBuffers @ 0x140890958 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x140890BF8 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A5F044 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x140244A70 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
