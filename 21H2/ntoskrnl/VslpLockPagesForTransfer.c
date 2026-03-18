/*
 * XREFs of VslpLockPagesForTransfer @ 0x1403A0F08
 * Callers:
 *     VslValidateSecureImagePages @ 0x1403A0D60 (VslValidateSecureImagePages.c)
 *     VslAllocatePool @ 0x14054DB08 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x14054E00C (VslFinishStartSecureProcessor.c)
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
 *     VslLoadEnclaveModule @ 0x140932778 (VslLoadEnclaveModule.c)
 *     VslObtainHotPatchUndoTable @ 0x1409328A8 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140932C50 (VslStartSecureProcessor.c)
 *     VslTransformDumpKey @ 0x140932F44 (VslTransformDumpKey.c)
 *     VslCaptureSecureImageIat @ 0x14093334C (VslCaptureSecureImageIat.c)
 *     VslReapplyImportOptimizationForDriverVerifier @ 0x140933454 (VslReapplyImportOptimizationForDriverVerifier.c)
 *     VslConnectSwInterrupt @ 0x140B12930 (VslConnectSwInterrupt.c)
 *     VslRegisterBootDrivers @ 0x140B129C4 (VslRegisterBootDrivers.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x14027C410 (MmBuildMdlForNonPagedPool.c)
 *     MiProbeAndLockPages @ 0x14029C5B0 (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402B8AD0 (MmUnlockPages.c)
 *     VslpLockMdlForTransfer @ 0x1403A108C (VslpLockMdlForTransfer.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall VslpLockPagesForTransfer(__int64 a1, struct _MDL *a2, ULONG a3, int a4, unsigned int a5)
{
  ULONG v5; // r15d
  struct _MDL *v6; // r12
  struct _MDL *v8; // rbx
  unsigned int v9; // esi
  struct _MDL *Pool2; // rax
  struct _MDL *v11; // r14
  int v12; // esi
  struct _MDL *Next; // r14
  unsigned __int64 v15; // [rsp+28h] [rbp-40h]

  v5 = a3;
  v6 = a2;
  v8 = 0LL;
  if ( (a5 & 3) != 0 && ((((unsigned __int16)a2 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
  {
    v12 = -1073741811;
LABEL_16:
    while ( v8 )
    {
      Next = v8->Next;
      v8->Next = 0LL;
      if ( (v8->MdlFlags & 2) != 0 )
        MmUnlockPages(v8);
      ExFreePoolWithTag(v8, 0);
      v8 = Next;
    }
    return (unsigned int)v12;
  }
  else
  {
    v11 = 0LL;
    do
    {
      v15 = (((unsigned __int16)v6 & 0xFFF) + (unsigned __int64)v5 + 4095) >> 12;
      v9 = 8 * v15 + 48;
      if ( (a5 & 1) != 0 )
        v9 = 4096;
      if ( (a5 & 4) != 0 )
        v9 = (v9 + 4095) & 0xFFFFF000;
      Pool2 = (struct _MDL *)ExAllocatePool2(64LL, v9, 1416850774LL);
      v8 = Pool2;
      if ( !Pool2 )
      {
        v8 = v11;
        v12 = -1073741670;
        goto LABEL_16;
      }
      Pool2->Next = 0LL;
      Pool2->Size = 8 * (v15 + 6);
      Pool2->MdlFlags = 0;
      Pool2->StartVa = (PVOID)((unsigned __int64)v6 & 0xFFFFFFFFFFFFF000uLL);
      Pool2->ByteOffset = (unsigned __int16)v6 & 0xFFF;
      Pool2->ByteCount = v5;
      if ( (a5 & 6) != 0 )
      {
        MmBuildMdlForNonPagedPool(Pool2);
      }
      else if ( v5 )
      {
        MiProbeAndLockPages(Pool2, 0, a4 != 0);
      }
      v8->Next = v11;
      v11 = v8;
      v6 = v8;
      v5 = v9;
    }
    while ( v9 > 0x1000 );
    v12 = VslpLockMdlForTransfer(a1, v8, a5);
    if ( v12 < 0 )
      goto LABEL_16;
    *(_DWORD *)(a1 + 64) |= 8u;
    return 0LL;
  }
}
