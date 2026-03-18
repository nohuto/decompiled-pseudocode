/*
 * XREFs of PspInsertThread @ 0x14073F3AC
 * Callers:
 *     NtCreateUserProcess @ 0x1406B82E0 (NtCreateUserProcess.c)
 *     PspCreateThread @ 0x1407712B4 (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x1409B5840 (PspCreatePicoThread.c)
 * Callees:
 *     KeIsSubsetAffinityEx @ 0x1402031E0 (KeIsSubsetAffinityEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140231030 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ObfDereferenceObject @ 0x140231570 (ObfDereferenceObject.c)
 *     SepDeleteAccessState @ 0x140232250 (SepDeleteAccessState.c)
 *     ExReleaseResourceLite @ 0x14023D3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14023D660 (ExAcquireResourceSharedLite.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     KeReadyThread @ 0x1402BDD8C (KeReadyThread.c)
 *     KeStartThread @ 0x1402BE0A8 (KeStartThread.c)
 *     KeQueryMaximumGroupCount @ 0x1402BE5F0 (KeQueryMaximumGroupCount.c)
 *     KeRequestTerminationThread @ 0x1403098CC (KeRequestTerminationThread.c)
 *     KeSuspendThread @ 0x140309CE8 (KeSuspendThread.c)
 *     KeForceResumeThread @ 0x14030AAAC (KeForceResumeThread.c)
 *     ObReferenceObjectExWithTag @ 0x1403373E0 (ObReferenceObjectExWithTag.c)
 *     memset @ 0x140435400 (memset.c)
 *     KeRaiseUserException @ 0x140570F30 (KeRaiseUserException.c)
 *     PspChangeProcessExecutionState @ 0x1406A6C04 (PspChangeProcessExecutionState.c)
 *     EtwTraceThread @ 0x1406AD060 (EtwTraceThread.c)
 *     PspCallProcessNotifyRoutines @ 0x1406AF954 (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x1406AFDA0 (PspCallThreadNotifyRoutines.c)
 *     SeCreateAccessStateEx @ 0x1406C2F50 (SeCreateAccessStateEx.c)
 *     ObInsertObjectEx @ 0x140735ED0 (ObInsertObjectEx.c)
 *     SeReleaseSubjectContext @ 0x140738340 (SeReleaseSubjectContext.c)
 *     PspRecheckThreadOptionalXStateFeatures @ 0x14073FC68 (PspRecheckThreadOptionalXStateFeatures.c)
 *     PspCreateObjectHandle @ 0x14073FCC0 (PspCreateObjectHandle.c)
 *     EtwTraceProcess @ 0x14075540C (EtwTraceProcess.c)
 *     ObCloseHandle @ 0x14076BDA0 (ObCloseHandle.c)
 *     MmDeleteTeb @ 0x14076F0DC (MmDeleteTeb.c)
 *     PoEnergyContextStart @ 0x1407B15EC (PoEnergyContextStart.c)
 *     PspDeleteUserStack @ 0x1407E8654 (PspDeleteUserStack.c)
 *     KeUninitThread @ 0x1407EA0BC (KeUninitThread.c)
 *     PspAssignProcessToJobList @ 0x1409B0F60 (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x1409B1010 (PspCreateSecureThread.c)
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140AAF6B0 (ExAllocatePool2.c)
 */

__int64 __fastcall PspInsertThread(
        char *Object,
        PEPROCESS Process,
        __int64 a3,
        _DWORD *a4,
        int a5,
        _BYTE *a6,
        __int64 a7,
        __int64 a8,
        PACCESS_STATE AccessState,
        PVOID *a10,
        _OWORD *a11)
{
  __int64 v13; // rdx
  unsigned int v14; // edi
  __int64 Pool2; // r12
  unsigned __int64 v16; // rbx
  _DWORD *v17; // rdx
  int SecureThread; // ecx
  unsigned int v19; // ecx
  struct _KPROCESS *v20; // rcx
  PEPROCESS *v21; // rdx
  signed int inserted; // r12d
  struct _KPROCESS *v23; // rcx
  volatile signed __int64 *v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // ebx
  PACCESS_STATE v28; // rbx
  __int64 result; // rax
  USHORT MaximumGroupCount; // ax
  USHORT v31; // ax
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdx
  KPROCESSOR_MODE v35; // dl
  unsigned int v36; // [rsp+44h] [rbp-94h]
  char v37; // [rsp+44h] [rbp-94h]
  unsigned int *v38; // [rsp+48h] [rbp-90h]
  _QWORD *v39; // [rsp+50h] [rbp-88h]
  __int64 v40; // [rsp+58h] [rbp-80h]
  _KPROCESS *v41; // [rsp+68h] [rbp-70h]

  v13 = a7;
  v14 = 0;
  v41 = KeGetCurrentThread()->ApcState.Process;
  v40 = *((_QWORD *)Object + 30);
  v38 = 0LL;
  Pool2 = 0LL;
  v16 = 0LL;
  if ( (*a4 & 0x20) == 0 )
  {
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1], 0LL);
    v13 = a7;
  }
  if ( !v13 )
  {
    v39 = 0LL;
    goto LABEL_6;
  }
  v39 = *(_QWORD **)(v13 + 24);
  if ( (*(_DWORD *)(v13 + 4) & 0x1000) != 0 )
  {
    MaximumGroupCount = KeQueryMaximumGroupCount();
    Pool2 = ExAllocatePool2(64LL, 8LL * MaximumGroupCount + 8, 538997584LL);
    if ( !Pool2 )
    {
      v36 = -1073741670;
      goto LABEL_89;
    }
    v31 = KeQueryMaximumGroupCount();
    *(_WORD *)Pool2 = 1;
    *(_WORD *)(Pool2 + 2) = v31;
    *(_DWORD *)(Pool2 + 4) = 0;
    memset((void *)(Pool2 + 8), 0, 8LL * v31);
    v13 = a7;
    v32 = *(_QWORD *)(a7 + 320);
    v33 = *(unsigned __int16 *)(a7 + 328);
    if ( *(_WORD *)Pool2 <= (unsigned __int16)v33 )
    {
      if ( *(_WORD *)(Pool2 + 2) <= (unsigned __int16)v33 )
      {
LABEL_72:
        if ( Process->PrimaryGroup != *(_WORD *)(a7 + 328) )
          _interlockedbittestandset((volatile signed __int32 *)&Process->632, 0xCu);
        goto LABEL_5;
      }
      *(_WORD *)Pool2 = v33 + 1;
    }
    *(_QWORD *)(Pool2 + 8 * v33 + 8) |= v32;
    goto LABEL_72;
  }
LABEL_5:
  v38 = (unsigned int *)((v13 + 252) & -(__int64)((*(_DWORD *)(v13 + 4) & 0x4000) != 0));
LABEL_6:
  v16 = Process[1].Affinity.StaticBitmap[16];
  if ( v16 )
  {
    if ( (*((_DWORD *)Object + 29) & 0x400) == 0 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v16 + 56), 1u);
      v14 = 1;
      if ( Pool2 )
      {
        if ( (*(_DWORD *)(v16 + 1040) & 0x10) != 0 && !(unsigned int)KeIsSubsetAffinityEx(Pool2, v16 + 712) )
          v14 = 5;
      }
    }
  }
  if ( v14 >= 4 || (HIDWORD(Process[1].DirectoryTableBase) & 0x4000008) != 0x4000000 )
  {
    v17 = a4;
LABEL_106:
    SecureThread = -1073741823;
    goto LABEL_11;
  }
  v17 = a4;
  if ( (Process[1].DirectoryTableBase & 0x4000000000000000LL) != 0
    && (*((_DWORD *)Object + 29) & 0x400) == 0
    && (*(_BYTE *)a4 & 2) == 0 )
  {
    goto LABEL_106;
  }
  SecureThread = 0;
LABEL_11:
  v36 = SecureThread;
  if ( SecureThread >= 0 )
  {
    if ( (Process->SecureState.SecureHandle & 1) != 0 && (*v17 & 0x400) != 0 )
    {
      SecureThread = PspCreateSecureThread(Object);
      v36 = SecureThread;
    }
    if ( SecureThread >= 0 )
    {
      KeStartThread((__int64)Object, (unsigned __int16 *)Pool2, v38);
      if ( (v14 & 1) != 0 )
      {
        ExReleaseResourceLite((PERESOURCE)(v16 + 56));
        v14 &= ~1u;
      }
      if ( (Process[1].DirectoryTableBase & 0x4000000000000000LL) != 0 && (*a4 & 2) != 0 )
        *((_DWORD *)Object + 345) |= 0x40u;
      if ( Pool2 )
        ExFreePoolWithTag((PVOID)Pool2, 0);
      v19 = (((HIDWORD(Process[1].DirectoryTableBase) >> 27) & 7) << 9) | *((_DWORD *)Object + 344) & 0xFFFFF1FF;
      *((_DWORD *)Object + 344) = v19;
      *((_DWORD *)Object + 344) = v19 ^ (LODWORD(Process[1].DirectoryTableBase) ^ v19) & 0x7000;
      if ( ++LODWORD(Process[1].ActiveProcessors.StaticBitmap[8]) > LODWORD(Process[1].CpuPartitionList.Flink) )
        LODWORD(Process[1].CpuPartitionList.Flink) = Process[1].ActiveProcessors.StaticBitmap[8];
      if ( LODWORD(Process[1].ActiveProcessors.StaticBitmap[8]) == 1 )
      {
        v14 |= 2u;
      }
      else if ( LODWORD(Process[1].ActiveProcessors.StaticBitmap[8]) == 2
             && (Process[1].DirectoryTableBase & 0x8000) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFu);
      }
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].CpuPartitionList.Blink, 0LL);
      v20 = (struct _KPROCESS *)(Object + 1336);
      v21 = (PEPROCESS *)Process[1].ActiveProcessors.StaticBitmap[7];
      if ( *v21 != (PEPROCESS)&Process[1].ActiveProcessors.StaticBitmap[6] )
        __fastfail(3u);
      *(_QWORD *)&v20->Header.Lock = (char *)Process + 1504;
      *((_QWORD *)Object + 168) = v21;
      *v21 = v20;
      Process[1].ActiveProcessors.StaticBitmap[7] = (unsigned __int64)v20;
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&Process[1].CpuPartitionList.Blink,
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].CpuPartitionList.Blink);
      KeAbPostRelease((ULONG_PTR)&Process[1].CpuPartitionList.Blink);
      if ( Process->InstrumentationCallback )
        _interlockedbittestandset((volatile signed __int32 *)Object, 0x19u);
      if ( *(_QWORD *)&Process[2].IdealProcessor[14] )
        _interlockedbittestandset((volatile signed __int32 *)Object, 0x1Du);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Header.Lock);
      KeAbPostRelease((ULONG_PTR)&Process[1]);
      if ( (*a4 & 0x40) != 0 )
        PspChangeProcessExecutionState(Process);
      ObReferenceObjectExWithTag((ULONG_PTR)Object, 2);
      *((_DWORD *)Object + 363) = 1;
      if ( (*a4 & 1) != 0 )
      {
        KeSuspendThread((__int64)Object);
        if ( (*((_DWORD *)Object + 344) & 1) != 0 )
          KeForceResumeThread((__int64)Object);
      }
      inserted = PspRecheckThreadOptionalXStateFeatures(Process, Object);
      v37 = 0;
      if ( !BYTE4(AccessState[2].SecurityDescriptor) || (*a4 & 0x10) != 0 )
      {
        v23 = Process;
        v37 = 1;
      }
      else
      {
        v23 = v41;
      }
      if ( inserted < 0
        || (inserted = SeCreateAccessStateEx(
                         0LL,
                         v23,
                         AccessState,
                         &AccessState[1].OperationID,
                         a5,
                         (_DWORD *)PsThreadType + 19),
            inserted < 0) )
      {
        ObfDereferenceObject(Object);
      }
      else
      {
        inserted = ObInsertObjectEx(Object, AccessState, a5, 0, v37, 0LL, 0LL);
        if ( inserted >= 0 )
        {
          ObfDereferenceObject(Object);
          if ( v39 )
            *v39 = v40;
          if ( a11 )
            *a11 = *(_OWORD *)(Object + 1224);
        }
        if ( inserted < 0 )
        {
          SepDeleteAccessState((__int64)AccessState);
          SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
        }
      }
      v24 = (volatile signed __int64 *)(Object + 1360);
      if ( inserted < 0 )
      {
        if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v24);
          v24 = (volatile signed __int64 *)(Object + 1360);
        }
        KeAbPostRelease((ULONG_PTR)v24);
        if ( (*a4 & 1) != 0 )
          KeForceResumeThread((__int64)Object);
        if ( a6 && *a6 )
          PspDeleteUserStack(Process, v25, a3, a6);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)Object + 344, 2u);
        if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v24);
          v24 = (volatile signed __int64 *)(Object + 1360);
        }
        KeAbPostRelease((ULONG_PTR)v24);
      }
      v27 = 0;
      if ( (v14 & 2) != 0 )
      {
        if ( (PerfGlobalGroupMask & 1) != 0 )
          EtwTraceProcess((_DWORD)Process);
        if ( Process[2].Affinity.StaticBitmap[4] )
          PoEnergyContextStart((ULONG_PTR)Process);
        if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) == 0 || *(_QWORD *)&Process[2].Affinity.Count )
          v27 = PspCallProcessNotifyRoutines((struct _EX_RUNDOWN_REF *)Process, a7, 1);
      }
      if ( (PerfGlobalGroupMask & 2) != 0 )
        EtwTraceThread((__int64)Object, a3, 1);
      if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) == 0 || *(_QWORD *)&Process[2].Affinity.Count )
        PspCallThreadNotifyRoutines(Object, 1u, 0);
      if ( inserted < 0 )
        goto LABEL_66;
      if ( v27 < 0 )
      {
        inserted = v27;
        v28 = AccessState;
      }
      else
      {
        v28 = AccessState;
        inserted = PspCreateObjectHandle(Object, AccessState, PsThreadType);
      }
      SepDeleteAccessState((__int64)v28);
      SeReleaseSubjectContext(&v28->SubjectSecurityContext);
      if ( inserted >= 0 )
      {
        if ( a7 )
        {
          v25 = *(_QWORD *)(a7 + 376);
          if ( v25 )
            inserted = PspAssignProcessToJobList(Process, v25, *(unsigned int *)(a7 + 388));
        }
        if ( inserted >= 0 )
        {
          *a10 = v28[2].AuxData;
LABEL_66:
          KeReadyThread((__int64)Object, v25, v26);
          return (unsigned int)inserted;
        }
        if ( ((__int64)v28[2].SecurityDescriptor & 0x200) != 0
          || (v35 = 1, (HIDWORD(v41[2].Header.WaitListHead.Flink) & 0x1000) != 0) )
        {
          v35 = 0;
        }
        ObCloseHandle(v28[2].AuxData, v35);
        if ( a6 && (*a6 & 1) != 0 )
          KeRaiseUserException(inserted);
      }
      if ( !_interlockedbittestandset((volatile signed __int32 *)Object + 344, 0) )
        v14 |= 8u;
      if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
      {
        if ( (*a4 & 1) != 0 )
          KeForceResumeThread((__int64)Object);
      }
      else
      {
        if ( v14 >= 8 )
          *((_DWORD *)Object + 358) = inserted;
        KeRequestTerminationThread((__int64)Object, v25, v26);
      }
      goto LABEL_66;
    }
  }
LABEL_89:
  if ( (v14 & 1) != 0 )
    ExReleaseResourceLite((PERESOURCE)(v16 + 56));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&Process[1].Header.Lock);
  KeAbPostRelease((ULONG_PTR)&Process[1]);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)Object + 170, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)Object + 170);
  KeAbPostRelease((ULONG_PTR)(Object + 1360));
  KeUninitThread(Object);
  if ( a6 )
  {
    if ( v40 )
      MmDeleteTeb(Process, v40);
    if ( *a6 )
      PspDeleteUserStack(Process, v34, a3, a6);
  }
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  result = v36;
  if ( (Process[1].DirectoryTableBase & 0x4000000800000000LL) != 0 )
    return 3221225738LL;
  return result;
}
