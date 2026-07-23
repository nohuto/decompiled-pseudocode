/*
 * XREFs of PspInsertThread @ 0x14063DE48
 * Callers:
 *     PspCreateThread @ 0x14063DA6C (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x140699C80 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x14090C0B0 (PspCreatePicoThread.c)
 * Callees:
 *     ObReferenceObjectExWithTag @ 0x14021B6A0 (ObReferenceObjectExWithTag.c)
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     KeReadyThread @ 0x1402659B4 (KeReadyThread.c)
 *     KeStartThread @ 0x140265A0C (KeStartThread.c)
 *     KeForceResumeThread @ 0x1402677AC (KeForceResumeThread.c)
 *     KeSuspendThread @ 0x140268200 (KeSuspendThread.c)
 *     SepDeleteAccessState @ 0x14026A600 (SepDeleteAccessState.c)
 *     KeRequestTerminationThread @ 0x14029BB18 (KeRequestTerminationThread.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     MmDeleteKernelStack @ 0x1403358C0 (MmDeleteKernelStack.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1403556E0 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x140356CB0 (ExAcquireResourceSharedLite.c)
 *     KeRaiseUserException @ 0x140516160 (KeRaiseUserException.c)
 *     PoEnergyContextStart @ 0x1405F6C30 (PoEnergyContextStart.c)
 *     PspDeleteUserStack @ 0x14061DDC8 (PspDeleteUserStack.c)
 *     PspCreateObjectHandle @ 0x14063F5E4 (PspCreateObjectHandle.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     SeCreateAccessStateEx @ 0x1406566F0 (SeCreateAccessStateEx.c)
 *     ObCloseHandle @ 0x1406847E0 (ObCloseHandle.c)
 *     PspCallProcessNotifyRoutines @ 0x140684B0C (PspCallProcessNotifyRoutines.c)
 *     PspCallThreadNotifyRoutines @ 0x140685020 (PspCallThreadNotifyRoutines.c)
 *     EtwTraceThread @ 0x14068FC44 (EtwTraceThread.c)
 *     EtwTraceProcess @ 0x1406F2A40 (EtwTraceProcess.c)
 *     PspChangeProcessExecutionState @ 0x1406F5340 (PspChangeProcessExecutionState.c)
 *     MmDeleteTeb @ 0x1407007B0 (MmDeleteTeb.c)
 *     ObInsertObjectEx @ 0x14071BE00 (ObInsertObjectEx.c)
 *     KeSetUmsThreadKernelLock @ 0x1408BD778 (KeSetUmsThreadKernelLock.c)
 *     KeUnInitializeUmsThread @ 0x1408BD848 (KeUnInitializeUmsThread.c)
 *     KeUpdateUmsThreadState @ 0x1408BD8BC (KeUpdateUmsThreadState.c)
 *     PspAssignProcessToJobList @ 0x14090A04C (PspAssignProcessToJobList.c)
 *     PspCreateSecureThread @ 0x14090A0FC (PspCreateSecureThread.c)
 */

__int64 __fastcall PspInsertThread(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter1,
        _QWORD *a3,
        _DWORD *a4,
        int a5,
        char *a6,
        __int64 a7,
        __int64 a8,
        PACCESS_STATE AccessState,
        PVOID *a10,
        _OWORD *a11)
{
  unsigned int v14; // edi
  unsigned int *v15; // r13
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rdx
  int SecureThread; // ecx
  __int64 v20; // rdx
  unsigned int v22; // edx
  unsigned int v23; // ecx
  _QWORD *v24; // rcx
  _QWORD *v25; // rdx
  int v26; // r12d
  int v27; // edx
  signed int inserted; // r15d
  volatile signed __int64 *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // r8
  char *v32; // rbx
  int v33; // r12d
  KPROCESSOR_MODE v34; // dl
  _QWORD *v35; // [rsp+48h] [rbp-70h]
  __int64 v36; // [rsp+50h] [rbp-68h]
  _KPROCESS *Process; // [rsp+60h] [rbp-58h]

  v14 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v36 = *(_QWORD *)(BugCheckParameter2 + 240);
  v15 = 0LL;
  v16 = 0LL;
  if ( a7 )
  {
    v35 = *(_QWORD **)(a7 + 24);
    v15 = (unsigned int *)((a7 + 252) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x4000) != 0));
    v16 = (a7 + 320) & -(__int64)((*(_DWORD *)(a7 + 4) & 0x1000) != 0);
  }
  else
  {
    v35 = 0LL;
  }
  if ( (*a4 & 0x20) == 0 )
    ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 1080, 0LL);
  v17 = *(_QWORD *)(BugCheckParameter1 + 1296);
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
    && (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x4000008) == 0x4000000
    && ((*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000000) == 0
     || (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) != 0
     || (*a4 & 2) != 0) )
  {
    SecureThread = 0;
  }
  else
  {
    SecureThread = -1073741823;
  }
  if ( SecureThread >= 0 && (*(_BYTE *)(BugCheckParameter1 + 992) & 1) != 0 )
    SecureThread = PspCreateSecureThread((PVOID)BugCheckParameter2);
  if ( SecureThread < 0 )
  {
    if ( (v14 & 1) != 0 )
      ExReleaseResourceLite((PERESOURCE)(v17 + 56));
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter1 + 1080);
    KeAbPostRelease(BugCheckParameter1 + 1080);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 1280), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2 + 1280);
    KeAbPostRelease(BugCheckParameter2 + 1280);
    MmDeleteKernelStack(*(_QWORD *)(BugCheckParameter2 + 56), 2);
    *(_QWORD *)(BugCheckParameter2 + 40) = 0LL;
    if ( a6 )
    {
      if ( v36 )
        MmDeleteTeb(BugCheckParameter1, v36);
      if ( *a6 )
        PspDeleteUserStack((_KPROCESS *)BugCheckParameter1, v20, a3, a6);
    }
    return (*(_DWORD *)(BugCheckParameter1 + 1124) & 0x40000008) != 0 ? -1073741558 : -1073741823;
  }
  KeStartThread(BugCheckParameter2, (__int128 *)v16, v15);
  if ( (v14 & 1) != 0 )
  {
    ExReleaseResourceLite((PERESOURCE)(v17 + 56));
    v14 &= ~1u;
  }
  v22 = *(_DWORD *)(BugCheckParameter1 + 1124);
  if ( (v22 & 0x40000000) != 0 && (*a4 & 2) != 0 )
  {
    *(_DWORD *)(BugCheckParameter2 + 1300) |= 0x40u;
    v22 = *(_DWORD *)(BugCheckParameter1 + 1124);
  }
  v23 = (((v22 >> 27) & 7) << 9) | *(_DWORD *)(BugCheckParameter2 + 1296) & 0xFFFFF1FF;
  *(_DWORD *)(BugCheckParameter2 + 1296) = v23;
  *(_DWORD *)(BugCheckParameter2 + 1296) = v23 ^ ((unsigned __int16)v23 ^ (unsigned __int16)*(_DWORD *)(BugCheckParameter1 + 1120)) & 0x7000;
  if ( ++*(_DWORD *)(BugCheckParameter1 + 1520) > *(_DWORD *)(BugCheckParameter1 + 2136) )
    *(_DWORD *)(BugCheckParameter1 + 2136) = *(_DWORD *)(BugCheckParameter1 + 1520);
  if ( *(_DWORD *)(BugCheckParameter1 + 1520) == 1 )
  {
    v14 |= 2u;
  }
  else if ( *(_DWORD *)(BugCheckParameter1 + 1520) == 2 && (*(_DWORD *)(BugCheckParameter1 + 1120) & 0x8000) == 0 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1120), 0xFu);
  }
  ExAcquirePushLockExclusiveEx(BugCheckParameter1 + 2144, 0LL);
  v24 = (_QWORD *)(BugCheckParameter2 + 1256);
  v25 = *(_QWORD **)(BugCheckParameter1 + 1512);
  if ( *v25 != BugCheckParameter1 + 1504 )
    __fastfail(3u);
  *v24 = BugCheckParameter1 + 1504;
  *(_QWORD *)(BugCheckParameter2 + 1264) = v25;
  *v25 = v24;
  *(_QWORD *)(BugCheckParameter1 + 1512) = v24;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 2144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter1 + 2144);
  KeAbPostRelease(BugCheckParameter1 + 2144);
  if ( *(_QWORD *)(BugCheckParameter1 + 984) )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x19u);
  if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 0x2000000) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x1Du);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter1 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter1 + 1080);
  KeAbPostRelease(BugCheckParameter1 + 1080);
  if ( (*a4 & 0x40) != 0 )
    PspChangeProcessExecutionState((PEPROCESS)BugCheckParameter1);
  ObReferenceObjectExWithTag(BugCheckParameter2, 2);
  *(_DWORD *)(BugCheckParameter2 + 1372) = 1;
  if ( (*a4 & 1) != 0 )
  {
    KeSuspendThread(BugCheckParameter2);
    if ( (*(_DWORD *)(BugCheckParameter2 + 1296) & 1) != 0 )
      KeForceResumeThread(BugCheckParameter2);
  }
  v26 = 0;
  if ( !BYTE4(AccessState[2].SecurityDescriptor) || (*a4 & 0x10) != 0 )
  {
    v27 = BugCheckParameter1;
    v26 = 1;
  }
  else
  {
    v27 = (int)Process;
  }
  inserted = SeCreateAccessStateEx(0, v27, (_DWORD)AccessState, (int)AccessState + 160, a5, (__int64)PsThreadType + 76);
  if ( inserted < 0 )
  {
    HalPutDmaAdapter((PADAPTER_OBJECT)BugCheckParameter2);
  }
  else
  {
    inserted = ObInsertObjectEx((PADAPTER_OBJECT)BugCheckParameter2, AccessState, v26, 0LL, 0LL);
    if ( inserted >= 0 )
    {
      HalPutDmaAdapter((PADAPTER_OBJECT)BugCheckParameter2);
      if ( v35 )
        *v35 = v36;
      if ( a11 )
        *a11 = *(_OWORD *)(BugCheckParameter2 + 1144);
    }
    if ( inserted < 0 )
    {
      SepDeleteAccessState((__int64)AccessState);
      SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
    }
  }
  v29 = (volatile signed __int64 *)(BugCheckParameter2 + 1280);
  if ( inserted < 0 )
  {
    if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2 + 1280);
    KeAbPostRelease(BugCheckParameter2 + 1280);
    if ( (*a4 & 1) != 0 )
      KeForceResumeThread(BugCheckParameter2);
    v32 = a6;
    if ( a6 && *a6 )
      PspDeleteUserStack((_KPROCESS *)BugCheckParameter1, v30, a3, a6);
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 1296), 2u);
    if ( (_InterlockedExchangeAdd64(v29, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(BugCheckParameter2 + 1280);
    KeAbPostRelease(BugCheckParameter2 + 1280);
    v32 = a6;
  }
  v33 = 0;
  if ( (v14 & 2) != 0 )
  {
    if ( (PerfGlobalGroupMask & 1) != 0 )
      EtwTraceProcess((PEPROCESS)BugCheckParameter1);
    if ( *(_QWORD *)(BugCheckParameter1 + 2280) )
      PoEnergyContextStart(BugCheckParameter1);
    if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 2240) )
    {
      LOBYTE(v31) = 1;
      v33 = PspCallProcessNotifyRoutines(BugCheckParameter1, a7, v31);
    }
  }
  if ( (PerfGlobalGroupMask & 2) != 0 )
  {
    LOBYTE(v31) = 1;
    EtwTraceThread(BugCheckParameter2, a3, v31);
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 2172) & 1) == 0 || *(_QWORD *)(BugCheckParameter1 + 2240) )
  {
    LOBYTE(v30) = 1;
    PspCallThreadNotifyRoutines(BugCheckParameter2, v30);
  }
  if ( inserted >= 0 )
  {
    if ( v33 < 0 )
      inserted = v33;
    else
      inserted = PspCreateObjectHandle(BugCheckParameter2, AccessState, PsThreadType);
    SepDeleteAccessState((__int64)AccessState);
    SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
    if ( inserted >= 0 )
    {
      if ( a7 && *(_QWORD *)(a7 + 400) )
        inserted = PspAssignProcessToJobList((PEPROCESS)BugCheckParameter1);
      if ( inserted >= 0 )
      {
        *a10 = AccessState[2].AuxData;
        goto LABEL_125;
      }
      v34 = ((__int64)AccessState[2].SecurityDescriptor & 0x200) == 0
         && (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) == 0;
      ObCloseHandle(AccessState[2].AuxData, v34);
      if ( v32 && (*v32 & 1) != 0 )
        KeRaiseUserException(inserted);
    }
    if ( !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 1296), 0) )
      v14 |= 8u;
    if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) != 0 )
    {
      if ( (*a4 & 1) != 0 )
        KeForceResumeThread(BugCheckParameter2);
    }
    else
    {
      if ( v14 >= 8 )
        *(_DWORD *)(BugCheckParameter2 + 1352) = inserted;
      KeRequestTerminationThread(BugCheckParameter2);
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
  KeReadyThread((_KTHREAD *)BugCheckParameter2);
  return (unsigned int)inserted;
}
