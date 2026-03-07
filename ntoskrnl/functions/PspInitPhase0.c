char __fastcall PspInitPhase0(PVOID StartContext)
{
  char *v1; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // r8
  __int64 v5; // rax
  char v6; // cl
  int *v7; // r8
  __int64 v8; // r9
  int v9; // eax
  size_t v10; // rbx
  union _RTL_RUN_ONCE *v11; // rcx
  union _RTL_RUN_ONCE *v12; // rcx
  __int64 v13; // rax
  union _RTL_RUN_ONCE *v14; // rcx
  union _RTL_RUN_ONCE *v15; // rcx
  __int64 v16; // rax
  union _RTL_RUN_ONCE *v17; // rcx
  union _RTL_RUN_ONCE *v18; // rcx
  __int64 v19; // rax
  struct _EX_RUNDOWN_REF *Process; // rcx
  __int64 *v21; // rdi
  int v22; // ebx
  _QWORD *v23; // rbx
  void *v24; // rcx
  NTSTATUS v25; // eax
  PVOID v26; // rcx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v29[16]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-20h] BYREF
  HANDLE ThreadHandle; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v32; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v33; // [rsp+100h] [rbp+0h]
  __int128 v34; // [rsp+110h] [rbp+10h] BYREF
  __int64 v35; // [rsp+120h] [rbp+20h]
  int v36; // [rsp+130h] [rbp+30h]
  char v37; // [rsp+134h] [rbp+34h] BYREF
  int v38; // [rsp+138h] [rbp+38h]
  char v39; // [rsp+13Ch] [rbp+3Ch]
  int v40; // [rsp+140h] [rbp+40h]
  char v41; // [rsp+144h] [rbp+44h]
  int v42; // [rsp+148h] [rbp+48h]
  char v43; // [rsp+14Ch] [rbp+4Ch]
  int v44; // [rsp+150h] [rbp+50h]
  char v45; // [rsp+154h] [rbp+54h]
  int v46; // [rsp+158h] [rbp+58h]
  char v47; // [rsp+15Ch] [rbp+5Ch]
  _OWORD v48[2]; // [rsp+160h] [rbp+60h] BYREF

  PspMinimumWorkingSet += 30LL;
  v1 = &v37;
  PspMaximumWorkingSet += 300LL;
  ThreadHandle = 0LL;
  DestinationString = 0LL;
  v36 = 0;
  v48[0] = _mm_load_si128((const __m128i *)&_xmm);
  v37 = 1;
  v3 = 6LL;
  v38 = 2;
  PspHardenedMitigationOptionsMap = 0LL;
  v39 = 3;
  v40 = 3;
  v41 = 1;
  v42 = 1;
  v43 = 1;
  v44 = 4;
  v45 = 1;
  v46 = 5;
  v47 = 1;
  v48[1] = _mm_load_si128((const __m128i *)&_xmm);
  qword_140D1F428 = 0LL;
  do
  {
    v4 = (unsigned int)(4 * *((_DWORD *)v1 - 1));
    v5 = (unsigned __int8)*v1;
    v6 = (4 * *(v1 - 4)) & 0x3F;
    v1 += 8;
    *((_QWORD *)&PspHardenedMitigationOptionsMap + (v4 >> 6)) = (v5 << v6) | *((_QWORD *)&PspHardenedMitigationOptionsMap
                                                                             + (v4 >> 6)) & ~(3LL << v6);
    --v3;
  }
  while ( v3 );
  if ( (unsigned int)PspSystemMitigationOptionsLength < 0x18 )
    memset(
      (void *)(0x140000000LL + (unsigned int)PspSystemMitigationOptionsLength + 13758408LL),
      0,
      24LL - (unsigned int)PspSystemMitigationOptionsLength);
  v32 = PspSystemMitigationOptions;
  PspSystemMitigationOptionsLength = 24;
  v33 = qword_140D1EFD8;
  if ( (int)PspValidateMitigationOptions((__m128i *)&v32, 1) < 0 )
  {
    PspSystemMitigationOptions = 0LL;
    qword_140D1EFD8 = 0LL;
  }
  v7 = (int *)v48;
  v8 = 8LL;
  do
  {
    v9 = *v7++;
    *((_QWORD *)&PspSystemMitigationOptions + ((unsigned __int64)(unsigned int)(4 * v9) >> 6)) &= ~(3LL << ((4 * v9) & 0x3F));
    --v8;
  }
  while ( v8 );
  v10 = (unsigned int)PspSystemMitigationAuditOptionsLength;
  if ( (unsigned int)PspSystemMitigationAuditOptionsLength < 0x18 )
    memset(
      (char *)&PspSystemMitigationAuditOptions + (unsigned int)PspSystemMitigationAuditOptionsLength,
      0,
      24LL - (unsigned int)PspSystemMitigationAuditOptionsLength);
  v34 = PspSystemMitigationAuditOptions;
  v35 = qword_140D1F258;
  if ( (int)PspValidateMitigationAuditOptions(&v34) < 0 )
    memset(&PspSystemMitigationAuditOptions, 0, v10);
  v11 = &PspCreateThreadNotifyRoutine;
  do
  {
    CmSiRWLockInitialize(v11);
    v11 = v12 + 1;
  }
  while ( v13 != 1 );
  v14 = &PspCreateProcessNotifyRoutine;
  do
  {
    CmSiRWLockInitialize(v14);
    v14 = v15 + 1;
  }
  while ( v16 != 1 );
  v17 = &PspLoadImageNotifyRoutine;
  do
  {
    CmSiRWLockInitialize(v17);
    v17 = v18 + 1;
  }
  while ( v19 != 1 );
  PsChangeQuantumTable(0, PsRawPrioritySeparation);
  PspActiveProcessLock = 0LL;
  qword_140C37EC8 = (__int64)&PsActiveProcessHead;
  PsActiveProcessHead = (__int64)&PsActiveProcessHead;
  Process = (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process;
  PsIdleProcess = Process;
  Process[135].Count = 0LL;
  ExInitializePushLock(Process + 139);
  *((_DWORD *)PsIdleProcess + 223) = 0;
  memset(v29, 0, 0x78uLL);
  LOWORD(v29[0]) = 120;
  *(_QWORD *)((char *)&v29[4] + 4) = 512LL;
  RtlInitUnicodeString(&DestinationString, L"Job");
  *(_QWORD *)((char *)v29 + 4) = 2048LL;
  v29[9] = PspJobDelete;
  HIDWORD(v29[5]) = 1816;
  v29[8] = PspJobClose;
  HIDWORD(v29[3]) = 2031679;
  BYTE2(v29[0]) = BYTE2(v29[0]) & 0x77 | 8;
  *(_OWORD *)((char *)&v29[1] + 4) = PspJobMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v29, 0LL, (__int64)&PsJobType) >= 0
    && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsJobType, 1) >= 0 )
  {
    LODWORD(v29[1]) = 176;
    RtlInitUnicodeString(&DestinationString, L"Process");
    BYTE2(v29[0]) |= 0xC2u;
    v29[9] = PspProcessDelete;
    HIDWORD(v29[0]) = 32;
    v29[7] = PspProcessOpen;
    v29[5] = 0xB8000001000LL;
    v29[8] = PspProcessClose;
    HIDWORD(v29[3]) = 0x1FFFFF;
    LODWORD(v29[4]) = 1052672;
    *(_OWORD *)((char *)&v29[1] + 4) = PspProcessMapping;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v29, 0LL, (__int64)&PsProcessType) >= 0
      && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsProcessType, 3) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Thread");
      BYTE2(v29[0]) |= 0x80u;
      v29[9] = PspThreadDelete;
      HIDWORD(v29[0]) = 4;
      v29[7] = PspThreadOpen;
      v29[5] = 0x91000000000LL;
      v29[8] = 0LL;
      HIDWORD(v29[3]) = 0x1FFFFF;
      LODWORD(v29[4]) = 1054720;
      *(_OWORD *)((char *)&v29[1] + 4) = PspThreadMapping;
      if ( (int)ObCreateObjectType(&DestinationString, (__int64)v29, 0LL, (__int64)&PsThreadType) >= 0
        && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsThreadType, 3) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Partition");
        memset(v29, 0, 0x78uLL);
        BYTE2(v29[0]) |= 0xCu;
        v29[7] = PspOpenPartitionHandle;
        LOWORD(v29[0]) = 120;
        v29[8] = PspClosePartitionHandle;
        LODWORD(v29[1]) = 16;
        v29[9] = PspDeletePartition;
        HIDWORD(v29[3]) = 2031619;
        HIDWORD(v29[4]) = 512;
        *(_OWORD *)((char *)&v29[1] + 4) = PspPartitionMapping;
        HIDWORD(v29[5]) = 136;
        if ( (int)ObCreateObjectType(&DestinationString, (__int64)v29, 0LL, (__int64)&PsPartitionType) >= 0 )
        {
          memset(v29, 0, 0x78uLL);
          LODWORD(v29[1]) = 176;
          HIDWORD(v29[4]) = 512;
          BYTE2(v29[0]) = BYTE2(v29[0]) & 0x7D | 2;
          v21 = PspMemoryReserveObjectSizes;
          LOWORD(v29[0]) = 120;
          v22 = 0;
          *(_OWORD *)((char *)&v29[1] + 4) = PspMemReserveMapping;
          HIDWORD(v29[3]) = 983043;
          do
          {
            HIDWORD(v29[5]) = *(_DWORD *)v21;
            if ( (int)ObCreateObjectType(
                        (const UNICODE_STRING *)&PspMemoryReserveObjectNames[2 * v22],
                        (__int64)v29,
                        0LL,
                        (__int64)(&PspMemoryReserveObjectTypes + v22)) < 0 )
              return 0;
            ++v22;
            ++v21;
          }
          while ( v22 < 2 );
          RtlInitUnicodeString(&DestinationString, L"ActivityReference");
          memset(v29, 0, 0x78uLL);
          BYTE2(v29[0]) |= 4u;
          LOWORD(v29[0]) = 120;
          *(_QWORD *)((char *)&v29[4] + 4) = 0x800000001LL;
          LODWORD(v29[1]) = 402;
          *(_OWORD *)((char *)&v29[1] + 4) = PspActivityReferenceMapping;
          HIDWORD(v29[3]) = 2031616;
          v29[8] = PspCloseActivityReference;
          if ( (int)ObCreateObjectType(&DestinationString, (__int64)v29, 0LL, (__int64)&PspActivityReferenceObjectType) >= 0 )
          {
            RtlInitUnicodeString(&DestinationString, L"ProcessStateChange");
            memset(v29, 0, 0x78uLL);
            BYTE2(v29[0]) |= 6u;
            LOWORD(v29[0]) = 120;
            LODWORD(v29[1]) = 146;
            HIDWORD(v29[3]) = 983041;
            *(_QWORD *)((char *)&v29[4] + 4) = 0x1800000001LL;
            v29[7] = 0LL;
            *(_OWORD *)((char *)&v29[1] + 4) = PspProcessStateChangeMapping;
            v29[8] = 0LL;
            v29[9] = PspDeleteProcessStateChange;
            if ( (int)ObCreateObjectType(&DestinationString, (__int64)v29, 0LL, (__int64)&PspProcessStateChangeType) >= 0 )
            {
              RtlInitUnicodeString(&DestinationString, L"ThreadStateChange");
              memset(v29, 0, 0x78uLL);
              BYTE2(v29[0]) |= 6u;
              LOWORD(v29[0]) = 120;
              LODWORD(v29[1]) = 146;
              HIDWORD(v29[3]) = 983041;
              *(_QWORD *)((char *)&v29[4] + 4) = 0x1800000001LL;
              *(_OWORD *)((char *)&v29[1] + 4) = PspThreadStateChangeMapping;
              v29[7] = 0LL;
              v29[8] = 0LL;
              v29[9] = PspDeleteThreadStateChange;
              if ( (int)ObCreateObjectType(&DestinationString, (__int64)v29, 0LL, (__int64)&PspThreadStateChangeType) >= 0 )
              {
                RtlInitUnicodeString(&DestinationString, L"CpuPartition");
                memset(v29, 0, 0x78uLL);
                BYTE2(v29[0]) |= 4u;
                LOWORD(v29[0]) = 120;
                HIDWORD(v29[3]) = 983047;
                HIDWORD(v29[4]) = 512;
                HIDWORD(v29[5]) = 344;
                *(_OWORD *)((char *)&v29[1] + 4) = PspCpuPartitionMapping;
                v29[7] = 0LL;
                v29[8] = 0LL;
                v29[9] = PspDeleteCpuPartition;
                if ( (int)ObCreateObjectType(&DestinationString, (__int64)v29, 0LL, (__int64)&PsCpuPartitionType) >= 0 )
                {
                  if ( (unsigned __int8)PspInitializeJobStructures() )
                  {
                    if ( PspInitializeSiloStructures() )
                    {
                      qword_140D0C000 = 0LL;
                      qword_140D0BFF8 = (__int64)&PspWorkingSetChangeHead;
                      PspWorkingSetChangeHead = (__int64)&PspWorkingSetChangeHead;
                      PspAffinityUpdateLock = 0LL;
                      PspCidTable = ExCreateHandleTable(0LL, 0LL);
                      if ( PspCidTable )
                      {
                        CmSiRWLockInitialize(&PsWin32CallBack);
                        CmSiRWLockInitialize(&PsWin32NullCallBack);
                        *(_BYTE *)(PspCidTable + 44) |= 1u;
                        qword_140C37EF0 = (__int64)PspReaper;
                        qword_140C37F50 = (__int64)PspProcessRundownWorker;
                        PspProcessRundownCacheWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspProcessRundownWorkerSingle;
                        PsReaperListHead = 0LL;
                        qword_140C37EF8 = 0LL;
                        PsReaperWorkItem = 0LL;
                        qword_140C37F58 = 0LL;
                        PspProcessRundownWorkItem = 0LL;
                        PspProcessRundownCacheWorkItem.Parameter = 0LL;
                        PspProcessRundownCacheWorkItem.List.Flink = 0LL;
                        if ( (int)PspTlsInitialize() >= 0 )
                        {
                          PspBootAccessToken = (PVOID)(*((_QWORD *)PsIdleProcess + 151) & 0xFFFFFFFFFFFFFFF0uLL);
                          if ( (int)PspInitializeSystemPartitionPhase0() >= 0 )
                          {
                            v23 = PspSystemPartition;
                            if ( (int)PspInitializeCpuPartitionsPhase0() >= 0
                              && PspCreateProcess(v23 + 15, 0x1FFFFF, 0LL, 0LL, 0, 0, 0LL, 0LL, 0LL) >= 0 )
                            {
                              v24 = (void *)v23[15];
                              Object = 0LL;
                              v25 = ObReferenceObjectByHandle(v24, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
                              v26 = Object;
                              v23[14] = Object;
                              if ( v25 >= 0 )
                              {
                                PsInitialSystemProcess = (PEPROCESS)v26;
                                _InterlockedOr((volatile signed __int32 *)v26 + 628, 0x40000000u);
                                _InterlockedOr(
                                  (volatile signed __int32 *)&PsInitialSystemProcess[2].ReadyListHead.Blink + 1,
                                  0x2000u);
                                _InterlockedOr(
                                  (volatile signed __int32 *)&PsInitialSystemProcess[2].Header.WaitListHead.Flink + 1,
                                  0x1000u);
                                strcpy_s((char *)PsIdleProcess + 1448, 0xFuLL, "Idle");
                                strcpy_s((char *)&PsInitialSystemProcess[1].ActiveProcessors, 0xFuLL, "System");
                                PsInitialSystemProcess[1].ActiveProcessors.StaticBitmap[2] = ExAllocatePool2(
                                                                                               64LL,
                                                                                               0x10uLL,
                                                                                               0x61506553u);
                                if ( PsInitialSystemProcess[1].ActiveProcessors.StaticBitmap[2] )
                                {
                                  if ( PsCreateSystemThread(
                                         &ThreadHandle,
                                         0x1FFFFFu,
                                         0LL,
                                         0LL,
                                         0LL,
                                         (PKSTART_ROUTINE)Phase1Initialization,
                                         StartContext) >= 0 )
                                  {
                                    ObCloseHandle(ThreadHandle, 0);
                                    if ( !VslVsmEnabled )
                                    {
LABEL_44:
                                      PsVmProcessorHostTransitionEvent = 0LL;
                                      return 1;
                                    }
                                    PspIumWorkItem.Parameter = 0LL;
                                    PspIumWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspIumWorker;
                                    PspIumWorkItem.List.Flink = 0LL;
                                    PspIumFreeMapping = MmAllocateMappingAddress(0x1000uLL, 0x466D7356u);
                                    if ( PspIumFreeMapping )
                                    {
                                      PspIumLogBuffer = MmAllocateIndependentPagesEx(
                                                          0x2000uLL,
                                                          -1,
                                                          (_QWORD *)0xFFFFFFFFFFFFFFFFLL,
                                                          1u);
                                      PsIumResumeAfterHibernate();
                                      if ( (VslGetNestedPageProtectionFlags() & 0x40) != 0 )
                                        *(_QWORD *)&PspSystemMitigationOptions = PspSystemMitigationOptions & 0xFFFFFF0FFFFFFFFFuLL | 0x5000000000LL;
                                      if ( PspIumLogBuffer )
                                      {
                                        PspVsmLogCallbackRecord.State = 0;
                                        KeRegisterBugCheckReasonCallback(
                                          &PspVsmLogCallbackRecord,
                                          (PKBUGCHECK_REASON_CALLBACK_ROUTINE)PspVsmLogBugCheckCallback,
                                          KbCallbackSecondaryDumpData,
                                          (PUCHAR)"SecureKernelFailureLog");
                                      }
                                      goto LABEL_44;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}
