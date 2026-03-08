/*
 * XREFs of KeStartAllProcessors @ 0x140B3C580
 * Callers:
 *     Phase1InitializationDiscard @ 0x140B450A0 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeQueryActiveProcessorCountEx @ 0x1402A97C0 (KeQueryActiveProcessorCountEx.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     HalEnumerateProcessors @ 0x140371430 (HalEnumerateProcessors.c)
 *     HvlStartBootLogicalProcessors @ 0x1403714E0 (HvlStartBootLogicalProcessors.c)
 *     KiAllocatePrcbThreads @ 0x140371E18 (KiAllocatePrcbThreads.c)
 *     KiAllocateProcessorStateInitializationParameters @ 0x140371E4C (KiAllocateProcessorStateInitializationParameters.c)
 *     HalStartNextProcessor @ 0x140371EB0 (HalStartNextProcessor.c)
 *     KiAllocateLocalSharedReadyQueue @ 0x1403721F0 (KiAllocateLocalSharedReadyQueue.c)
 *     KiCompleteBootProcessorContextInitialization @ 0x14037226C (KiCompleteBootProcessorContextInitialization.c)
 *     KiQueryProcessorNode @ 0x140372500 (KiQueryProcessorNode.c)
 *     HalQueryMaximumProcessorCount @ 0x140375910 (HalQueryMaximumProcessorCount.c)
 *     KiFreeLocalSharedReadyQueue @ 0x14037F864 (KiFreeLocalSharedReadyQueue.c)
 *     PpmHeteroInitializeHgsSupport @ 0x1403A6784 (PpmHeteroInitializeHgsSupport.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheck @ 0x140415FE0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiFreePrcbThreads @ 0x140569908 (KiFreePrcbThreads.c)
 *     KiFreeProcessorStateInitializationParameters @ 0x140569A34 (KiFreeProcessorStateInitializationParameters.c)
 *     ExDeletePoolTagTable @ 0x140604960 (ExDeletePoolTagTable.c)
 *     MmDeleteProcessor @ 0x14061578C (MmDeleteProcessor.c)
 *     ExCreatePoolTagTable @ 0x14080AC00 (ExCreatePoolTagTable.c)
 *     KiInitializeProcessorState @ 0x14080AC80 (KiInitializeProcessorState.c)
 *     HvlInitializeProcessor @ 0x14080AFA0 (HvlInitializeProcessor.c)
 *     EtwInitializeProcessor @ 0x14080B24C (EtwInitializeProcessor.c)
 *     KeInitializeTimerTable @ 0x14080B438 (KeInitializeTimerTable.c)
 *     MmAllocateIndependentPagesEx @ 0x140869ADC (MmAllocateIndependentPagesEx.c)
 *     HvlDeleteProcessor @ 0x14093E28C (HvlDeleteProcessor.c)
 *     EtwDeleteProcessor @ 0x1409DEFB8 (EtwDeleteProcessor.c)
 *     KiComputeProcessorDataSize @ 0x140A85FB4 (KiComputeProcessorDataSize.c)
 *     KiConfigureProcessorBlock @ 0x140A85FE4 (KiConfigureProcessorBlock.c)
 *     KiUpdateProcessorCount @ 0x140A860DC (KiUpdateProcessorCount.c)
 *     KiInitializePrcbContext @ 0x140A86364 (KiInitializePrcbContext.c)
 *     MmInitializeProcessor @ 0x140A86740 (MmInitializeProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x140A9CC9C (KiUnshadowProcessorAllocation.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
 *     KiCountNodeZeroSetBitsGroupAffinity @ 0x140B3AB7C (KiCountNodeZeroSetBitsGroupAffinity.c)
 *     KiAllocateCpuSetData @ 0x140B3AC30 (KiAllocateCpuSetData.c)
 *     KiConfigureAllSchedulingInformation @ 0x140B41844 (KiConfigureAllSchedulingInformation.c)
 *     PpmInitHeteroEngine @ 0x140B6840C (PpmInitHeteroEngine.c)
 *     PpmUpdateArchitecturalEfficiencyClass @ 0x140B68574 (PpmUpdateArchitecturalEfficiencyClass.c)
 */

ULONG KeStartAllProcessors()
{
  KPCR *Pcr; // rax
  void *Base; // rbx
  void *Pool2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // edi
  unsigned int v5; // r13d
  unsigned int MaximumProcessorCount; // eax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v8; // edx
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  unsigned int v11; // esi
  unsigned int v12; // r15d
  __int64 IndependentPages; // rax
  __int64 v14; // rsi
  _OWORD *v15; // r14
  int started; // eax
  int v17; // eax
  __int64 v18; // rcx
  ULONG result; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  _OWORD *v22; // rax
  __int128 v23; // xmm1
  unsigned __int64 v24; // rcx
  unsigned int i; // esi
  _OWORD *v26; // rbx
  __int64 v27; // rax
  __int64 v28; // rdx
  _OWORD *v29; // rcx
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  unsigned int v32; // ecx
  unsigned int v33; // edx
  int v34; // [rsp+38h] [rbp-D0h] BYREF
  ULONG_PTR v35; // [rsp+3Ch] [rbp-CCh] BYREF
  unsigned int v36; // [rsp+44h] [rbp-C4h] BYREF
  int v37; // [rsp+48h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+4Ch] [rbp-BCh]
  __int64 v39; // [rsp+50h] [rbp-B8h]
  _QWORD v40[2]; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v41[30]; // [rsp+68h] [rbp-A0h] BYREF
  ULONG_PTR BugCheckParameter1[184]; // [rsp+158h] [rbp+50h] BYREF

  memset(v41, 0, 0xE4uLL);
  LOWORD(v34) = 0;
  v35 = 0LL;
  v37 = 0;
  v36 = 0;
  if ( (int)KiCompleteBootProcessorContextInitialization() < 0 )
    goto LABEL_79;
  Pcr = KeGetPcr();
  Base = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Base;
  LODWORD(KiBootProcessorIdtSize) = Pcr->Prcb.ProcessorState.SpecialRegisters.Idtr.Limit + 1;
  Pool2 = (void *)ExAllocatePool2(256LL, (unsigned int)KiBootProcessorIdtSize, 0x2020654Bu);
  KiBootProcessorIdt = Pool2;
  if ( !Pool2 )
    goto LABEL_79;
  memmove(Pool2, Base, (unsigned int)KiBootProcessorIdtSize);
  v3 = KeRegisteredProcessors;
  if ( (unsigned int)KeRegisteredProcessors > 0x800 )
  {
    v3 = 2048;
    KeRegisteredProcessors = 2048;
  }
  KiBarrierWait = 1;
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  v4 = HalEnumerateProcessors(v3);
  if ( KeNumprocSpecified && KeNumprocSpecified < v4 )
    v4 = KeNumprocSpecified;
  if ( KeBootprocSpecified && KeBootprocSpecified < v4 )
    v4 = KeBootprocSpecified;
  v5 = 0;
  MaximumProcessorCount = HalQueryMaximumProcessorCount();
  CurrentPrcb = KeGetCurrentPrcb();
  v8 = MaximumProcessorCount;
  v9 = MaximumProcessorCount;
  if ( MaximumProcessorCount > 0x800 )
    v8 = 2048;
  v10 = KeRegisteredProcessors * CurrentPrcb->CoresPerPhysicalProcessor * CurrentPrcb->LogicalProcessorsPerCore;
  if ( v8 <= v10 )
    v10 = v8;
  if ( KeNumprocSpecified && KeNumprocSpecified < v10 )
    v10 = KeNumprocSpecified;
  if ( !KeDynamicPartitioningSupported && v10 > v4 )
    v10 = v4;
  if ( !(unsigned int)KiAllocateCpuSetData(v10) )
    goto LABEL_79;
  v11 = KiComputeProcessorDataSize(v10, (_DWORD *)&v35 + 1, &v36);
  v40[0] = HIDWORD(v35);
  v40[1] = v36;
  v38 = v11;
  if ( (int)HvlStartBootLogicalProcessors(v36) < 0 )
    goto LABEL_79;
  v12 = 0;
  while ( (unsigned int)KeNumberProcessors_0 < v4 )
  {
    LODWORD(v35) = -1;
    LOWORD(v34) = -1;
    if ( !(unsigned int)KiQueryProcessorNode(++v5, &v35, &v34) )
    {
      ++v12;
      memset(v41, 0, 0xE8uLL);
      if ( !ExCreatePoolTagTable(v12, v34) )
        goto LABEL_79;
      IndependentPages = MmAllocateIndependentPagesEx(v11, (unsigned __int16)v34, v40, 2u);
      if ( !IndependentPages )
        goto LABEL_79;
      v41[1] = IndependentPages;
      HIDWORD(v41[4]) = HIDWORD(v35);
      LODWORD(v41[5]) = v36;
      LODWORD(v41[2]) = v11;
      HIDWORD(v41[2]) = (unsigned __int16)v34;
      v41[3] = __PAIR64__(v10, v12);
      if ( (int)KiAllocateProcessorStateInitializationParameters((__int64)v41, (unsigned __int16)v34) < 0 )
        goto LABEL_79;
      v39 = KeNodeBlock[(unsigned __int16)v34];
      v14 = KiInitializeProcessorState(BugCheckParameter1, (_QWORD *)KeLoaderBlock_0, (__int64)v41);
      if ( !v14 )
        goto LABEL_79;
      v15 = (_OWORD *)KeNodeBlock[(unsigned __int16)v34];
      if ( (unsigned int)HvlInitializeProcessor((union _SLIST_HEADER *)v14)
        || !(unsigned int)MmInitializeProcessor(v14)
        || (int)KiInitializePrcbContext(v14, (unsigned __int16)v34) < 0
        || (int)KeInitializeTimerTable(v14) < 0
        || (int)EtwInitializeProcessor(v14) < 0
        || (int)KiAllocatePrcbThreads(v14) < 0
        || (int)KiAllocateLocalSharedReadyQueue(v14) < 0 )
      {
        goto LABEL_79;
      }
      started = HalStartNextProcessor((__int64)BugCheckParameter1, v12, v35);
      if ( started == 3 )
        KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v12, (unsigned int)v35);
      if ( started != 4 )
      {
        v20 = v39;
        v21 = 2LL;
        v22 = (_OWORD *)v39;
        do
        {
          *v22 = *v15;
          v22[1] = v15[1];
          v22[2] = v15[2];
          v22[3] = v15[3];
          v22[4] = v15[4];
          v22[5] = v15[5];
          v22[6] = v15[6];
          v22 += 8;
          v23 = v15[7];
          v15 += 8;
          *(v22 - 1) = v23;
          --v21;
        }
        while ( v21 );
        *v22 = *v15;
        v22[1] = v15[1];
        v22[2] = v15[2];
        KeNodeBlock[(unsigned __int16)v34] = v20;
        KiFreeLocalSharedReadyQueue(v14);
        KiFreePrcbThreads(v14);
        HvlDeleteProcessor((struct _KPRCB *)v14);
        MmDeleteProcessor(v14);
        EtwDeleteProcessor(v14);
        ExDeletePoolTagTable(v12);
        KiUnshadowProcessorAllocation(v14, (__int64)BugCheckParameter1);
        v24 = (unsigned __int64)*(unsigned __int8 *)(v14 + 208) << 6;
        KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v14 + 36)] = 0;
        KiProcessorNumberToIndexMappingTable[*(unsigned __int8 *)(v14 + 209) + v24] = 0;
        *(_QWORD *)(v14 + 192) = 0LL;
        KiFreeProcessorStateInitializationParameters((__int64)v41);
        break;
      }
      v37 = 0;
      while ( *(_QWORD *)(KeLoaderBlock_0 + 136) )
        KeYieldProcessorEx(&v37);
      KiConfigureProcessorBlock(v14);
      KiUpdateProcessorCount(v12, *(unsigned __int8 *)(v14 + 208));
      v11 = v38;
    }
    if ( v5 >= 0x7FF )
      break;
  }
  if ( (unsigned __int16)KeNumberNodes <= 1u )
  {
    if ( (unsigned int)KiCountNodeZeroSetBitsGroupAffinity() == (_DWORD)KeNumberProcessors_0 )
      goto LABEL_40;
LABEL_79:
    KeBugCheckEx(0x32u, 0LL, 0LL, 0x14uLL, 0LL);
  }
  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    v26 = (_OWORD *)((char *)&KiNodeInit + 304 * i);
    if ( (_OWORD *)KeNodeBlock[i] == v26 )
    {
      v27 = ExAllocatePool2(64LL, 0x180uLL, 0x2020654Bu);
      if ( !v27 )
        goto LABEL_79;
      v28 = 2LL;
      v29 = (_OWORD *)v27;
      do
      {
        *v29 = *v26;
        v29[1] = v26[1];
        v29[2] = v26[2];
        v29[3] = v26[3];
        v29[4] = v26[4];
        v29[5] = v26[5];
        v29[6] = v26[6];
        v29 += 8;
        v30 = v26[7];
        v26 += 8;
        *(v29 - 1) = v30;
        --v28;
      }
      while ( v28 );
      v31 = *v26;
      KeNodeBlock[i] = v27;
      *v29 = v31;
      v29[1] = v26[1];
      v29[2] = v26[2];
    }
  }
LABEL_40:
  if ( (unsigned __int16)KeNumberNodes < 0x40u )
    memset(
      (void *)(0x140000000LL + 8LL * (unsigned __int16)KeNumberNodes + 13932224),
      0,
      8LL * (64 - (unsigned int)(unsigned __int16)KeNumberNodes));
  if ( !KeMaximumProcessors )
  {
    if ( !KeDynamicPartitioningSupported || v9 <= (unsigned int)KeNumberProcessors_0 )
    {
      v17 = KeNumberProcessors_0;
LABEL_45:
      KeMaximumProcessors = v17;
      goto LABEL_46;
    }
    v32 = KeRegisteredProcessors * *(_DWORD *)(KiProcessorBlock[0] + 160) * *(_DWORD *)(KiProcessorBlock[0] + 164);
    KeMaximumProcessors = v32;
    v33 = v32;
    if ( v32 > KiMaximumGroupSize * (unsigned int)(unsigned __int16)KiMaximumGroups )
    {
      KeMaximumProcessors = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      v32 = KiMaximumGroupSize * (unsigned __int16)KiMaximumGroups;
      v33 = v32;
    }
    if ( v32 > v9 )
    {
      KeMaximumProcessors = v9;
      v33 = v9;
    }
    v17 = 2048;
    if ( v33 > 0x800 )
      goto LABEL_45;
  }
LABEL_46:
  if ( !KeDynamicPartitioningSupported )
    KiMaximumGroups = KiActiveGroups;
  PpmHeteroInitializeHgsSupport();
  if ( (int)PpmInitHeteroEngine() < 0 )
    KeBugCheck(0xA0u);
  PpmUpdateArchitecturalEfficiencyClass();
  KiConfigureAllSchedulingInformation();
  LOBYTE(v18) = 1;
  ((void (__fastcall *)(__int64, _QWORD))off_140C01AC0[0])(v18, 0LL);
  KiBootProcessorsStarted = 1;
  result = KeQueryActiveProcessorCountEx(0xFFFFu);
  KiBootProcessorCount = result;
  KiBarrierWait = 0;
  return result;
}
