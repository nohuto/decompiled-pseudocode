/*
 * XREFs of VslpLockPagesForTransfer @ 0x140394218
 * Callers:
 *     VslValidateSecureImagePages @ 0x140394070 (VslValidateSecureImagePages.c)
 *     VslAllocatePool @ 0x1404FBE58 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x1404FC2F4 (VslFinishStartSecureProcessor.c)
 *     VslGetEtwDebugId @ 0x1404FC4DC (VslGetEtwDebugId.c)
 *     VslInitializeSecureProcess @ 0x1404FC994 (VslInitializeSecureProcess.c)
 *     VslIumEfiRuntimeService @ 0x1404FCB20 (VslIumEfiRuntimeService.c)
 *     VslQuerySecureKernelProfileInformation @ 0x1404FD030 (VslQuerySecureKernelProfileInformation.c)
 *     VslRegisterLogPages @ 0x1404FD1DC (VslRegisterLogPages.c)
 *     VslRetrieveMailbox @ 0x1404FD580 (VslRetrieveMailbox.c)
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
 *     VslObtainHotPatchUndoTable @ 0x140890138 (VslObtainHotPatchUndoTable.c)
 *     VslStartSecureProcessor @ 0x140890458 (VslStartSecureProcessor.c)
 *     VslpSkMapBuffers @ 0x140890AB8 (VslpSkMapBuffers.c)
 *     VslCaptureSecureImageIat @ 0x140890D58 (VslCaptureSecureImageIat.c)
 *     VslConnectSwInterrupt @ 0x140A60044 (VslConnectSwInterrupt.c)
 * Callees:
 *     MmBuildMdlForNonPagedPool @ 0x140287D70 (MmBuildMdlForNonPagedPool.c)
 *     MiProbeAndLockPages @ 0x1402AF160 (MiProbeAndLockPages.c)
 *     MmUnlockPages @ 0x1402E92C0 (MmUnlockPages.c)
 *     VslpLockMdlForTransfer @ 0x14039439C (VslpLockMdlForTransfer.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall VslpLockPagesForTransfer(__int64 a1, struct _MDL *a2, ULONG a3, int a4, unsigned int a5)
{
  ULONG v5; // r15d
  struct _MDL *v6; // r12
  struct _MDL *v8; // rbx
  unsigned int v9; // esi
  struct _MDL *PoolWithTag; // rax
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
      PoolWithTag = (struct _MDL *)ExAllocatePoolWithTag(NonPagedPoolNx, v9, 0x54736D56u);
      v8 = PoolWithTag;
      if ( !PoolWithTag )
      {
        v8 = v11;
        v12 = -1073741670;
        goto LABEL_16;
      }
      PoolWithTag->Next = 0LL;
      PoolWithTag->Size = 8 * (v15 + 6);
      PoolWithTag->MdlFlags = 0;
      PoolWithTag->StartVa = (PVOID)((unsigned __int64)v6 & 0xFFFFFFFFFFFFF000uLL);
      PoolWithTag->ByteOffset = (unsigned __int16)v6 & 0xFFF;
      PoolWithTag->ByteCount = v5;
      if ( (a5 & 6) != 0 )
      {
        MmBuildMdlForNonPagedPool(PoolWithTag);
      }
      else if ( v5 )
      {
        MiProbeAndLockPages((__int64)PoolWithTag, 0, a4 != 0);
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
