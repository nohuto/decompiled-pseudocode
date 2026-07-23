/*
 * XREFs of VslpUnlockPagesForTransfer @ 0x1403941C4
 * Callers:
 *     VslValidateSecureImagePages @ 0x140394070 (VslValidateSecureImagePages.c)
 *     VslFinishStartSecureProcessor @ 0x1404FC2F4 (VslFinishStartSecureProcessor.c)
 *     VslFreePoolTransferObject @ 0x1404FC490 (VslFreePoolTransferObject.c)
 *     VslGetEtwDebugId @ 0x1404FC4DC (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x1404FC994 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404FCB20 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FD030 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404FD1DC (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x1404FD580 (VslRetrieveMailbox.c)
 *     VslpSkStopProfiling @ 0x1404FE06C (VslpSkStopProfiling.c)
 *     VslCreateSecureImageSection @ 0x1404FE340 (VslCreateSecureImageSection.c)
 *     VslFillSecureAllocation @ 0x1404FE440 (VslFillSecureAllocation.c)
 *     VslPrepareSecureImageRelocations @ 0x1404FE860 (VslPrepareSecureImageRelocations.c)
 *     VslTransferSecureImageVersionResource @ 0x1404FEB00 (VslTransferSecureImageVersionResource.c)
 *     VslCapturePgoData @ 0x14088EF70 (VslCapturePgoData.c)
 *     VslCreateEnclave @ 0x14088F0B0 (VslCreateEnclave.c)
 *     VslCreateSecureSection @ 0x14088F2B0 (VslCreateSecureSection.c)
 *     VslDebugReadWriteSecureProcess @ 0x14088F570 (VslDebugReadWriteSecureProcess.c)
 *     VslGetOnDemandDebugChallenge @ 0x14088F9D4 (VslGetOnDemandDebugChallenge.c)
 *     VslGetSetSecureContext @ 0x14088FC24 (VslGetSetSecureContext.c)
 *     VslInitializeEnclave @ 0x14088FCFC (VslInitializeEnclave.c)
 *     VslLoadEnclaveData @ 0x14088FF1C (VslLoadEnclaveData.c)
 *     VslLoadEnclaveModule @ 0x140890018 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x140890138 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140890458 (VslStartSecureProcessor.c)
 *     VslpSkMapBuffers @ 0x140890AB8 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x140890D58 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A60044 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
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
