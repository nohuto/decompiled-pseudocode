/*
 * XREFs of VslpLockPagesForTransfer @ 0x1403C8E74
 * Callers:
 *     VslAllocatePool @ 0x140548688 (VslAllocatePool.c)
 *     VslFinishStartSecureProcessor @ 0x140548B00 (VslFinishStartSecureProcessor.c)
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
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MmBuildMdlForNonPagedPool @ 0x1402B5DB0 (MmBuildMdlForNonPagedPool.c)
 *     VslpLockMdlForTransfer @ 0x1403C9050 (VslpLockMdlForTransfer.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VslpLockPagesForTransfer(__int64 a1, struct _MDL *a2, unsigned int a3, int a4, unsigned int a5)
{
  int v5; // r11d
  __int64 v6; // r9
  struct _MDL *v7; // r10
  struct _MDL *Pool2; // rdi
  unsigned int v9; // r14d
  struct _MDL *v10; // r15
  unsigned int v11; // r13d
  int v12; // r15d
  int v14; // r14d
  struct _MDL *Next; // r12
  struct _KTHREAD *CurrentThread; // rax
  struct _MDL *v17; // [rsp+20h] [rbp-48h]
  struct _MDL *v19; // [rsp+78h] [rbp+10h]
  unsigned int v20; // [rsp+80h] [rbp+18h]

  v20 = a3;
  v19 = a2;
  v5 = a4;
  v6 = a3;
  v7 = a2;
  Pool2 = 0LL;
  v9 = a5;
  if ( (a5 & 0x13) != 0 )
  {
    if ( ((((unsigned __int16)a2 & 0xFFF) + a3 + 4095LL) & 0xFFFFFFFFFFFFF000uLL) > 0x1FA000 )
    {
      v12 = -1073741811;
      goto LABEL_20;
    }
    v7 = a2;
  }
  v10 = 0LL;
  v17 = 0LL;
  while ( 1 )
  {
    v11 = 8 * (((unsigned int)v6 + (unsigned __int64)((unsigned __int16)v7 & 0xFFF) + 4095) >> 12) + 48;
    if ( (v9 & 1) != 0 )
      v11 = 4096;
    if ( (v9 & 4) != 0 )
      v11 = (v11 + 4095) & 0xFFFFF000;
    if ( (v9 & 0x20) != 0 )
    {
      Pool2 = 0LL;
    }
    else
    {
      Pool2 = (struct _MDL *)ExAllocatePool2(64LL, v11, 1416850774LL);
      v6 = v20;
      v7 = v19;
      v5 = a4;
    }
    if ( !Pool2 )
      break;
    while ( 1 )
    {
      Pool2->Next = 0LL;
      Pool2->Size = 8 * (((((unsigned __int16)v7 & 0xFFF) + 4095LL + (unsigned __int64)(unsigned int)v6) >> 12) + 6);
      Pool2->MdlFlags = 0;
      Pool2->StartVa = (PVOID)((unsigned __int64)v7 & 0xFFFFFFFFFFFFF000uLL);
      Pool2->ByteOffset = (unsigned __int16)v7 & 0xFFF;
      Pool2->ByteCount = v6;
      if ( (v9 & 6) != 0 )
      {
        MmBuildMdlForNonPagedPool(Pool2);
      }
      else if ( (_DWORD)v6 )
      {
        MiProbeAndLockPages(Pool2, 0, v5 != 0);
      }
      if ( (v9 & 0x10) == 0 )
      {
        Pool2->Next = v10;
        v10 = Pool2;
        v17 = Pool2;
        v7 = Pool2;
        v19 = Pool2;
        v6 = v11;
        v20 = v11;
        if ( v11 > 0x1000 )
          break;
      }
      v12 = VslpLockMdlForTransfer(a1, Pool2, v9, v6);
      if ( v12 >= 0 )
      {
        *(_DWORD *)(a1 + 64) |= 8u;
        return 0LL;
      }
      if ( (v9 & 0x10) == 0 )
        goto LABEL_20;
      MmUnlockPages(Pool2);
      ExFreePoolWithTag(Pool2, 0);
      v10 = v17;
LABEL_34:
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&VslpReservedTransferLock, 0LL);
      Pool2 = (struct _MDL *)VslpReservedTransferMdl;
      v9 |= 0x20u;
      v6 = v20;
      v7 = v19;
      v5 = a4;
    }
    v5 = a4;
  }
  if ( (v9 & 0x10) != 0 )
    goto LABEL_34;
  Pool2 = v10;
  v12 = -1073741670;
LABEL_20:
  v14 = v9 & 0x20;
  while ( Pool2 )
  {
    Next = Pool2->Next;
    Pool2->Next = 0LL;
    if ( (Pool2->MdlFlags & 2) != 0 )
      MmUnlockPages(Pool2);
    if ( !v14 )
      ExFreePoolWithTag(Pool2, 0);
    Pool2 = Next;
  }
  if ( v14 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&VslpReservedTransferLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&VslpReservedTransferLock);
    KeAbPostRelease((ULONG_PTR)&VslpReservedTransferLock);
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v12;
}
