/*
 * XREFs of CmFcManagerStartRuntimePhase @ 0x140B53284
 * Callers:
 *     CmFcInitSystem2 @ 0x140B51DC0 (CmFcInitSystem2.c)
 * Callees:
 *     ExAllocateTimer @ 0x140203BE0 (ExAllocateTimer.c)
 *     SeConvertStringSecurityDescriptorToSecurityDescriptor @ 0x1402C0CD0 (SeConvertStringSecurityDescriptorToSecurityDescriptor.c)
 *     RtlpFcBufferManagerDereferenceBuffers @ 0x1402F03BC (RtlpFcBufferManagerDereferenceBuffers.c)
 *     RtlpFcBufferManagerReferenceBuffers @ 0x1402F0450 (RtlpFcBufferManagerReferenceBuffers.c)
 *     RtlInitUnicodeString @ 0x14030EBB0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14030F120 (KeLeaveCriticalRegionThread.c)
 *     RtlpFcWriteHighLowHigh @ 0x140388CA0 (RtlpFcWriteHighLowHigh.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140415ED0 (ZwUpdateWnfStateData.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     CmSiRWLockReleaseExclusive @ 0x1406A3848 (CmSiRWLockReleaseExclusive.c)
 *     CmSiRWLockAcquireExclusive @ 0x1406A419C (CmSiRWLockAcquireExclusive.c)
 *     CmFcpCopySectionState @ 0x140777D7C (CmFcpCopySectionState.c)
 *     RtlIsStateSeparationEnabled @ 0x140792EC0 (RtlIsStateSeparationEnabled.c)
 *     CmFcpSwapSectionState @ 0x14079C17C (CmFcpSwapSectionState.c)
 *     CmFcpInitializeSectionState @ 0x14079C4B4 (CmFcpInitializeSectionState.c)
 *     RtlpFcSectionTypeToBufferType @ 0x14079C57C (RtlpFcSectionTypeToBufferType.c)
 *     RtlpFcInitializeDelayedUsageReportBuffer @ 0x14079C7B0 (RtlpFcInitializeDelayedUsageReportBuffer.c)
 *     RtlpFcBufferManagerUpdateBuffers @ 0x14081811C (RtlpFcBufferManagerUpdateBuffers.c)
 *     CmFcpManagerCreateSectionFromBuffer @ 0x1408181E8 (CmFcpManagerCreateSectionFromBuffer.c)
 *     CmFcpMapSection @ 0x1408182C4 (CmFcpMapSection.c)
 *     CmFcpCleanupSectionState @ 0x140818348 (CmFcpCleanupSectionState.c)
 *     CmFcpUnmapSection @ 0x140818368 (CmFcpUnmapSection.c)
 *     RtlGetSwapReferenceIndex @ 0x140818388 (RtlGetSwapReferenceIndex.c)
 *     RtlUpdateSwapReference @ 0x140818560 (RtlUpdateSwapReference.c)
 *     CmRegisterMachineHiveLoadedNotification @ 0x1408185D0 (CmRegisterMachineHiveLoadedNotification.c)
 *     ExAllocatePool2 @ 0x140AAB5A0 (ExAllocatePool2.c)
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
  __int64 v9; // rdi
  void *v10; // rcx
  void *v11; // rcx
  unsigned int v12; // r14d
  unsigned int v13; // eax
  __int64 v14; // r10
  __int64 v15; // r10
  __int64 v16; // r11
  unsigned int i; // r14d
  __int64 v18; // r12
  _OWORD *v19; // rbx
  _OWORD *Pool2; // rax
  __int64 v21; // r15
  bool IsStateSeparationEnabled; // al
  const WCHAR *v23; // rdx
  __int64 *v24; // rdi
  __int64 v25; // r14
  __int64 *v26; // rdi
  __int64 v28; // rcx
  __int128 v29; // xmm1
  __int64 v30; // [rsp+48h] [rbp-C0h] BYREF
  _QWORD DestinationString[3]; // [rsp+50h] [rbp-B8h] BYREF
  _QWORD v32[10]; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v33[3]; // [rsp+B8h] [rbp-50h] BYREF
  _BYTE v34[24]; // [rsp+D0h] [rbp-38h] BYREF
  __int64 v35[4]; // [rsp+E8h] [rbp-20h] BYREF

  v0 = v33;
  v30 = 0LL;
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
  byte_140C14052 = 1;
  SectionFromBuffer = SeConvertStringSecurityDescriptorToSecurityDescriptor(
                        (__int64)L"O:SYG:SYD:(A;;GR;;;SY)(A;;GR;;;BA)(A;;GR;;;IU)(A;;GR;;;AU)(A;;GR;;;AC)(A;;GR;;;S-1-5-32"
                                  "-1045063015-423899465-3012769174-65638258-1865874412-2349348127-763856749-1075684855)("
                                  "A;;GR;;;S-1-15-3-1024-1045063015-423899465-3012769174-65638258-1865874412-2349348127-7"
                                  "63856749-1075684855)(A;;GR;;;S-1-5-80-2970612574-78537857-698502321-558674196-14516445"
                                  "82)(A;;GR;;;S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-39683"
                                  "01570-1997628692-1435953622)(A;;GR;;;S-1-15-3-1024-1065365936-1281604716-3511738428-16"
                                  "54721687-432734479-3232135806-4053264122-3456934681)(A;;GR;;;S-1-15-3-1024-3153509613-"
                                  "960666767-3724611135-2725662640-12138253-543910227-1950414635-4190290187)",
                        1,
                        (__int64)CmFcSystemManager,
                        0LL);
  if ( SectionFromBuffer >= 0 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    CmSiRWLockAcquireExclusive(&stru_140C13F10);
    RtlpFcBufferManagerReferenceBuffers((__int64)qword_140C13F70, (__int64)&v30, DestinationString);
    v6 = v30;
    v7 = v33;
    v8 = 3LL;
    do
    {
      *v7 = v6;
      v7 += 3;
      --v8;
    }
    while ( v8 );
    v9 = DestinationString[0];
    v10 = *(void **)(DestinationString[0] + 8LL);
    if ( v10 )
    {
      SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(
                            v10,
                            *(_QWORD *)(DestinationString[0] + 16LL),
                            v6,
                            CmFcSystemManager[0],
                            (__int64)v33);
      if ( SectionFromBuffer < 0 )
        goto LABEL_27;
      CmFcpCopySectionState((__int64)v34, (__int64)v33);
      v6 = v30;
    }
    v11 = *(void **)(v9 + 56);
    if ( !v11
      || (SectionFromBuffer = CmFcpManagerCreateSectionFromBuffer(
                                v11,
                                *(_QWORD *)(v9 + 64),
                                v6,
                                CmFcSystemManager[0],
                                (__int64)v35),
          SectionFromBuffer >= 0) )
    {
      RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C13F70, v9);
      v9 = 0LL;
      v12 = 0;
      while ( 1 )
      {
        v13 = RtlpFcSectionTypeToBufferType(v12);
        SectionFromBuffer = CmFcpMapSection(&v33[3 * v12], &v32[3 * v13]);
        if ( SectionFromBuffer < 0 )
          goto LABEL_29;
        if ( ++v12 >= 3 )
        {
          CmSiRWLockAcquireExclusive(&stru_140C13F08);
          v14 = 0LL;
          do
          {
            CmFcpSwapSectionState((__int64 *)((char *)&CmFcSystemManager[5] + v14), (_QWORD *)((char *)v33 + v14));
            v14 = v15 + 24;
          }
          while ( v16 != 1 );
          RtlpFcBufferManagerUpdateBuffers(qword_140C13F70, v30, (__int64)v32);
          memset(v32, 0, 0x48uLL);
          RtlpFcWriteHighLowHigh(MmWriteableSharedUserData + 1824, v30);
          CmSiRWLockReleaseExclusive((volatile signed __int64 *)&stru_140C13F08);
          SectionFromBuffer = ZwUpdateWnfStateData((__int64)&WNF_CMFC_FEATURE_CONFIGURATION_CHANGED, (__int64)&v30);
          if ( SectionFromBuffer >= 0 )
          {
            for ( i = 0; i < 2; ++i )
            {
              v18 = ((unsigned __int8)RtlGetSwapReferenceIndex(qword_140C14030) - 1) & 1;
              v19 = (_OWORD *)CmFcSystemManager[v18 + 43];
              Pool2 = (_OWORD *)ExAllocatePool2(64LL, 0x310uLL, 0x63466D43u);
              v21 = (__int64)Pool2;
              if ( !Pool2 )
                goto LABEL_38;
              if ( v19 )
              {
                v28 = 6LL;
                do
                {
                  *Pool2 = *v19;
                  Pool2[1] = v19[1];
                  Pool2[2] = v19[2];
                  Pool2[3] = v19[3];
                  Pool2[4] = v19[4];
                  Pool2[5] = v19[5];
                  Pool2[6] = v19[6];
                  Pool2 += 8;
                  v29 = v19[7];
                  v19 += 8;
                  *(Pool2 - 1) = v29;
                  --v28;
                }
                while ( v28 );
                *Pool2 = *v19;
              }
              else
              {
                RtlpFcInitializeDelayedUsageReportBuffer(Pool2);
              }
              CmFcSystemManager[v18 + 43] = v21;
              RtlUpdateSwapReference(qword_140C14030, v18);
            }
            qword_140C140E8 = ExAllocateTimer(
                                (__int64)CmFcpManagerRetryUsageNotificationsTimerRoutine,
                                (__int64)CmFcSystemManager,
                                8u);
            if ( !qword_140C140E8 )
            {
LABEL_38:
              SectionFromBuffer = -1073741670;
              goto LABEL_29;
            }
            IsStateSeparationEnabled = RtlIsStateSeparationEnabled();
            v23 = L"\\REGISTRY\\MACHINE\\OSDATA";
            if ( !IsStateSeparationEnabled )
              v23 = L"\\REGISTRY\\MACHINE\\SOFTWARE";
            RtlInitUnicodeString((PUNICODE_STRING)&DestinationString[1], v23);
            SectionFromBuffer = CmRegisterMachineHiveLoadedNotification(
                                  (__int64)CmFcpManagerSoftwareHiveReady,
                                  (__int64)CmFcSystemManager,
                                  (const UNICODE_STRING *)&DestinationString[1],
                                  &qword_140C14028);
            if ( SectionFromBuffer >= 0 )
            {
              SectionFromBuffer = 0;
              break;
            }
          }
          goto LABEL_29;
        }
      }
    }
LABEL_27:
    if ( v9 )
      RtlpFcBufferManagerDereferenceBuffers((__int64)qword_140C13F70, v9);
LABEL_29:
    CmSiRWLockReleaseExclusive((volatile signed __int64 *)&stru_140C13F10);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  v24 = v32;
  v25 = 3LL;
  do
  {
    CmFcpUnmapSection((__int64)v24);
    v24 += 3;
    --v25;
  }
  while ( v25 );
  v26 = v33;
  do
  {
    CmFcpCleanupSectionState((__int64)v26);
    v26 += 3;
    --v1;
  }
  while ( v1 );
  return (unsigned int)SectionFromBuffer;
}
