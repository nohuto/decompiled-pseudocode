/*
 * XREFs of KiStartDynamicProcessor @ 0x1408BA6C8
 * Callers:
 *     KeStartDynamicProcessor @ 0x1408BB810 (KeStartDynamicProcessor.c)
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14029B0A0 (MmUnlockPagableImageSection.c)
 *     MiLockPagableImageSection @ 0x14029CB80 (MiLockPagableImageSection.c)
 *     MmCreateKernelStack @ 0x1402AABF0 (MmCreateKernelStack.c)
 *     MmDeleteKernelStack @ 0x1402AB200 (MmDeleteKernelStack.c)
 *     ExInitializeProcessor @ 0x1403A895C (ExInitializeProcessor.c)
 *     KiQueryProcessorNode @ 0x1403B563C (KiQueryProcessorNode.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     memset @ 0x140413800 (memset.c)
 *     HalStartDynamicProcessor @ 0x1404BC230 (HalStartDynamicProcessor.c)
 *     HalRegisterDynamicProcessor @ 0x1404BDC50 (HalRegisterDynamicProcessor.c)
 *     KiDynamicProcessorInitialization @ 0x14051237C (KiDynamicProcessorInitialization.c)
 *     KiAdjustGroupConfiguration @ 0x1405154B8 (KiAdjustGroupConfiguration.c)
 *     KiRemoveProcessorFromGroupDatabase @ 0x14051595C (KiRemoveProcessorFromGroupDatabase.c)
 *     KiDynamicProcessorAddNotification @ 0x140518D58 (KiDynamicProcessorAddNotification.c)
 *     MmDeleteProcessor @ 0x14052DF10 (MmDeleteProcessor.c)
 *     EtwpCCSwapDeleteProcessor @ 0x1405AC3F8 (EtwpCCSwapDeleteProcessor.c)
 *     ExDeletePoolTagTable @ 0x1405B358C (ExDeletePoolTagTable.c)
 *     MmAllocateIndependentPagesEx @ 0x14076202C (MmAllocateIndependentPagesEx.c)
 *     MmFreeIndependentPages @ 0x140763BF0 (MmFreeIndependentPages.c)
 *     CcInitializeProcessor @ 0x140790FB0 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x14079106C (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x140791188 (IoInitializeProcessor.c)
 *     EtwInitializeProcessor @ 0x140793D0C (EtwInitializeProcessor.c)
 *     MmAllocateIsrStack @ 0x14079FD68 (MmAllocateIsrStack.c)
 *     KeInitializeTimerTable @ 0x14079FF64 (KeInitializeTimerTable.c)
 *     HvlInitializeProcessor @ 0x1407A0160 (HvlInitializeProcessor.c)
 *     KxInitializeProcessorState @ 0x1407A01B0 (KxInitializeProcessorState.c)
 *     ExCreatePoolTagTable @ 0x1407A09E0 (ExCreatePoolTagTable.c)
 *     CmInitializeProcessor @ 0x1408734C0 (CmInitializeProcessor.c)
 *     HvlDeleteProcessor @ 0x14088E710 (HvlDeleteProcessor.c)
 *     MmFreeIsrStack @ 0x1408D12A8 (MmFreeIsrStack.c)
 *     KiComputeProcessorDataSize @ 0x14099ED60 (KiComputeProcessorDataSize.c)
 *     KiInitializePrcbContext @ 0x14099F0D8 (KiInitializePrcbContext.c)
 *     MmInitializeProcessor @ 0x14099F378 (MmInitializeProcessor.c)
 *     KiInitializeDynamicProcessor @ 0x1409AF460 (KiInitializeDynamicProcessor.c)
 *     KiUnshadowProcessorAllocation @ 0x1409AFD8C (KiUnshadowProcessorAllocation.c)
 *     KiAddProcessorToGroupSchedulingDatabase @ 0x1409AFDD4 (KiAddProcessorToGroupSchedulingDatabase.c)
 *     WheaInitializeProcessor @ 0x1409B37E4 (WheaInitializeProcessor.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

__int64 __fastcall KiStartDynamicProcessor(__int64 a1, int a2, unsigned __int16 a3, unsigned int a4)
{
  ULONG_PTR v5; // r12
  SIZE_T v6; // rdx
  MEMORY_CACHING_TYPE v7; // r8d
  __int64 v8; // r13
  _OWORD *v9; // rsi
  struct _KPRCB *v10; // rdi
  unsigned __int64 v11; // r15
  int v12; // ebx
  unsigned int v13; // r13d
  unsigned __int64 v14; // r14
  __int64 v15; // rbx
  PVOID v16; // rcx
  __int64 v17; // r15
  int v18; // r14d
  int started; // eax
  _OWORD *v20; // rax
  __int64 v21; // rcx
  __int128 v22; // xmm1
  __int64 EtwSupport; // rcx
  size_t BugCheckParameter4; // [rsp+20h] [rbp-F0h]
  unsigned __int16 v26; // [rsp+90h] [rbp-80h] BYREF
  ULONG_PTR v27; // [rsp+98h] [rbp-78h] BYREF
  size_t Size; // [rsp+A0h] [rbp-70h] BYREF
  int v29; // [rsp+A8h] [rbp-68h] BYREF
  __int64 IndependentPages; // [rsp+B0h] [rbp-60h]
  __int64 v31; // [rsp+B8h] [rbp-58h] BYREF
  __int64 v32; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v33; // [rsp+C8h] [rbp-48h] BYREF
  __int64 v34; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v35; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v36; // [rsp+E0h] [rbp-30h] BYREF
  void *PoolTagTable; // [rsp+E8h] [rbp-28h]
  __int64 KernelStack; // [rsp+F0h] [rbp-20h]
  __int64 v39; // [rsp+F8h] [rbp-18h]
  _OWORD v40[22]; // [rsp+100h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter1[184]; // [rsp+260h] [rbp+150h] BYREF

  LODWORD(v27) = a2;
  v5 = a4;
  v29 = 0;
  memset(v40, 0, sizeof(v40));
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  v8 = 0LL;
  PoolTagTable = 0LL;
  v9 = 0LL;
  IndependentPages = 0LL;
  v10 = 0LL;
  v32 = 0LL;
  v11 = 0LL;
  KernelStack = 0LL;
  v31 = 0LL;
  Size = 0LL;
  v26 = 0;
  v36 = 0LL;
  v35 = 0LL;
  v34 = 0LL;
  v33 = 0LL;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x500
    || KeNumprocSpecified && (unsigned int)KeNumberProcessors_0 >= KeNumprocSpecified )
  {
    v12 = -1073741223;
    goto LABEL_46;
  }
  v12 = HalRegisterDynamicProcessor();
  if ( v12 < 0 )
  {
LABEL_49:
    KiBarrierWait = 0;
    if ( v8 )
    {
      v6 = 128LL;
      v20 = (_OWORD *)v8;
      v21 = 3LL;
      do
      {
        *v20 = *v9;
        v20[1] = v9[1];
        v20[2] = v9[2];
        v20[3] = v9[3];
        v20[4] = v9[4];
        v20[5] = v9[5];
        v20[6] = v9[6];
        v20 += 8;
        v22 = v9[7];
        v9 += 8;
        *(v20 - 1) = v22;
        --v21;
      }
      while ( v21 );
      KeNodeBlock[v26] = v8;
    }
    if ( v10 )
    {
      HvlDeleteProcessor(v10, v6, v7);
      MmDeleteProcessor((__int64)v10);
      EtwSupport = (__int64)v10->EtwSupport;
      if ( EtwSupport )
      {
        EtwpCCSwapDeleteProcessor(EtwSupport);
        ExFreePoolWithTag(v10->EtwSupport, 0);
        v10->EtwSupport = 0LL;
      }
    }
    v14 = IndependentPages;
    v13 = Size;
    goto LABEL_57;
  }
  v26 = a3;
  v12 = KiQueryProcessorNode(v5, &v27, &v26);
  if ( v12 )
    goto LABEL_46;
  KiAdjustGroupConfiguration(KeNodeBlock[v26]);
  v13 = KiComputeProcessorDataSize((unsigned int)KeMaximumProcessors, &v29, (char *)&Size + 4);
  LODWORD(Size) = v13;
  IndependentPages = MmAllocateIndependentPagesEx(v13, v26, 0LL, 0LL);
  v14 = IndependentPages;
  if ( !IndependentPages )
  {
    v12 = -1073741670;
    KiBarrierWait = 0;
    return (unsigned int)v12;
  }
  PoolTagTable = ExCreatePoolTagTable(v5, v26);
  if ( PoolTagTable )
  {
    KernelStack = MmCreateKernelStack(0, v26, 0LL);
    v15 = KernelStack;
    if ( !KernelStack
      || (v39 = MmCreateKernelStack(0, v26, 0LL), (v11 = v39) == 0)
      || !MmAllocateIsrStack(&v31, v26)
      || !MmAllocateIsrStack(&v32, v26)
      || !MmAllocateIsrStack(&v36, v26)
      || !MmAllocateIsrStack(&v35, v26)
      || !MmAllocateIsrStack(&v34, v26)
      || !MmAllocateIsrStack(&v33, v26) )
    {
      v12 = -1073741670;
      KiBarrierWait = 0;
LABEL_57:
      if ( PoolTagTable )
        ExDeletePoolTagTable(v5);
      goto LABEL_59;
    }
    v8 = KeNodeBlock[v26];
    v40[1] = *(_OWORD *)&PsLoadedModuleList;
    LODWORD(BugCheckParameter4) = Size;
    v10 = (struct _KPRCB *)KxInitializeProcessorState(
                             BugCheckParameter1,
                             v40,
                             v14,
                             1,
                             BugCheckParameter4,
                             v26,
                             v5,
                             KeMaximumProcessors,
                             v29,
                             HIDWORD(Size),
                             v15,
                             v11,
                             v31,
                             v32,
                             v33,
                             v35,
                             v34,
                             v36);
    if ( !v10 )
    {
      v12 = -1073741670;
      goto LABEL_49;
    }
    v9 = (_OWORD *)KeNodeBlock[v26];
    if ( !(unsigned int)MmInitializeProcessor(v10) )
    {
      v12 = -1073741823;
      goto LABEL_47;
    }
    v12 = KiInitializePrcbContext(v10, v26);
    if ( v12 < 0 )
      goto LABEL_47;
    v12 = KeInitializeTimerTable((__int64)v10);
    if ( v12 < 0
      || (v12 = ExInitializeProcessor((__int64)v10, 1), v12 < 0)
      || (v12 = ObInitializeProcessor(v10), v12 < 0)
      || (v12 = IoInitializeProcessor((__int64)v10, 0LL), v12 < 0)
      || (v12 = CcInitializeProcessor((__int64)v10), v12 < 0)
      || (v12 = EtwInitializeProcessor((__int64)v10), v12 < 0)
      || (v12 = WheaInitializeProcessor(v10, 0LL), v12 < 0)
      || (v12 = HvlInitializeProcessor((_SLIST_HEADER *)v10), v12 < 0) )
    {
LABEL_47:
      if ( v10 )
        KiRemoveProcessorFromGroupDatabase((__int64)v10);
      goto LABEL_49;
    }
    v16 = ExPageLockHandle;
    v10->ProcessorProfileControlArea = 0LL;
    v10->ProfileEventIndexAddress = &v10->ProfileEventIndexAddress;
    MiLockPagableImageSection((ULONG_PTR)v16, 1uLL);
    KiAddProcessorToGroupSchedulingDatabase(v10);
    v17 = KeLoaderBlock_0;
    KiBarrierWait = 1;
    if ( !KeLoaderBlock_0 )
    {
      KeLoaderBlock_0 = (__int64)v40;
      v40[1] = *(_OWORD *)&PsLoadedModuleList;
    }
    v12 = KiDynamicProcessorAddNotification(0, v10->Number, v10->Group, v10->GroupIndex, v27, 0);
    v18 = 2;
    if ( v12 >= 0 )
    {
      started = HalStartDynamicProcessor((__int64)BugCheckParameter1, v5, v27, v26);
      if ( started == 3 )
        KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v5, (unsigned int)v27);
      if ( started == 2 )
      {
        v12 = -1073741823;
      }
      else
      {
        while ( *((_QWORD *)&v40[8] + 1) )
          _mm_pause();
        KiInitializeDynamicProcessor(v10);
        v18 = 1;
      }
    }
    KiDynamicProcessorAddNotification(v18, v10->Number, v10->Group, v10->GroupIndex, v27, v12);
    if ( v12 >= 0 )
    {
      WheaInitializeProcessor(v10, 1LL);
      CmInitializeProcessor((__int64)v10);
      KiDynamicProcessorInitialization((__int64)v10);
    }
    KeLoaderBlock_0 = v17;
    MmUnlockPagableImageSection(ExPageLockHandle);
    v11 = v39;
LABEL_46:
    if ( v12 >= 0 )
      return (unsigned int)v12;
    goto LABEL_47;
  }
  v12 = -1073741670;
  KiBarrierWait = 0;
LABEL_59:
  if ( v14 )
  {
    if ( v10 )
      KiUnshadowProcessorAllocation(v10, BugCheckParameter1);
    MmFreeIndependentPages(v14, v13);
  }
  if ( KernelStack )
    MmDeleteKernelStack(KernelStack, 0LL);
  if ( v11 )
    MmDeleteKernelStack(v11, 0LL);
  if ( v31 )
    MmFreeIsrStack();
  if ( v32 )
    MmFreeIsrStack();
  if ( v33 )
    MmFreeIsrStack();
  if ( v34 )
    MmFreeIsrStack();
  if ( v35 )
    MmFreeIsrStack();
  if ( v36 )
    MmFreeIsrStack();
  return (unsigned int)v12;
}
