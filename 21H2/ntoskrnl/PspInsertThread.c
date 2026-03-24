/*
 * XREFs of PspInsertThread @ 0x140649028
 * Callers:
 *     NtCreateUserProcess @ 0x14060A1D0 (NtCreateUserProcess.c)
 *     PspCreateThread @ 0x140648C4C (PspCreateThread.c)
 *     PspCreatePicoThread @ 0x14090BF50 (PspCreatePicoThread.c)
 * Callees:
 *     KeReadyThread @ 0x140277A14 (KeReadyThread.c)
 *     KeStartThread @ 0x140277A6C (KeStartThread.c)
 *     KeForceResumeThread @ 0x14027980C (KeForceResumeThread.c)
 *     KeSuspendThread @ 0x14027A260 (KeSuspendThread.c)
 *     SepDeleteAccessState @ 0x14027C660 (SepDeleteAccessState.c)
 *     ObReferenceObjectExWithTag @ 0x14029E140 (ObReferenceObjectExWithTag.c)
 *     HalPutDmaAdapter @ 0x1402C1740 (HalPutDmaAdapter.c)
 *     KeRequestTerminationThread @ 0x1402EA7C8 (KeRequestTerminationThread.c)
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     MmDeleteKernelStack @ 0x14032AB70 (MmDeleteKernelStack.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseResourceLite @ 0x14034B3F0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14034BF60 (ExAcquireResourceSharedLite.c)
 *     KeRaiseUserException @ 0x140515F20 (KeRaiseUserException.c)
 *     EtwTraceProcess @ 0x14060330C (EtwTraceProcess.c)
 *     PspChangeProcessExecutionState @ 0x140605D50 (PspChangeProcessExecutionState.c)
 *     ObCloseHandle @ 0x14061AB80 (ObCloseHandle.c)
 *     PspCallProcessNotifyRoutines @ 0x14061AEAC (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x14061B3C0 (PspCallThreadNotifyRoutines.c)
 *     EtwTraceThread @ 0x14062955C (EtwTraceThread.c)
 *     PspCreateObjectHandle @ 0x14064A7C4 (PspCreateObjectHandle.c)
 *     SeReleaseSubjectContext @ 0x1406568F0 (SeReleaseSubjectContext.c)
 *     SeCreateAccessStateEx @ 0x1406618D0 (SeCreateAccessStateEx.c)
 *     PoEnergyContextStart @ 0x140697F38 (PoEnergyContextStart.c)
 *     PspDeleteUserStack @ 0x1406BECD8 (PspDeleteUserStack.c)
 *     MmDeleteTeb @ 0x1406E93D0 (MmDeleteTeb.c)
 *     ObInsertObjectEx @ 0x140704A20 (ObInsertObjectEx.c)
 *     KeSetUmsThreadKernelLock @ 0x1408BD618 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x1408BD6E8 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x1408BD75C (KeUpdateUmsThreadState.c)
 *     PspAssignProcessToJobList @ 0x140909EEC (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x140909F9C (PspCreateSecureThread.c)
 */

__int64 __fastcall PspInsertThread(
        ULONG_PTR BugCheckParameter2,
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
  unsigned int v14; // edi
  unsigned int *v15; // r13
  __int64 v16; // r15
  unsigned __int64 v17; // rbx
  __int64 v18; // rdx
  int SecureThread; // ecx
  __int64 v20; // rdx
  unsigned int DirectoryTableBase_high; // edx
  unsigned int v23; // ecx
  struct _KPROCESS *v24; // rcx
  PEPROCESS *v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // r8
  _DWORD *v28; // r9
  __int64 v29; // rdx
  __int64 v30; // r8
  _DWORD *v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  _DWORD *v34; // r9
  int v35; // r12d
  int v36; // edx
  signed int inserted; // r15d
  volatile signed __int64 *v38; // r12
  _BYTE *v39; // rbx
  __int64 v40; // rdx
  __int64 v41; // r8
  _DWORD *v42; // r9
  int v43; // r12d
  __int64 v44; // rdx
  __int64 v45; // r8
  _DWORD *v46; // r9
  __int64 v47; // rdx
  KPROCESSOR_MODE v48; // dl
  _QWORD *v49; // [rsp+48h] [rbp-70h]
  __int64 v50; // [rsp+50h] [rbp-68h]
  _KPROCESS *v51; // [rsp+60h] [rbp-58h]

  v14 = 0;
  v51 = KeGetCurrentThread()->ApcState.Process;
  v50 = *(_QWORD *)(BugCheckParameter2 + 240);
  v15 = 0LL;
  v16 = 0LL;
  if ( a7 )
  {
    v49 = *(_QWORD **)(a7 + 24);
    v15 = (unsigned int *)((a7 + 252) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x4000) != 0));
    v16 = (a7 + 320) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x1000) != 0);
  }
  else
  {
    v49 = 0LL;
  }
  if ( (*a4 & 0x20) == 0 )
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1], 0LL);
  v17 = Process[1].Affinity.Bitmap[16];
  if ( v17 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) == 0 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v17 + 56), 1u);
      v14 = 1;
      if ( v16 )
      {
        if ( (*(_DWORD *)(v17 + 848) & 0x10) != 0 )
        {
          v18 = *(_QWORD *)(v17 + 8LL * *(unsigned __int16 *)(v16 + 8) + 624);
          if ( !v18 || (v18 & *(_QWORD *)v16) != *(_QWORD *)v16 )
            v14 = 5;
        }
      }
    }
  }
  if ( v14 < 4
    && (HIDWORD(Process[1].DirectoryTableBase) & 0x4000008) == 0x4000000
    && ((Process[1].DirectoryTableBase & 0x4000000000000000LL) == 0
     || (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) != 0
     || (*a4 & 2) != 0) )
  {
    SecureThread = 0;
  }
  else
  {
    SecureThread = -1073741823;
  }
  if ( SecureThread >= 0 && (Process->SecureState.SecureHandle & 1) != 0 )
    SecureThread = PspCreateSecureThread((PVOID)BugCheckParameter2);
  if ( SecureThread < 0 )
  {
    if ( (v14 & 1) != 0 )
      ExReleaseResourceLite((PERESOURCE)(v17 + 56));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(&Process[1]);
    KeAbPostRelease((ULONG_PTR)&Process[1]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 1280), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2 + 1280);
    KeAbPostRelease(BugCheckParameter2 + 1280);
    MmDeleteKernelStack(*(_QWORD *)(BugCheckParameter2 + 56), (struct _LIST_ENTRY *)2);
    *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
    if ( a6 )
    {
      if ( v50 )
        MmDeleteTeb(Process, v50);
      if ( *a6 )
        PspDeleteUserStack(Process, v20, a3, a6);
    }
    return (Process[1].DirectoryTableBase & 0x4000000800000000LL) != 0 ? -1073741558 : -1073741823;
  }
  KeStartThread(BugCheckParameter2, (__int128 *)v16, v15);
  if ( (v14 & 1) != 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(v17 + 56));
    v14 &= ~1u;
  }
  DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  if ( (DirectoryTableBase_high & 0x40000000) != 0 && (*a4 & 2) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 1300) |= 0x40u;
    DirectoryTableBase_high = HIDWORD(Process[1].DirectoryTableBase);
  }
  v23 = (((DirectoryTableBase_high >> 27) & 7) << 9) | *(_DWORD *)(BugCheckParameter2 + 1296) & 0xFFFFF1FF;
  *(_DWORD *)(BugCheckParameter2 + 1296) = v23;
  *(_DWORD *)(BugCheckParameter2 + 1296) = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)LODWORD(Process[1].DirectoryTableBase)) & 0x7000;
  if ( ++LODWORD(Process[1].ActiveProcessors.Bitmap[8]) > LODWORD(Process[1].EndPadding[5]) )
    LODWORD(Process[1].EndPadding[5]) = Process[1].ActiveProcessors.Bitmap[8];
  if ( LODWORD(Process[1].ActiveProcessors.Bitmap[8]) == 1 )
  {
    v14 |= 2u;
  }
  else if ( LODWORD(Process[1].ActiveProcessors.Bitmap[8]) == 2 && (Process[1].DirectoryTableBase & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFu);
  }
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&Process[1].EndPadding[6], 0LL);
  v24 = (struct _KPROCESS *)(BugCheckParameter2 + 1256);
  v25 = (PEPROCESS *)Process[1].ActiveProcessors.Bitmap[7];
  if ( *v25 != (PEPROCESS)&Process[1].ActiveProcessors.Bitmap[6] )
    __fastfail(3u);
  *(_QWORD *)&v24->Header.Lock = (char *)Process + 1504;
  *(_QWORD *)(BugCheckParameter2 + 1264) = v25;
  *v25 = v24;
  Process[1].ActiveProcessors.Bitmap[7] = (unsigned __int64)v24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].EndPadding[6], 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1].EndPadding[6]);
  KeAbPostRelease((ULONG_PTR)&Process[1].EndPadding[6]);
  if ( Process->InstrumentationCallback )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x19u);
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x2000000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x1Du);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Header.Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&Process[1]);
  KeAbPostRelease((ULONG_PTR)&Process[1]);
  if ( (*a4 & 0x40) != 0 )
    PspChangeProcessExecutionState(Process, v26, v27, v28);
  ObReferenceObjectExWithTag(BugCheckParameter2, 2);
  *(_DWORD *)(BugCheckParameter2 + 1372) = 1;
  if ( (*a4 & 1) != 0 )
  {
    KeSuspendThread(BugCheckParameter2, v29, v30, v31);
    if ( (*(_DWORD *)(BugCheckParameter2 + 1296) & 1) != 0 )
      KeForceResumeThread(BugCheckParameter2, v32, v33, v34);
  }
  v35 = 0;
  if ( !BYTE4(AccessState[2].SecurityDescriptor) || (*a4 & 0x10) != 0 )
  {
    v36 = (int)Process;
    v35 = 1;
  }
  else
  {
    v36 = (int)v51;
  }
  inserted = SeCreateAccessStateEx(0, v36, (_DWORD)AccessState, (int)AccessState + 160, a5, (__int64)PsThreadType + 76);
  if ( inserted < 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)BugCheckParameter2);
  }
  else
  {
    inserted = ObInsertObjectEx((PADAPTER_OBJECT)BugCheckParameter2, AccessState, v35, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)BugCheckParameter2);
      if ( v49 )
        *v49 = v50;
      if ( a11 )
        *a11 = *(_OWORD *)(BugCheckParameter2 + 1144);
    }
    if ( inserted < 0 )
    {
      SepDeleteAccessState((__int64)AccessState);
      SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
    }
  }
  v38 = (volatile signed __int64 *)(BugCheckParameter2 + 1280);
  if ( inserted < 0 )
  {
    if ( (_InterlockedExchangeAdd64(v38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2 + 1280);
    KeAbPostRelease(BugCheckParameter2 + 1280);
    if ( (*a4 & 1) != 0 )
      KeForceResumeThread(BugCheckParameter2, v40, v41, v42);
    v39 = a6;
    if ( a6 && *a6 )
      PspDeleteUserStack(Process, v40, a3, a6);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 1296), 2u);
    if ( (_InterlockedExchangeAdd64(v38, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2 + 1280);
    KeAbPostRelease(BugCheckParameter2 + 1280);
    v39 = a6;
  }
  v43 = 0;
  if ( (v14 & 2) != 0 )
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess(Process, 769);
    if ( Process[2].Affinity.Bitmap[4] )
      PoEnergyContextStart((ULONG_PTR)Process);
    if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) == 0 || *(_QWORD *)&Process[2].Affinity.Count )
      v43 = PspCallProcessNotifyRoutines((struct _EX_RUNDOWN_REF *)Process, a7, 1);
  }
  if ( (PerfGlobalGroupMask & 2) != 0 )
    EtwTraceThread(BugCheckParameter2, a3, 1);
  if ( (HIDWORD(Process[2].Header.WaitListHead.Flink) & 1) == 0 || *(_QWORD *)&Process[2].Affinity.Count )
    PspCallThreadNotifyRoutines((_QWORD *)BugCheckParameter2, 1u, 0);
  if ( inserted >= 0 )
  {
    if ( v43 < 0 )
      inserted = v43;
    else
      inserted = PspCreateObjectHandle(BugCheckParameter2, AccessState, PsThreadType);
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
    if ( inserted >= 0 )
    {
      if ( a7 )
      {
        v47 = *(_QWORD *)(a7 + 400);
        if ( v47 )
          inserted = PspAssignProcessToJobList(Process, v47, *(unsigned int *)(a7 + 412));
      }
      if ( inserted >= 0 )
      {
        *a10 = AccessState[2].AuxData;
        goto LABEL_125;
      }
      v48 = ((__int64)AccessState[2].SecurityDescriptor & 0x200) == 0
         && (HIDWORD(v51[2].Header.WaitListHead.Flink) & 0x1000) == 0;
      ObCloseHandle(AccessState[2].AuxData, v48);
      if ( v39 && (*v39 & 1) != 0 )
        KeRaiseUserException(inserted);
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 1296), 0) )
      v14 |= 8u;
    if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) != 0 )
    {
      if ( (*a4 & 1) != 0 )
        KeForceResumeThread(BugCheckParameter2, v44, v45, v46);
    }
    else
    {
      if ( v14 >= 8 )
        *(_DWORD *)(BugCheckParameter2 + 1352) = inserted;
      KeRequestTerminationThread(BugCheckParameter2, v44, v45, v46);
    }
  }
LABEL_125:
  if ( (*(_BYTE *)(BugCheckParameter2 + 3) & 0x40) != 0 && inserted < 0 )
  {
    KeSetUmsThreadKernelLock(**(_QWORD **)(BugCheckParameter2 + 496), 0LL);
    KeUpdateUmsThreadState(**(_QWORD **)(BugCheckParameter2 + 496), 2LL, 0LL);
    HalPutDmaAdapter(*(PADAPTER_OBJECT *)(*(_QWORD *)(BugCheckParameter2 + 496) + 16LL));
    KeUnInitializeUmsThread(BugCheckParameter2);
  }
  KeReadyThread(BugCheckParameter2);
  return (unsigned int)inserted;
}
