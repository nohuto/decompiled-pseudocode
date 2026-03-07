__int64 __fastcall KiStartDynamicProcessor(__int64 a1, int a2, unsigned __int16 a3, unsigned int a4)
{
  ULONG_PTR v5; // r14
  void *v6; // r12
  __int64 v7; // r13
  _OWORD *v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 *v11; // r8
  int ProcessorStateInitializationParameters; // ebx
  int v13; // r9d
  PVOID v14; // rcx
  __int64 v15; // r15
  int v16; // r12d
  int started; // eax
  _OWORD *v18; // rax
  __int128 v19; // xmm1
  unsigned __int16 v21; // [rsp+30h] [rbp-D0h] BYREF
  ULONG_PTR v22; // [rsp+38h] [rbp-C8h] BYREF
  int v23; // [rsp+40h] [rbp-C0h] BYREF
  int v24; // [rsp+44h] [rbp-BCh] BYREF
  void *PoolTagTable; // [rsp+48h] [rbp-B8h]
  _DWORD v26[60]; // [rsp+50h] [rbp-B0h] BYREF
  _OWORD v27[23]; // [rsp+140h] [rbp+40h] BYREF
  ULONG_PTR BugCheckParameter1[184]; // [rsp+2B0h] [rbp+1B0h] BYREF

  LODWORD(v22) = a2;
  v5 = a4;
  v23 = 0;
  v24 = 0;
  memset(v26, 0, 0xE4uLL);
  memset(v27, 0, sizeof(v27));
  memset(BugCheckParameter1, 0, sizeof(BugCheckParameter1));
  v21 = 0;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  KiInitializeProcessorStateInitializationParameters(v26);
  v10 = 2LL;
  v11 = KeNodeBlock;
  if ( (unsigned int)KeNumberProcessors_0 >= 0x800
    || KeNumprocSpecified && (unsigned int)KeNumberProcessors_0 >= KeNumprocSpecified )
  {
    ProcessorStateInitializationParameters = -1073741223;
LABEL_43:
    KiBarrierWait = 0;
    if ( v7 )
    {
      v18 = (_OWORD *)v7;
      do
      {
        *v18 = *v8;
        v18[1] = v8[1];
        v18[2] = v8[2];
        v18[3] = v8[3];
        v18[4] = v8[4];
        v18[5] = v8[5];
        v18[6] = v8[6];
        v18 += 8;
        v19 = v8[7];
        v8 += 8;
        *(v18 - 1) = v19;
        --v10;
      }
      while ( v10 );
      *v18 = *v8;
      v18[1] = v8[1];
      v18[2] = v8[2];
      KeNodeBlock[v21] = v7;
    }
    if ( v9 )
    {
      KiFreeLocalSharedReadyQueue(v9);
      KiFreePrcbThreads(v9);
      HvlDeleteProcessor((struct _KPRCB *)v9);
      MmDeleteProcessor(v9);
      EtwDeleteProcessor(v9);
      KiUnassignProcessorNumberFromPrcb(v9);
    }
    if ( v6 )
      ExDeletePoolTagTable(v5);
    if ( v9 )
      KiUnshadowProcessorAllocation(v9, BugCheckParameter1, v11);
    goto LABEL_53;
  }
  ProcessorStateInitializationParameters = HalRegisterDynamicProcessor();
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  v21 = a3;
  ProcessorStateInitializationParameters = KiQueryProcessorNode(v5, &v22, &v21);
  if ( ProcessorStateInitializationParameters )
    goto LABEL_39;
  v26[4] = KiComputeProcessorDataSize((unsigned int)KeMaximumProcessors, &v23, &v24);
  v26[9] = v23;
  v26[10] = v24;
  v26[0] = 1;
  v26[5] = v21;
  v26[6] = v5;
  v26[7] = v13;
  ProcessorStateInitializationParameters = KiAllocateProcessorStateInitializationParameters((__int64)v26, v21);
  if ( ProcessorStateInitializationParameters < 0 )
  {
LABEL_42:
    v10 = 2LL;
    v11 = KeNodeBlock;
    goto LABEL_43;
  }
  PoolTagTable = ExCreatePoolTagTable(v5, v21);
  v6 = PoolTagTable;
  if ( !PoolTagTable )
  {
    ProcessorStateInitializationParameters = -1073741670;
    KiBarrierWait = 0;
LABEL_53:
    KiFreeProcessorStateInitializationParameters((__int64)v26);
    return (unsigned int)ProcessorStateInitializationParameters;
  }
  v7 = KeNodeBlock[v21];
  v27[1] = *(_OWORD *)&PsLoadedModuleList;
  v9 = KiInitializeProcessorState(BugCheckParameter1, v27, (__int64)v26);
  if ( !v9 )
  {
    ProcessorStateInitializationParameters = -1073741670;
    goto LABEL_42;
  }
  v8 = (_OWORD *)KeNodeBlock[v21];
  if ( !(unsigned int)MmInitializeProcessor(v9) )
  {
    ProcessorStateInitializationParameters = -1073741823;
    goto LABEL_42;
  }
  ProcessorStateInitializationParameters = KiInitializePrcbContext(v9, v21);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = KeInitializeTimerTable(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = ExInitializeProcessor(v9, 1);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = ObInitializeProcessor((_QWORD *)v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = IoInitializeProcessor(v9, 0LL);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = CcInitializeProcessor(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = EtwInitializeProcessor(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  EtwpInitializeActivityIdSeed(*(_QWORD *)(v9 + 34472), *(_DWORD *)(v9 + 36));
  ProcessorStateInitializationParameters = WheaInitializeProcessor(v9, 0LL);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = HvlInitializeProcessor((union _SLIST_HEADER *)v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = KiAllocatePrcbThreads(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  ProcessorStateInitializationParameters = KiAllocateLocalSharedReadyQueue(v9);
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  if ( *(_QWORD *)(KiProcessorBlock[0] + 13072) )
  {
    ProcessorStateInitializationParameters = KiInitializeSingleDpcRuntimeHistoryHashTable(v9);
    if ( ProcessorStateInitializationParameters < 0 )
      goto LABEL_42;
  }
  v14 = ExPageLockHandle;
  *(_QWORD *)(v9 + 34968) = 0LL;
  *(_QWORD *)(v9 + 34976) = v9 + 34976;
  MiLockPagableImageSection((ULONG_PTR)v14, 1uLL);
  KiAddProcessorToGroupSchedulingDatabase(v9);
  v15 = KeLoaderBlock_0;
  KiBarrierWait = 1;
  if ( !KeLoaderBlock_0 )
  {
    KeLoaderBlock_0 = (__int64)v27;
    v27[1] = *(_OWORD *)&PsLoadedModuleList;
  }
  ProcessorStateInitializationParameters = KiDynamicProcessorAddNotification(
                                             0,
                                             *(_DWORD *)(v9 + 36),
                                             *(unsigned __int8 *)(v9 + 208),
                                             *(_BYTE *)(v9 + 209),
                                             v22,
                                             0);
  v16 = 2;
  if ( ProcessorStateInitializationParameters >= 0 )
  {
    started = HalStartDynamicProcessor((__int64)BugCheckParameter1, v5, v22, v21);
    if ( started == 3 )
      KeBugCheckEx(0x1DFu, (ULONG_PTR)BugCheckParameter1, 3uLL, v5, (unsigned int)v22);
    if ( started == 2 )
    {
      ProcessorStateInitializationParameters = -1073741823;
    }
    else
    {
      while ( *((_QWORD *)&v27[8] + 1) )
        _mm_pause();
      KiInitializeDynamicProcessor(v9);
      v16 = 1;
    }
  }
  KiDynamicProcessorAddNotification(
    v16,
    *(_DWORD *)(v9 + 36),
    *(unsigned __int8 *)(v9 + 208),
    *(_BYTE *)(v9 + 209),
    v22,
    ProcessorStateInitializationParameters);
  if ( ProcessorStateInitializationParameters >= 0 )
  {
    WheaInitializeProcessor(v9, 1LL);
    CmInitializeProcessor(v9);
    KiDynamicProcessorInitialization(v9);
  }
  KeLoaderBlock_0 = v15;
  MmUnlockPagableImageSection(ExPageLockHandle);
  v6 = PoolTagTable;
LABEL_39:
  if ( ProcessorStateInitializationParameters < 0 )
    goto LABEL_42;
  return (unsigned int)ProcessorStateInitializationParameters;
}
