/*
 * XREFs of KeStartAllProcessors @ 0x140A4D568
 * Callers:
 *     Phase1InitializationDiscard @ 0x140A3AAD4 (Phase1InitializationDiscard.c)
 * Callees:
 *     MmCreateKernelStack @ 0x1402AABF0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1402AB200 (MmDeleteKernelStack.c)
 *     KeQueryActiveProcessorCountEx @ 0x140344620 (KeQueryActiveProcessorCountEx.c)
 *     HalQueryMaximumProcessorCount @ 0x14037AD70 (HalQueryMaximumProcessorCount.c)
 *     HalStartNextProcessor @ 0x1403A0DA0 (HalStartNextProcessor.c)
 *     HalEnumerateProcessors @ 0x1403B4820 (HalEnumerateProcessors.c)
 *     KiQueryProcessorNode @ 0x1403B563C (KiQueryProcessorNode.c)
 *     HvlStartBootLogicalProcessors @ 0x1403B62E8 (HvlStartBootLogicalProcessors.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140407C30 (_guard_dispatch_icall.c)
 *     memmove @ 0x140413540 (memmove.c)
 *     memset @ 0x140413800 (memset.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x14051595C (KiRemoveProcessorFromGroupDatabase.c)
 *     MmDeleteProcessor @ 0x14052DF10 (MmDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x1405B358C (ExDeletePoolTagTable.c)
 *     MmAllocateIndependentPagesEx @ 0x14076202C (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x140763BF0 (MmFreeIndependentPages.c)
 *     MmAllocateIsrStack @ 0x14079FD68 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x14079FF64 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x1407A0160 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x1407A01B0 (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x1407A09E0 (ExCreatePoolTagTable.c)
 *     HvlDeleteProcessor @ 0x14088E710 (HvlDeleteProcessor.c)
 *     KiResetBootProcessorApicMask @ 0x1408BA6A4 (KiResetBootProcessorApicMask.c)
 *     MmFreeIsrStack @ 0x1408D12A8 (MmFreeIsrStack.c)
 *     KiComputeProcessorDataSize @ 0x14099ED60 (KiComputeProcessorDataSize.c)
 *     KiInitializePrcbContext @ 0x14099F0D8 (KiInitializePrcbContext.c)
 *     KiUpdateProcessorCount @ 0x14099F1EC (KiUpdateProcessorCount.c)
 *     KiConfigureProcessorBlock @ 0x14099F28C (KiConfigureProcessorBlock.c)
 *     MmInitializeProcessor @ 0x14099F378 (MmInitializeProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x1409AFD8C (KiUnshadowProcessorAllocation.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 *     KiAllocateCpuSetData @ 0x140A3FD90 (KiAllocateCpuSetData.c)
 *     KiConfigureAllSchedulingInformation @ 0x140A4EA60 (KiConfigureAllSchedulingInformation.c)
 */

ULONG KeStartAllProcessors()
{
  KPCR *Pcr; // rax
  void *Base; // rbx
  PVOID PoolWithTag; // rax
  unsigned int v3; // edi
  KPCR *v4; // rbx
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned int v6; // r13d
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int MaximumProcessorCount; // ecx
  unsigned int v13; // r12d
  unsigned int v14; // ebx
  unsigned int v15; // esi
  unsigned int v16; // r14d
  unsigned __int64 v17; // rcx
  __int64 v18; // r15
  __int64 v19; // rsi
  __int64 v20; // rsi
  _OWORD *v21; // r15
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned __int64 v24; // r9
  int started; // eax
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  ULONG result; // eax
  SIZE_T v33; // rdx
  __int64 v34; // rcx
  _OWORD *v35; // rax
  __int128 v36; // xmm1
  unsigned int i; // edi
  _OWORD *v38; // rbx
  PVOID v39; // rax
  __int64 v40; // rsi
  __int64 v41; // rax
  __int128 v42; // xmm1
  unsigned int v43; // ecx
  size_t BugCheckParameter4; // [rsp+28h] [rbp-F0h]
  unsigned __int16 v45[2]; // [rsp+98h] [rbp-80h] BYREF
  unsigned int v46[3]; // [rsp+9Ch] [rbp-7Ch] BYREF
  int v47; // [rsp+A8h] [rbp-70h] BYREF
  int v48; // [rsp+ACh] [rbp-6Ch] BYREF
  size_t Size; // [rsp+B0h] [rbp-68h]
  __int64 v50; // [rsp+B8h] [rbp-60h] BYREF
  __int64 v51; // [rsp+C0h] [rbp-58h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-50h] BYREF
  __int64 v53; // [rsp+D0h] [rbp-48h] BYREF
  __int64 v54; // [rsp+D8h] [rbp-40h] BYREF
  __int64 v55; // [rsp+E0h] [rbp-38h] BYREF
  __int64 IndependentPages; // [rsp+E8h] [rbp-30h]
  __int64 v57; // [rsp+F0h] [rbp-28h]
  __int64 KernelStack; // [rsp+F8h] [rbp-20h]
  __int64 v59; // [rsp+100h] [rbp-18h]
  _QWORD v60[2]; // [rsp+108h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter1[184]; // [rsp+118h] [rbp+0h] BYREF

  v51 = 0LL;
  v55 = 0LL;
  v54 = 0LL;
  v53 = 0LL;
  v52 = 0LL;
  v45[0] = 0;
  v46[0] = 0;
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  Pcr = KeGetPcr();
  v48 = 0;
  v47 = 0;
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(KiBootProcessorIdtSize) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, (unsigned int)KiBootProcessorIdtSize, 0x2020654Bu);
  KiBootProcessorIdt = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_108;
  memmove(PoolWithTag, Base, (unsigned int)KiBootProcessorIdtSize);
  if ( (unsigned int)KeRegisteredProcessors > 0x500 )
    KeRegisteredProcessors = 1280;
  KiBarrierWait = 1;
  if ( !HalpInterruptHyperThreading )
    KiResetBootProcessorApicMask();
  v3 = HalEnumerateProcessors(KeRegisteredProcessors);
  if ( KeNumprocSpecified && KeNumprocSpecified < v3 )
    v3 = KeNumprocSpecified;
  if ( KeBootprocSpecified && KeBootprocSpecified < v3 )
    v3 = KeBootprocSpecified;
  v4 = KeGetPcr();
  CurrentPrcb = KeGetCurrentPrcb();
  v6 = 0;
  if ( (int)KiInitializePrcbContext((__int64)CurrentPrcb, 0LL) < 0 )
    goto LABEL_108;
  if ( !MmAllocateIsrStack(&CurrentPrcb->IsrStack, 0) )
    goto LABEL_108;
  v50 = (__int64)KeGetPcr()->Prcb.ExceptionStack + 80;
  if ( !MmAllocateIsrStack(&v50, 0) )
    goto LABEL_108;
  v7 = *(_QWORD *)((char *)v4->NtTib.StackBase + 36);
  *(_QWORD *)&v46[1] = v7;
  if ( KiKvaShadow )
    *(_QWORD *)&v46[1] = *(_QWORD *)(v7 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v46[1], 0) )
    goto LABEL_108;
  v8 = *(_QWORD *)((char *)v4->NtTib.StackBase + 44);
  *(_QWORD *)&v46[1] = v8;
  if ( KiKvaShadow )
    *(_QWORD *)&v46[1] = *(_QWORD *)(v8 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v46[1], 0) )
    goto LABEL_108;
  v9 = *(_QWORD *)((char *)v4->NtTib.StackBase + 52);
  *(_QWORD *)&v46[1] = v9;
  if ( KiKvaShadow )
    *(_QWORD *)&v46[1] = *(_QWORD *)(v9 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v46[1], 0) )
    goto LABEL_108;
  v10 = *(_QWORD *)((char *)v4->NtTib.StackBase + 60);
  *(_QWORD *)&v46[1] = v10;
  if ( KiKvaShadow )
    *(_QWORD *)&v46[1] = *(_QWORD *)(v10 + 8) + 32LL;
  if ( !MmAllocateIsrStack(&v46[1], 0) )
    goto LABEL_108;
  MaximumProcessorCount = HalQueryMaximumProcessorCount(v11);
  v13 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x500 )
    MaximumProcessorCount = 1280;
  v14 = KeRegisteredProcessors * CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
  if ( MaximumProcessorCount <= v14 )
    v14 = MaximumProcessorCount;
  if ( KeNumprocSpecified && KeNumprocSpecified < v14 )
    v14 = KeNumprocSpecified;
  if ( !KeDynamicPartitioningSupported && v14 > v3 )
    v14 = v3;
  if ( !(unsigned int)KiAllocateCpuSetData(v14) )
    goto LABEL_108;
  v15 = KiComputeProcessorDataSize(v14, &v48, &v47);
  v60[0] = (unsigned int)v48;
  v60[1] = (unsigned int)v47;
  LODWORD(Size) = v15;
  if ( (int)HvlStartBootLogicalProcessors(v47) < 0 )
    goto LABEL_108;
  v16 = 0;
  do
  {
    v17 = 0xFFFFLL;
    if ( (unsigned int)KeNumberProcessors_0 >= v3 )
      break;
    v46[0] = -1;
    v45[0] = -1;
    if ( !(unsigned int)KiQueryProcessorNode(++v6, v46, v45) )
    {
      ++v16;
      IndependentPages = MmAllocateIndependentPagesEx(v15, v45[0], (__int64)v60, 2uLL);
      if ( !IndependentPages )
        goto LABEL_108;
      if ( !ExCreatePoolTagTable(v16, v45[0]) )
        goto LABEL_108;
      KernelStack = MmCreateKernelStack(0, v45[0], 0LL);
      v18 = KernelStack;
      if ( !KernelStack )
        goto LABEL_108;
      v59 = MmCreateKernelStack(0, v45[0], 0LL);
      v19 = v59;
      if ( !v59 )
        goto LABEL_108;
      v51 = 0LL;
      if ( !MmAllocateIsrStack(&v51, v45[0]) )
        goto LABEL_108;
      v50 = 0LL;
      if ( !MmAllocateIsrStack(&v50, v45[0]) )
        goto LABEL_108;
      v55 = 0LL;
      if ( !MmAllocateIsrStack(&v55, v45[0]) )
        goto LABEL_108;
      v54 = 0LL;
      if ( !MmAllocateIsrStack(&v54, v45[0]) )
        goto LABEL_108;
      v53 = 0LL;
      if ( !MmAllocateIsrStack(&v53, v45[0]) )
        goto LABEL_108;
      v52 = 0LL;
      if ( !MmAllocateIsrStack(&v52, v45[0]) )
        goto LABEL_108;
      v57 = KeNodeBlock[v45[0]];
      LODWORD(BugCheckParameter4) = Size;
      v20 = KxInitializeProcessorState(
              BugCheckParameter1,
              (_QWORD *)KeLoaderBlock_0,
              IndependentPages,
              0,
              BugCheckParameter4,
              v45[0],
              v16,
              v14,
              v48,
              v47,
              v18,
              v19,
              v51,
              v50,
              v52,
              v54,
              v53,
              v55);
      if ( !v20 )
        goto LABEL_108;
      v21 = (_OWORD *)KeNodeBlock[v45[0]];
      if ( (unsigned int)HvlInitializeProcessor((_SLIST_HEADER *)v20)
        || !(unsigned int)MmInitializeProcessor(v20, v22, v23, v24)
        || (int)KiInitializePrcbContext(v20, v45[0]) < 0
        || (int)KeInitializeTimerTable(v20) < 0 )
      {
        goto LABEL_108;
      }
      started = HalStartNextProcessor((__int64)BugCheckParameter1, v16, v46[0]);
      if ( started == 3 )
        KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v16, v46[0]);
      if ( started != 4 )
      {
        KiRemoveProcessorFromGroupDatabase(v20);
        v33 = v57;
        v34 = 3LL;
        v35 = (_OWORD *)v57;
        do
        {
          *v35 = *v21;
          v35[1] = v21[1];
          v35[2] = v21[2];
          v35[3] = v21[3];
          v35[4] = v21[4];
          v35[5] = v21[5];
          v35[6] = v21[6];
          v35 += 8;
          v36 = v21[7];
          v21 += 8;
          *(v35 - 1) = v36;
          --v34;
        }
        while ( v34 );
        KeNodeBlock[v45[0]] = v33;
        HvlDeleteProcessor((struct _KPRCB *)v20, v33, (MEMORY_CACHING_TYPE)128);
        MmDeleteProcessor(v20);
        ExDeletePoolTagTable(v16);
        KiUnshadowProcessorAllocation(v20, (__int64)BugCheckParameter1);
        MmFreeIndependentPages(IndependentPages, (unsigned int)Size);
        MmDeleteKernelStack(KernelStack, 0LL);
        MmDeleteKernelStack(v59, 0LL);
        if ( v51 )
          MmFreeIsrStack(v51);
        if ( v50 )
          MmFreeIsrStack(v50);
        if ( v52 )
          MmFreeIsrStack(v52);
        if ( v53 )
          MmFreeIsrStack(v53);
        if ( v54 )
          MmFreeIsrStack(v54);
        if ( v55 )
          MmFreeIsrStack(v55);
        break;
      }
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        _mm_pause();
      KiConfigureProcessorBlock(v20);
      KiUpdateProcessorCount(v16, *(unsigned __int8 *)(v20 + 208));
      v15 = Size;
    }
  }
  while ( v6 < 0x4FF );
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    v26 = *(_QWORD *)(KeNodeBlock[0] + 136) - ((*(_QWORD *)(KeNodeBlock[0] + 136) >> 1) & 0x5555555555555555LL);
    v17 = (0x101010101010101LL
         * (((v26 & 0x3333333333333333LL)
           + ((v26 >> 2) & 0x3333333333333333LL)
           + (((v26 & 0x3333333333333333LL) + ((v26 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56;
    if ( (_DWORD)v17 == (_DWORD)KeNumberProcessors_0 )
    {
      v27 = 0x140000000uLL;
      goto LABEL_60;
    }
LABEL_108:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  v27 = 0x140000000uLL;
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v38 = (_OWORD *)((char *)&KiNodeInit + 384 * i);
    if ( (_OWORD *)KeNodeBlock[i] == v38 )
    {
      v39 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1C0uLL, 0x2020654Bu);
      v40 = (__int64)v39;
      if ( !v39 )
        goto LABEL_108;
      memset(v39, 0, 0x1C0uLL);
      v41 = 3LL;
      v17 = v40;
      do
      {
        *(_OWORD *)v17 = *v38;
        *(_OWORD *)(v17 + 16) = v38[1];
        *(_OWORD *)(v17 + 32) = v38[2];
        *(_OWORD *)(v17 + 48) = v38[3];
        *(_OWORD *)(v17 + 64) = v38[4];
        *(_OWORD *)(v17 + 80) = v38[5];
        *(_OWORD *)(v17 + 96) = v38[6];
        v17 += 128LL;
        v42 = v38[7];
        v38 += 8;
        *(_OWORD *)(v17 - 16) = v42;
        --v41;
      }
      while ( v41 );
      v27 = 0x140000000uLL;
      KeNodeBlock[i] = v40;
    }
  }
LABEL_60:
  v28 = (unsigned __int16)KeNumberNodes;
  v29 = 64LL;
  if ( (unsigned __int16)KeNumberNodes < 0x40u )
    memset(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)KeNumberNodes + 13775744),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)KeNumberNodes));
  KiConfigureAllSchedulingInformation(v17, v29, v28, v27);
  LOBYTE(v30) = 1;
  ((void (__fastcall *)(__int64, _QWORD))off_140C006B0[0])(v30, 0LL);
  if ( !KeMaximumProcessors )
  {
    if ( !KeDynamicPartitioningSupported || v13 <= (unsigned int)KeNumberProcessors_0 )
    {
      v31 = KeNumberProcessors_0;
LABEL_65:
      KeMaximumProcessors = v31;
      goto LABEL_66;
    }
    v43 = KeRegisteredProcessors * *(_DWORD *)(KiProcessorBlock[0] + 152) * *(_DWORD *)(KiProcessorBlock[0] + 156);
    KeMaximumProcessors = v43;
    if ( v43 > KiMaximumGroupSize * (unsigned int)(unsigned __int16)KiMaximumGroups )
    {
      KeMaximumProcessors = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      v43 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
    }
    if ( v43 > v13 )
    {
      KeMaximumProcessors = v13;
      v43 = v13;
    }
    v31 = 1280;
    if ( v43 > 0x500 )
      goto LABEL_65;
  }
LABEL_66:
  if ( !KeDynamicPartitioningSupported )
    KiMaximumGroups = KiActiveGroups;
  KiBootProcessorsStarted = 1;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  KiBootProcessorCount = result;
  KiBarrierWait = 0;
  return result;
}
