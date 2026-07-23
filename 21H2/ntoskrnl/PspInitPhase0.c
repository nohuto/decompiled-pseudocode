/*
 * XREFs of PspInitPhase0 @ 0x140A3EC68
 * Callers:
 *     PsInitSystem @ 0x140A4D2F8 (PsInitSystem.c)
 * Callees:
 *     VslGetNestedPageProtectionFlags @ 0x1402653A0 (VslGetNestedPageProtectionFlags.c)
 *     ExInitializePushLock @ 0x140266E80 (ExInitializePushLock.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     PsIumResumeAfterHibernate @ 0x14038DF4C (PsIumResumeAfterHibernate.c)
 *     KeRegisterBugCheckReasonCallback @ 0x14039E7B0 (KeRegisterBugCheckReasonCallback.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x1403AD7E4 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     strcpy_s @ 0x1403D7EE0 (strcpy_s.c)
 *     memset @ 0x140414300 (memset.c)
 *     MmAllocateMappingAddress @ 0x14060CD20 (MmAllocateMappingAddress.c)
 *     PspValidateMitigationOptions @ 0x14060DEFC (PspValidateMitigationOptions.c)
 *     ExCreateHandleTable @ 0x140622DE8 (ExCreateHandleTable.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PsCreateSystemThread @ 0x1406A7420 (PsCreateSystemThread.c)
 *     ObReferenceObjectByHandle @ 0x140707FA0 (ObReferenceObjectByHandle.c)
 *     MmAllocateIndependentPagesEx @ 0x140762BCC (MmAllocateIndependentPagesEx.c)
 *     PsChangeQuantumTable @ 0x14078C978 (PsChangeQuantumTable.c)
 *     CmSiRWLockInitialize @ 0x140795910 (CmSiRWLockInitialize.c)
 *     ObCreateObjectType @ 0x140795AD0 (ObCreateObjectType.c)
 *     PspValidateMitigationAuditOptions @ 0x1407C4B28 (PspValidateMitigationAuditOptions.c)
 *     PspCreateProcess @ 0x1407CE5D0 (PspCreateProcess.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 *     PspInitializeSiloStructures @ 0x140A3DBC4 (PspInitializeSiloStructures.c)
 *     PspInitializeSystemPartitionPhase0 @ 0x140A6ED90 (PspInitializeSystemPartitionPhase0.c)
 *     PspInitializeJobStructures @ 0x140A73054 (PspInitializeJobStructures.c)
 */

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
  size_t v10; // rdi
  _RTL_RUN_ONCE *v11; // rcx
  _RTL_RUN_ONCE *v12; // rcx
  __int64 v13; // rax
  _RTL_RUN_ONCE *v14; // rcx
  _RTL_RUN_ONCE *v15; // rcx
  __int64 v16; // rax
  _RTL_RUN_ONCE *v17; // rcx
  _RTL_RUN_ONCE *v18; // rcx
  __int64 v19; // rax
  _KPROCESS *Process; // rcx
  __int64 *v21; // rdi
  int v22; // ebx
  _QWORD *v23; // rbx
  void *v24; // rcx
  NTSTATUS v25; // eax
  PVOID v26; // rcx
  _OWORD *v27; // rcx
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v30[16]; // [rsp+60h] [rbp-A0h] BYREF
  PVOID Object; // [rsp+E0h] [rbp-20h] BYREF
  HANDLE ThreadHandle; // [rsp+E8h] [rbp-18h] BYREF
  __int128 v33; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v34; // [rsp+100h] [rbp+0h]
  __int128 v35; // [rsp+110h] [rbp+10h] BYREF
  __int64 v36; // [rsp+120h] [rbp+20h]
  int v37; // [rsp+130h] [rbp+30h]
  char v38; // [rsp+134h] [rbp+34h] BYREF
  int v39; // [rsp+138h] [rbp+38h]
  char v40; // [rsp+13Ch] [rbp+3Ch]
  int v41; // [rsp+140h] [rbp+40h]
  char v42; // [rsp+144h] [rbp+44h]
  int v43; // [rsp+148h] [rbp+48h]
  char v44; // [rsp+14Ch] [rbp+4Ch]
  int v45; // [rsp+150h] [rbp+50h]
  char v46; // [rsp+154h] [rbp+54h]
  int v47; // [rsp+158h] [rbp+58h]
  char v48; // [rsp+15Ch] [rbp+5Ch]
  _OWORD v49[2]; // [rsp+160h] [rbp+60h] BYREF

  PspMinimumWorkingSet += 30LL;
  v1 = &v38;
  PspMaximumWorkingSet += 300LL;
  ThreadHandle = 0LL;
  DestinationString = 0LL;
  v37 = 0;
  v49[0] = _mm_load_si128((const __m128i *)&_xmm);
  v38 = 1;
  v3 = 6LL;
  v39 = 2;
  PspHardenedMitigationOptionsMap = 0LL;
  v40 = 3;
  v41 = 3;
  v42 = 1;
  v43 = 1;
  v44 = 1;
  v45 = 4;
  v46 = 1;
  v47 = 5;
  v48 = 1;
  v49[1] = _mm_load_si128((const __m128i *)&_xmm);
  qword_140CFCC78 = 0LL;
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
      (void *)(0x140000000LL + (unsigned int)PspSystemMitigationOptionsLength + 13617616LL),
      0,
      24LL - (unsigned int)PspSystemMitigationOptionsLength);
  v33 = PspSystemMitigationOptions;
  PspSystemMitigationOptionsLength = 24;
  v34 = qword_140CFC9E0;
  if ( (int)PspValidateMitigationOptions((__m128i *)&v33, 1) < 0 )
  {
    PspSystemMitigationOptions = 0LL;
    qword_140CFC9E0 = 0LL;
  }
  v7 = (int *)v49;
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
  v35 = PspSystemMitigationAuditOptions;
  v36 = qword_140CFCB80;
  if ( (int)PspValidateMitigationAuditOptions(&v35) < 0 )
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
  qword_140C1E258 = (__int64)&PsActiveProcessHead;
  PsActiveProcessHead = (__int64)&PsActiveProcessHead;
  Process = KeGetCurrentThread()->ApcState.Process;
  PsIdleProcess = Process;
  *(_QWORD *)&Process[1].Header.Lock = 0LL;
  ExInitializePushLock((PKSPIN_LOCK)&Process[1].ProfileListHead.Blink);
  *((_DWORD *)PsIdleProcess + 223) = 0;
  memset(v30, 0, 0x78uLL);
  LOWORD(v30[0]) = 120;
  *(_QWORD *)((char *)&v30[4] + 4) = 512LL;
  RtlInitUnicodeString(&DestinationString, L"Job");
  *(_QWORD *)((char *)v30 + 4) = 2048LL;
  v30[9] = PspJobDelete;
  HIDWORD(v30[5]) = 1600;
  v30[8] = PspJobClose;
  HIDWORD(v30[3]) = 2031679;
  BYTE2(v30[0]) = BYTE2(v30[0]) & 0x77 | 8;
  *(_OWORD *)((char *)&v30[1] + 4) = PspJobMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsJobType) >= 0
    && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsJobType, 1) >= 0 )
  {
    LODWORD(v30[1]) = 176;
    RtlInitUnicodeString(&DestinationString, L"Process");
    BYTE2(v30[0]) |= 0xC2u;
    v30[9] = PspProcessDelete;
    HIDWORD(v30[0]) = 32;
    v30[7] = PspProcessOpen;
    v30[5] = 0xA4000001000LL;
    v30[8] = PspProcessClose;
    HIDWORD(v30[3]) = 0x1FFFFF;
    LODWORD(v30[4]) = 1052672;
    *(_OWORD *)((char *)&v30[1] + 4) = PspProcessMapping;
    if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsProcessType) >= 0
      && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsProcessType, 3) >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Thread");
      BYTE2(v30[0]) |= 0x80u;
      v30[9] = PspThreadDelete;
      HIDWORD(v30[0]) = 4;
      v30[7] = PspThreadOpen;
      v30[5] = 0x89800000000LL;
      v30[8] = 0LL;
      HIDWORD(v30[3]) = 0x1FFFFF;
      LODWORD(v30[4]) = 1054720;
      *(_OWORD *)((char *)&v30[1] + 4) = PspThreadMapping;
      if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsThreadType) >= 0
        && (int)SeRegisterObjectTypeMandatoryPolicy((__int64)PsThreadType, 3) >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"Partition");
        memset(v30, 0, 0x78uLL);
        BYTE2(v30[0]) |= 0xCu;
        v30[7] = PspOpenPartitionHandle;
        LOWORD(v30[0]) = 120;
        v30[8] = PspClosePartitionHandle;
        LODWORD(v30[1]) = 16;
        v30[9] = PspDeletePartition;
        HIDWORD(v30[3]) = 2031619;
        HIDWORD(v30[4]) = 512;
        *(_OWORD *)((char *)&v30[1] + 4) = PspPartitionMapping;
        HIDWORD(v30[5]) = 128;
        if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PsPartitionType) >= 0 )
        {
          memset(v30, 0, 0x78uLL);
          LOWORD(v30[0]) = 120;
          HIDWORD(v30[4]) = 512;
          BYTE2(v30[0]) = BYTE2(v30[0]) & 0x7D | 2;
          v21 = PspMemoryReserveObjectSizes;
          LODWORD(v30[1]) = 176;
          v22 = 0;
          *(_OWORD *)((char *)&v30[1] + 4) = PspMemReserveMapping;
          HIDWORD(v30[3]) = 983043;
          do
          {
            HIDWORD(v30[5]) = *(_DWORD *)v21;
            if ( (int)ObCreateObjectType(
                        (const UNICODE_STRING *)&PspMemoryReserveObjectNames[2 * v22],
                        (__int64)v30,
                        0LL,
                        (__int64)(&PspMemoryReserveObjectTypes + v22)) < 0 )
              return 0;
            ++v22;
            ++v21;
          }
          while ( v22 < 2 );
          RtlInitUnicodeString(&DestinationString, L"ActivityReference");
          memset(v30, 0, 0x78uLL);
          BYTE2(v30[0]) |= 4u;
          LOWORD(v30[0]) = 120;
          *(_QWORD *)((char *)&v30[4] + 4) = 0x800000001LL;
          LODWORD(v30[1]) = 402;
          *(_OWORD *)((char *)&v30[1] + 4) = PspActivityReferenceMapping;
          HIDWORD(v30[3]) = 2031616;
          v30[8] = PspCloseActivityReference;
          if ( (int)ObCreateObjectType(&DestinationString, (__int64)v30, 0LL, (__int64)&PspActivityReferenceObjectType) >= 0 )
          {
            if ( (unsigned __int8)PspInitializeJobStructures() )
            {
              if ( PspInitializeSiloStructures() )
              {
                qword_140C13270 = 0LL;
                qword_140C13268 = (__int64)&PspWorkingSetChangeHead;
                PspWorkingSetChangeHead = (__int64)&PspWorkingSetChangeHead;
                PspAffinityUpdateLock = 0LL;
                PspCidTable = ExCreateHandleTable(0LL, 0LL);
                if ( PspCidTable )
                {
                  CmSiRWLockInitialize(&PsWin32CallBack);
                  CmSiRWLockInitialize(&PsWin32NullCallBack);
                  *(_BYTE *)(PspCidTable + 44) |= 1u;
                  qword_140C1E1D0 = (__int64)PspReaper;
                  qword_140C1E210 = (__int64)PspProcessRundownWorker;
                  PspProcessRundownCacheWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspProcessRundownWorkerSingle;
                  PsReaperListHead = 0LL;
                  qword_140C1E1D8 = 0LL;
                  PsReaperWorkItem = 0LL;
                  qword_140C1E218 = 0LL;
                  PspProcessRundownWorkItem = 0LL;
                  PspProcessRundownCacheWorkItem.Parameter = 0LL;
                  PspProcessRundownCacheWorkItem.List.Flink = 0LL;
                  PspBootAccessToken = (PVOID)(*((_QWORD *)PsIdleProcess + 151) & 0xFFFFFFFFFFFFFFF0uLL);
                  if ( (int)PspInitializeSystemPartitionPhase0() >= 0 )
                  {
                    v23 = PspSystemPartition;
                    if ( PspCreateProcess((__int64)PspSystemPartition + 112, 0x1FFFFFu, 0LL, 0LL, 0, 0, 0LL, 0LL, 0LL) >= 0 )
                    {
                      v24 = (void *)v23[14];
                      Object = 0LL;
                      v25 = ObReferenceObjectByHandle(v24, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
                      v26 = Object;
                      v23[13] = Object;
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
                        PsInitialSystemProcess[1].ActiveProcessors.Bitmap[2] = (unsigned __int64)ExAllocatePoolWithTag(
                                                                                                   NonPagedPoolNx,
                                                                                                   0x10uLL,
                                                                                                   0x61506553u);
                        v27 = (_OWORD *)PsInitialSystemProcess[1].ActiveProcessors.Bitmap[2];
                        if ( v27 )
                        {
                          *v27 = 0LL;
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
LABEL_39:
                              PsVmProcessorHostTransitionEvent = 0LL;
                              return 1;
                            }
                            PspIumWorkItem.Parameter = 0LL;
                            PspIumWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PspIumWorker;
                            PspIumWorkItem.List.Flink = 0LL;
                            PspIumFreeMapping = MmAllocateMappingAddress(0x1000uLL, 0x466D7356u);
                            if ( PspIumFreeMapping )
                            {
                              PspIumLogBuffer = MmAllocateIndependentPagesEx(0x2000uLL, -1, -1LL, 1uLL);
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
                              goto LABEL_39;
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
