/*
 * XREFs of CmFcManagerStartRuntimePhase @ 0x140A38784
 * Callers:
 *     CmFcInitSystem2 @ 0x140A38398 (CmFcInitSystem2.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402CBAC0 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x140345530 (RtlInitUnicodeString.c)
 *     ExAllocateTimer @ 0x140349420 (ExAllocateTimer.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x14039DF10 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1403A6268 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1403A664C (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcWriteHighLowHigh @ 0x1403CDD64 (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x1403CFD60 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x1403FD420 (ZwUpdateWnfStateData.c)
 *     memset @ 0x140413800 (memset.c)
 *     CmFcpCopySectionState @ 0x140684618 (CmFcpCopySectionState.c)
 *     RtlIsStateSeparationEnabled @ 0x14069AC30 (RtlIsStateSeparationEnabled.c)
 *     CmFcpInitializeSectionState @ 0x1406A6700 (CmFcpInitializeSectionState.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x140799CB0 (CmRegisterMachineHiveLoadedNotification.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x1407CA9B4 (RtlpFcBufferManagerUpdateBuffers.c)
 *     RtlUpdateSwapReference @ 0x1407CABDC (RtlUpdateSwapReference.c)
 *     CmFcpMapSection @ 0x1407D23CC (CmFcpMapSection.c)
 *     CmSiRWLockReleaseExclusive @ 0x1407D3444 (CmSiRWLockReleaseExclusive.c)
 *     CmFcpCleanupSectionState @ 0x1407D49E8 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x1407D4A08 (CmFcpUnmapSection.c)
 *     RtlGetSwapReferenceIndex @ 0x1407D5024 (RtlGetSwapReferenceIndex.c)
 *     CmpVolumeManagerLockContextListExclusive @ 0x1407D5378 (CmpVolumeManagerLockContextListExclusive.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x14087E6B4 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcpSwapSectionState @ 0x14087E9B4 (CmFcpSwapSectionState.c)
 *     RtlpFcInitializeDelayedUsageReportBuffer @ 0x14091A150 (RtlpFcInitializeDelayedUsageReportBuffer.c)
 *     RtlpFcSectionTypeToBufferType @ 0x14091A478 (RtlpFcSectionTypeToBufferType.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

__int64 CmFcManagerStartRuntimePhase()
{
  __int64 *v0; // rcx
  __int64 v1; // rsi
  __int64 v2; // rcx
  __int64 v3; // rdx
  int SectionFromBuffer; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rcx
  LARGE_INTEGER *v9; // rdi
  void *v10; // rcx
  void *QuadPart; // rcx
  unsigned int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned int i; // r14d
  __int64 v18; // r12
  _OWORD *v19; // rbx
  _OWORD *PoolWithTag; // rax
  __int64 v21; // r15
  __int64 v22; // rcx
  __int128 v23; // xmm1
  BOOLEAN IsStateSeparationEnabled; // al
  const WCHAR *v25; // rdx
  __int64 *v26; // rdi
  __int64 v27; // r14
  __int64 *v28; // rdi
  __int64 Buffer; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD DestinationString[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v32[10]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v33[3]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v34[24]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v35[4]; // [rsp+E8h] [rbp-20h] BYREF

  v0 = v33;
  Buffer = 0LL;
  *(_OWORD *)&DestinationString[1] = 0LL;
  v1 = 3LL;
  do
  {
    CmFcpInitializeSectionState((__int64)v0);
    v0 = (__int64 *)(v2 + 24);
  }
  while ( v3 != 1 );
  DestinationString[0] = 0LL;
  memset(v32, 0, 0x48uLL);
  byte_140C482D2 = 1;
  SectionFromBuffer = SeConvertStringSecurityDescriptorToSecurityDescriptor(
                        (__int64)L"O:SYG:SYD:(A;;GR;;;SY)(A;;GR;;;BA)(A;;GR;;;IU)(A;;GR;;;AU)(A;;GR;;;AC)(A;;GR;;;S-1-5-32"
                                  "-1045063015-423899465-3012769174-65638258-1865874412-2349348127-763856749-1075684855)("
                                  "A;;GR;;;S-1-15-3-1024-1045063015-423899465-3012769174-65638258-1865874412-2349348127-7"
                                  "63856749-1075684855)(A;;GR;;;S-1-5-80-2970612574-78537857-698502321-558674196-14516445"
                                  "82)(A;;GR;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-39683"
                                  "01570-1997628692-1435953622)",
                        1,
                        (__int64)CmFcSystemManager,
                        0LL);
  if ( SectionFromBuffer >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmpVolumeManagerLockContextListExclusive((ULONG_PTR)&stru_140C48190);
    RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C481F0, (__int64)&Buffer, DestinationString);
    v6 = Buffer;
    v7 = v33;
    v8 = 3LL;
    do
    {
      *v7 = v6;
      v7 += 3;
      --v8;
    }
    while ( v8 );
    v9 = (LARGE_INTEGER *)DestinationString[0];
    v10 = *(void **)(DestinationString[0] + 8LL);
    if ( v10 )
    {
      SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(
                            v10,
                            *(LARGE_INTEGER *)(DestinationString[0] + 16LL),
                            v6,
                            (void *)CmFcSystemManager[0],
                            (__int64)v33);
      if ( SectionFromBuffer < 0 )
        goto LABEL_30;
      CmFcpCopySectionState((__int64)v34, (__int64)v33);
      v6 = Buffer;
    }
    QuadPart = (void *)v9[7].QuadPart;
    if ( !QuadPart
      || (SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(
                                QuadPart,
                                v9[8],
                                v6,
                                (void *)CmFcSystemManager[0],
                                (__int64)v35),
          SectionFromBuffer >= 0) )
    {
      RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C481F0, (__int64)v9);
      v9 = 0LL;
      v12 = 0;
      while ( 1 )
      {
        v13 = RtlpFcSectionTypeToBufferType(v12);
        SectionFromBuffer = CmFcpMapSection(&v33[3 * v12], &v32[3 * v13]);
        if ( SectionFromBuffer < 0 )
          goto LABEL_33;
        if ( ++v12 >= 3 )
        {
          CmpVolumeManagerLockContextListExclusive((ULONG_PTR)&RunOnce);
          v14 = 0LL;
          do
          {
            CmFcpSwapSectionState((__int64 *)((char *)&CmFcSystemManager[5] + v14), (_QWORD *)((char *)v33 + v14));
            v14 = v15 + 24;
          }
          while ( v16 != 1 );
          RtlpFcBufferManagerUpdateBuffers(qword_140C481F0, Buffer, (__int64)v32);
          memset(v32, 0, 0x48uLL);
          RtlpFcWriteHighLowHigh(0xFFFFF78000000710uLL, Buffer);
          CmSiRWLockReleaseExclusive((volatile signed __int64 *)&RunOnce);
          SectionFromBuffer = ZwUpdateWnfStateData(
                                &WNF_CMFC_FEATURE_CONFIGURATION_CHANGED,
                                &Buffer,
                                8u,
                                &CmFcpWnfTypeId,
                                0LL,
                                0,
                                0);
          if ( SectionFromBuffer >= 0 )
          {
            for ( i = 0; i < 2; ++i )
            {
              v18 = ((unsigned __int8)RtlGetSwapReferenceIndex(qword_140C482B0) - 1) & 1;
              v19 = (_OWORD *)CmFcSystemManager[v18 + 43];
              PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x310uLL, 0x63466D43u);
              v21 = (__int64)PoolWithTag;
              if ( !PoolWithTag )
                goto LABEL_32;
              if ( v19 )
              {
                v22 = 6LL;
                do
                {
                  *PoolWithTag = *v19;
                  PoolWithTag[1] = v19[1];
                  PoolWithTag[2] = v19[2];
                  PoolWithTag[3] = v19[3];
                  PoolWithTag[4] = v19[4];
                  PoolWithTag[5] = v19[5];
                  PoolWithTag[6] = v19[6];
                  PoolWithTag += 8;
                  v23 = v19[7];
                  v19 += 8;
                  *(PoolWithTag - 1) = v23;
                  --v22;
                }
                while ( v22 );
                *PoolWithTag = *v19;
              }
              else
              {
                RtlpFcInitializeDelayedUsageReportBuffer(PoolWithTag);
              }
              CmFcSystemManager[v18 + 43] = v21;
              RtlUpdateSwapReference(qword_140C482B0, v18);
            }
            qword_140C48368 = ExAllocateTimer(
                                (__int64)CmFcpManagerRetryUsageNotificationsTimerRoutine,
                                (__int64)CmFcSystemManager,
                                8u);
            if ( !qword_140C48368 )
            {
LABEL_32:
              SectionFromBuffer = -1073741670;
              goto LABEL_33;
            }
            IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
            v25 = L"\\REGISTRY\\MACHINE\\OSDATA";
            if ( !IsStateSeparationEnabled )
              v25 = L"\\REGISTRY\\MACHINE\\SOFTWARE";
            RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v25);
            SectionFromBuffer = CmRegisterMachineHiveLoadedNotification(
                                  (wchar_t *)CmFcpManagerSoftwareHiveReady,
                                  (wchar_t *)CmFcSystemManager,
                                  (const UNICODE_STRING *)&DestinationString[1],
                                  &qword_140C482A8);
            if ( SectionFromBuffer >= 0 )
            {
              SectionFromBuffer = 0;
              break;
            }
          }
          goto LABEL_33;
        }
      }
    }
LABEL_30:
    if ( v9 )
      RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C481F0, (__int64)v9);
LABEL_33:
    CmSiRWLockReleaseExclusive((volatile signed __int64 *)&stru_140C48190);
    KeLeaveCriticalRegion();
  }
  v26 = v32;
  v27 = 3LL;
  do
  {
    CmFcpUnmapSection((__int64)v26);
    v26 += 3;
    --v27;
  }
  while ( v27 );
  v28 = v33;
  do
  {
    CmFcpCleanupSectionState((__int64)v28);
    v28 += 3;
    --v1;
  }
  while ( v1 );
  return (unsigned int)SectionFromBuffer;
}
