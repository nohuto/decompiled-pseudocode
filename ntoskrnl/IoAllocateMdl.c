/*
 * XREFs of IoAllocateMdl @ 0x14020CAD0
 * Callers:
 *     CcMdlRead @ 0x1406A3B50 (CcMdlRead.c)
 *     BuildQueryDirectoryIrp @ 0x1406B22C0 (BuildQueryDirectoryIrp.c)
 *     WbMakeUserExecutablePagesKernelWritable @ 0x1406B69F0 (WbMakeUserExecutablePagesKernelWritable.c)
 *     sub_140753BB4 @ 0x140753BB4 (sub_140753BB4.c)
 *     NtQueryEaFile @ 0x14076D8E0 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x14077B8F0 (NtNotifyChangeDirectoryFileEx.c)
 *     NtReadFileScatter @ 0x140798190 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x140799670 (NtWriteFileGather.c)
 *     IopXxxControlFile @ 0x1407C1720 (IopXxxControlFile.c)
 *     FsRtlKernelFsControlFile @ 0x1407DB1B0 (FsRtlKernelFsControlFile.c)
 *     IopReadFile @ 0x1407E0C40 (IopReadFile.c)
 *     MiCreateMdl @ 0x1407F223C (MiCreateMdl.c)
 *     HalGetAdapterV3 @ 0x140821010 (HalGetAdapterV3.c)
 *     HalGetAdapterV2 @ 0x1408215A0 (HalGetAdapterV2.c)
 *     HvlpDynamicUpdateMicrocode @ 0x14093E628 (HvlpDynamicUpdateMicrocode.c)
 *     IopAllocateAndLockMdl @ 0x1409410EC (IopAllocateAndLockMdl.c)
 *     IopSetEaOrQuotaInformationFile @ 0x140942B50 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140942FC8 (IopSetFileObjectIosbRange.c)
 *     NtSetEaFile @ 0x140947CF0 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140948300 (NtQueryQuotaInformationFile.c)
 *     IopLiveDumpAllocateMappingResources @ 0x14094AE18 (IopLiveDumpAllocateMappingResources.c)
 *     PnprInitializeMappingReserve @ 0x140963304 (PnprInitializeMappingReserve.c)
 *     AlpcpInitializeCompletionList @ 0x14097672C (AlpcpInitializeCompletionList.c)
 *     PopReadPagesFromHiberFile @ 0x140985B2C (PopReadPagesFromHiberFile.c)
 *     EtwpBuildMdlForTraceBuffer @ 0x1409EA424 (EtwpBuildMdlForTraceBuffer.c)
 *     EtwpSavePersistedLogger @ 0x1409EAC60 (EtwpSavePersistedLogger.c)
 *     NtPssCaptureVaSpaceBulk @ 0x140A025D0 (NtPssCaptureVaSpaceBulk.c)
 *     MiLockAndMapEntireDriver @ 0x140A31608 (MiLockAndMapEntireDriver.c)
 *     MiApplyImageHotPatch @ 0x140A326C8 (MiApplyImageHotPatch.c)
 *     MiMapHotPatchImageInSystemSpace @ 0x140A37488 (MiMapHotPatchImageInSystemSpace.c)
 *     NtFreeUserPhysicalPages @ 0x140A3F6B0 (NtFreeUserPhysicalPages.c)
 *     sub_140A4AE60 @ 0x140A4AE60 (sub_140A4AE60.c)
 *     IovAllocateMdl @ 0x140ABDDE0 (IovAllocateMdl.c)
 *     VfBuildMdlFromScatterGatherList @ 0x140AC2460 (VfBuildMdlFromScatterGatherList.c)
 *     ViAllocateMapRegisterFile @ 0x140AC4C84 (ViAllocateMapRegisterFile.c)
 *     VerifierPortIoAllocateMdl @ 0x140AC8170 (VerifierPortIoAllocateMdl.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 */

PMDL __stdcall IoAllocateMdl(
        PVOID VirtualAddress,
        ULONG Length,
        BOOLEAN SecondaryBuffer,
        BOOLEAN ChargeQuota,
        PIRP Irp)
{
  __int16 v6; // si
  CSHORT v8; // r15
  unsigned __int64 v9; // rbx
  unsigned int v10; // r12d
  struct _KPRCB *CurrentPrcb; // r14
  _GENERAL_LOOKASIDE *P; // rbp
  PMDL result; // rax
  unsigned int Number; // ecx
  _GENERAL_LOOKASIDE *L; // rbp
  __int64 Size; // rdx
  void *(__fastcall *AllocateEx)(_POOL_TYPE, unsigned __int64, unsigned int, _LOOKASIDE_LIST_EX *); // rax
  __int64 Tag; // r8
  __int64 Type; // rcx
  PMDL MdlAddress; // rdx
  struct _MDL *i; // rcx

  v6 = (__int16)VirtualAddress;
  v8 = 0;
  v9 = (((unsigned __int16)VirtualAddress & 0xFFF) + (unsigned __int64)Length + 4095) >> 12;
  v10 = 8 * v9 + 48;
  if ( v10 > 0xB8 )
    goto LABEL_12;
  v8 = 8;
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 184;
  P = CurrentPrcb->PPLookasideList[3].P;
  ++P->TotalAllocates;
  result = (PMDL)RtlpInterlockedPopEntrySList(&P->ListHead);
  if ( result )
    goto LABEL_3;
  ++P->AllocateMisses;
  L = CurrentPrcb->PPLookasideList[3].L;
  ++L->TotalAllocates;
  result = (PMDL)RtlpInterlockedPopEntrySList(&L->ListHead);
  if ( result
    || (Size = L->Size,
        AllocateEx = L->AllocateEx,
        Tag = L->Tag,
        Type = (unsigned int)L->Type,
        ++L->AllocateMisses,
        (result = (PMDL)((__int64 (__fastcall *)(__int64, __int64, __int64))AllocateEx)(Type, Size, Tag)) != 0LL) )
  {
LABEL_3:
    LODWORD(result->Next) = CurrentPrcb->Number;
  }
  if ( result )
  {
    LOWORD(Number) = result->Next;
  }
  else
  {
LABEL_12:
    result = (PMDL)ExAllocatePool2(66LL, v10, 543974477LL);
    if ( !result )
      return 0LL;
    Number = KeGetPcr()->Prcb.Number;
  }
  *(&result->MdlFlags + 1) = Number;
  result->Next = 0LL;
  result->Size = 8 * (v9 + 6);
  result->StartVa = (PVOID)((unsigned __int64)VirtualAddress & 0xFFFFFFFFFFFFF000uLL);
  result->ByteOffset = v6 & 0xFFF;
  result->ByteCount = Length;
  result->MdlFlags = v8;
  if ( Irp )
  {
    if ( SecondaryBuffer )
    {
      MdlAddress = Irp->MdlAddress;
      for ( i = MdlAddress->Next; i; i = i->Next )
        MdlAddress = i;
      MdlAddress->Next = result;
    }
    else
    {
      Irp->MdlAddress = result;
    }
  }
  return result;
}
