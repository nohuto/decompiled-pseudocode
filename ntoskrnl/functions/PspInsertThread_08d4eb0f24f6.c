__int64 __fastcall PspInsertThread(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
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
  __int64 v16; // rbx
  _DWORD *v17; // rdx
  int SecureThread; // ecx
  unsigned int v19; // ecx
  _QWORD *v20; // rcx
  _QWORD *v21; // rdx
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
  int v37; // [rsp+44h] [rbp-94h]
  unsigned int *v38; // [rsp+48h] [rbp-90h]
  unsigned __int64 *v39; // [rsp+50h] [rbp-88h]
  unsigned __int64 v40; // [rsp+58h] [rbp-80h]
  _KPROCESS *Process; // [rsp+68h] [rbp-70h]

  v13 = a7;
  v14 = 0;
  Process = KeGetCurrentThread()->ApcState.Process;
  v40 = *(_QWORD *)(BugCheckParameter2 + 240);
  v38 = 0LL;
  Pool2 = 0LL;
  v16 = 0LL;
  if ( (*a4 & 0x20) == 0 )
  {
    ExAcquirePushLockExclusiveEx(a2 + 1080, 0LL);
    v13 = a7;
  }
  if ( !v13 )
  {
    v39 = 0LL;
    goto LABEL_6;
  }
  v39 = *(unsigned __int64 **)(v13 + 24);
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
        if ( *(_WORD *)(a2 + 1040) != *(_WORD *)(a7 + 328) )
          _interlockedbittestandset((volatile signed __int32 *)(a2 + 632), 0xCu);
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
  v16 = *(_QWORD *)(a2 + 1296);
  if ( v16 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) == 0 )
    {
      ExAcquireResourceSharedLite((PERESOURCE)(v16 + 56), 1u);
      v14 = 1;
      if ( Pool2 )
      {
        if ( (*(_DWORD *)(v16 + 1040) & 0x10) != 0
          && !(unsigned int)KeIsSubsetAffinityEx((unsigned __int16 *)Pool2, (unsigned __int16 *)(v16 + 712)) )
        {
          v14 = 5;
        }
      }
    }
  }
  if ( v14 >= 4 || (*(_DWORD *)(a2 + 1124) & 0x4000008) != 0x4000000 )
  {
    v17 = a4;
LABEL_106:
    SecureThread = -1073741823;
    goto LABEL_11;
  }
  v17 = a4;
  if ( (*(_DWORD *)(a2 + 1124) & 0x40000000) != 0
    && (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) == 0
    && (*(_BYTE *)a4 & 2) == 0 )
  {
    goto LABEL_106;
  }
  SecureThread = 0;
LABEL_11:
  v36 = SecureThread;
  if ( SecureThread >= 0 )
  {
    if ( (*(_BYTE *)(a2 + 992) & 1) != 0 && (*v17 & 0x400) != 0 )
    {
      SecureThread = PspCreateSecureThread((PVOID)BugCheckParameter2);
      v36 = SecureThread;
    }
    if ( SecureThread >= 0 )
    {
      KeStartThread(BugCheckParameter2, (unsigned __int16 *)Pool2, v38);
      if ( (v14 & 1) != 0 )
      {
        ExReleaseResourceLite((PERESOURCE)(v16 + 56));
        v14 &= ~1u;
      }
      if ( (*(_DWORD *)(a2 + 1124) & 0x40000000) != 0 && (*a4 & 2) != 0 )
        *(_DWORD *)(BugCheckParameter2 + 1380) |= 0x40u;
      if ( Pool2 )
        ExFreePoolWithTag((PVOID)Pool2, 0);
      v19 = (((*(_DWORD *)(a2 + 1124) >> 27) & 7) << 9) | *(_DWORD *)(BugCheckParameter2 + 1376) & 0xFFFFF1FF;
      *(_DWORD *)(BugCheckParameter2 + 1376) = v19;
      *(_DWORD *)(BugCheckParameter2 + 1376) = v19 ^ (*(_DWORD *)(a2 + 1120) ^ v19) & 0x7000;
      if ( ++*(_DWORD *)(a2 + 1520) > *(_DWORD *)(a2 + 2136) )
        *(_DWORD *)(a2 + 2136) = *(_DWORD *)(a2 + 1520);
      if ( *(_DWORD *)(a2 + 1520) == 1 )
      {
        v14 |= 2u;
      }
      else if ( *(_DWORD *)(a2 + 1520) == 2 && (*(_DWORD *)(a2 + 1120) & 0x8000) == 0 )
      {
        _interlockedbittestandset((volatile signed __int32 *)(a2 + 1120), 0xFu);
      }
      ExAcquirePushLockExclusiveEx(a2 + 2144, 0LL);
      v20 = (_QWORD *)(BugCheckParameter2 + 1336);
      v21 = *(_QWORD **)(a2 + 1512);
      if ( *v21 != a2 + 1504 )
        __fastfail(3u);
      *v20 = a2 + 1504;
      *(_QWORD *)(BugCheckParameter2 + 1344) = v21;
      *v21 = v20;
      *(_QWORD *)(a2 + 1512) = v20;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 2144), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 2144));
      KeAbPostRelease(a2 + 2144);
      if ( *(_QWORD *)(a2 + 984) )
        _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x19u);
      if ( *(_QWORD *)(a2 + 2896) )
        _interlockedbittestandset((volatile signed __int32 *)BugCheckParameter2, 0x1Du);
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1080));
      KeAbPostRelease(a2 + 1080);
      if ( (*a4 & 0x40) != 0 )
        PspChangeProcessExecutionState((PEPROCESS)a2);
      ObReferenceObjectExWithTag(BugCheckParameter2, 2);
      *(_DWORD *)(BugCheckParameter2 + 1452) = 1;
      if ( (*a4 & 1) != 0 )
      {
        KeSuspendThread(BugCheckParameter2);
        if ( (*(_DWORD *)(BugCheckParameter2 + 1376) & 1) != 0 )
          KeForceResumeThread(BugCheckParameter2);
      }
      inserted = PspRecheckThreadOptionalXStateFeatures(a2, BugCheckParameter2);
      v37 = 0;
      if ( !BYTE4(AccessState[2].SecurityDescriptor) || (*a4 & 0x10) != 0 )
      {
        v23 = (struct _KPROCESS *)a2;
        v37 = 1;
      }
      else
      {
        v23 = Process;
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
        ObfDereferenceObject((PVOID)BugCheckParameter2);
      }
      else
      {
        inserted = ObInsertObjectEx((PVOID)BugCheckParameter2, AccessState, v37, 0LL, 0LL);
        if ( inserted >= 0 )
        {
          ObfDereferenceObject((PVOID)BugCheckParameter2);
          if ( v39 )
            *v39 = v40;
          if ( a11 )
            *a11 = *(_OWORD *)(BugCheckParameter2 + 1224);
        }
        if ( inserted < 0 )
        {
          SepDeleteAccessState((__int64)AccessState);
          SeReleaseSubjectContext(&AccessState->SubjectSecurityContext);
        }
      }
      v24 = (volatile signed __int64 *)(BugCheckParameter2 + 1360);
      if ( inserted < 0 )
      {
        if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v24);
          v24 = (volatile signed __int64 *)(BugCheckParameter2 + 1360);
        }
        KeAbPostRelease((ULONG_PTR)v24);
        if ( (*a4 & 1) != 0 )
          KeForceResumeThread(BugCheckParameter2);
        if ( a6 && *a6 )
          PspDeleteUserStack(a2, v25, a3, a6);
      }
      else
      {
        _InterlockedOr((volatile signed __int32 *)(BugCheckParameter2 + 1376), 2u);
        if ( (_InterlockedExchangeAdd64(v24, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        {
          ExfTryToWakePushLock(v24);
          v24 = (volatile signed __int64 *)(BugCheckParameter2 + 1360);
        }
        KeAbPostRelease((ULONG_PTR)v24);
      }
      v27 = 0;
      if ( (v14 & 2) != 0 )
      {
        if ( (PerfGlobalGroupMask & 1) != 0 )
          EtwTraceProcess((PRKPROCESS)a2);
        if ( *(_QWORD *)(a2 + 2280) )
          PoEnergyContextStart((PRKPROCESS)a2);
        if ( (*(_DWORD *)(a2 + 2172) & 1) == 0 || *(_QWORD *)(a2 + 2240) )
        {
          LOBYTE(v26) = 1;
          v27 = PspCallProcessNotifyRoutines(a2, a7, v26);
        }
      }
      if ( (PerfGlobalGroupMask & 2) != 0 )
      {
        LOBYTE(v26) = 1;
        EtwTraceThread(BugCheckParameter2, a3, v26);
      }
      if ( (*(_DWORD *)(a2 + 2172) & 1) == 0 || *(_QWORD *)(a2 + 2240) )
      {
        LOBYTE(v25) = 1;
        PspCallThreadNotifyRoutines(BugCheckParameter2, v25, 0LL);
      }
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
        inserted = PspCreateObjectHandle(BugCheckParameter2, AccessState, PsThreadType);
      }
      SepDeleteAccessState((__int64)v28);
      SeReleaseSubjectContext(&v28->SubjectSecurityContext);
      if ( inserted >= 0 )
      {
        if ( a7 )
        {
          v25 = *(_QWORD *)(a7 + 376);
          if ( v25 )
            inserted = PspAssignProcessToJobList(a2, v25, *(unsigned int *)(a7 + 388));
        }
        if ( inserted >= 0 )
        {
          *a10 = v28[2].AuxData;
LABEL_66:
          KeReadyThread(BugCheckParameter2, v25, v26);
          return (unsigned int)inserted;
        }
        if ( ((__int64)v28[2].SecurityDescriptor & 0x200) != 0
          || (v35 = 1, (HIDWORD(Process[2].Header.WaitListHead.Flink) & 0x1000) != 0) )
        {
          v35 = 0;
        }
        ObCloseHandle(v28[2].AuxData, v35);
        if ( a6 && (*a6 & 1) != 0 )
          KeRaiseUserException(inserted);
      }
      if ( !_interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter2 + 1376), 0) )
        v14 |= 8u;
      if ( (*(_DWORD *)(BugCheckParameter2 + 116) & 0x400) != 0 )
      {
        if ( (*a4 & 1) != 0 )
          KeForceResumeThread(BugCheckParameter2);
      }
      else
      {
        if ( v14 >= 8 )
          *(_DWORD *)(BugCheckParameter2 + 1432) = inserted;
        KeRequestTerminationThread(BugCheckParameter2);
      }
      goto LABEL_66;
    }
  }
LABEL_89:
  if ( (v14 & 1) != 0 )
    ExReleaseResourceLite((PERESOURCE)(v16 + 56));
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1080), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a2 + 1080));
  KeAbPostRelease(a2 + 1080);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 1360), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(BugCheckParameter2 + 1360));
  KeAbPostRelease(BugCheckParameter2 + 1360);
  KeUninitThread(BugCheckParameter2);
  if ( a6 )
  {
    if ( v40 )
      MmDeleteTeb((struct _KPROCESS *)a2, v40);
    if ( *a6 )
      PspDeleteUserStack(a2, v34, a3, a6);
  }
  if ( Pool2 )
    ExFreePoolWithTag((PVOID)Pool2, 0);
  result = v36;
  if ( (*(_DWORD *)(a2 + 1124) & 0x40000008) != 0 )
    return 3221225738LL;
  return result;
}
