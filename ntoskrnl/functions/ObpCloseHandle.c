__int64 __fastcall ObpCloseHandle(__int64 BugCheckParameter1, unsigned __int8 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v4; // rsi
  struct _EX_RUNDOWN_REF *v5; // r15
  unsigned __int64 Count; // r14
  __int64 *v7; // rbx
  __int64 v8; // r8
  unsigned __int64 HandlePointer; // r15
  __int64 v10; // rdi
  __int64 v11; // r13
  unsigned int v12; // r12d
  ULONG_PTR v13; // rdi
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r14
  unsigned __int64 v17; // rcx
  __int64 v18; // rdi
  signed __int64 v19; // rsi
  PRKPROCESS v20; // r13
  struct _KPROCESS *v22; // r13
  struct _KTHREAD *v23; // rax
  __int64 v24; // rdx
  int v25; // ecx
  struct _LIST_ENTRY *ProcessServerSilo; // rax
  struct _LIST_ENTRY *v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rbx
  struct _KTHREAD *v30; // rax
  volatile signed __int32 *v31; // r14
  int v32; // r8d
  struct _KTHREAD *v33; // rax
  ULONG_PTR v34; // rax
  _QWORD *v35; // r8
  _QWORD *v36; // rbx
  struct _KTHREAD *v37; // rax
  __int64 v38; // rdx
  _QWORD *HandleExtraInfo; // rax
  __int64 v40; // rax
  signed __int32 v41[8]; // [rsp+0h] [rbp-B9h] BYREF
  char v42; // [rsp+30h] [rbp-89h]
  char v43; // [rsp+31h] [rbp-88h] BYREF
  char v44; // [rsp+32h] [rbp-87h]
  _BYTE v45[5]; // [rsp+33h] [rbp-86h] BYREF
  PRKPROCESS PROCESS; // [rsp+38h] [rbp-81h]
  __int128 v47; // [rsp+48h] [rbp-71h] BYREF
  __int64 v48; // [rsp+58h] [rbp-61h]
  int v49; // [rsp+60h] [rbp-59h]
  unsigned __int64 v50; // [rsp+68h] [rbp-51h]
  __int64 v51; // [rsp+70h] [rbp-49h]
  struct _KAPC_STATE v52; // [rsp+78h] [rbp-41h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-11h] BYREF

  CurrentThread = KeGetCurrentThread();
  v45[0] = 0;
  v4 = BugCheckParameter1;
  v43 = 0;
  v44 = 0;
  v5 = (struct _EX_RUNDOWN_REF *)CurrentThread->ApcState.Process;
  if ( !a2
    && (BugCheckParameter1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL
    && BugCheckParameter1 != -2
    && BugCheckParameter1 != -1 )
  {
    v4 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
    Count = ObpKernelHandleTable;
    PROCESS = PsInitialSystemProcess;
    goto LABEL_4;
  }
  PROCESS = CurrentThread->ApcState.Process;
  if ( KeGetCurrentThread()->ApcStateIndex == 1 )
  {
    Count = ObReferenceProcessHandleTable(v5);
    if ( Count )
    {
      v44 = 1;
      goto LABEL_4;
    }
    return (unsigned int)-1073741816;
  }
  Count = v5[174].Count;
  if ( Count == ObpKernelHandleTable )
    return (unsigned int)-1073741816;
LABEL_4:
  --CurrentThread->KernelApcDisable;
  if ( (v4 & 0x3FC) == 0 || (v7 = (__int64 *)ExpLookupHandleTableEntry(Count, v4)) == 0LL )
  {
LABEL_84:
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    if ( v4 > 0 || v4 < -6 )
    {
      ExQueryHandleExceptionsPermanency(Count, v45, &v43);
      if ( (*(_BYTE *)(Count + 44) & 0x10) != 0 && v43 )
        ExHandleLogBadReference(Count, v4, a2);
      if ( a2 )
      {
        if ( (NtGlobalFlag & 0x400000) != 0 || v5[175].Count || *(_QWORD *)(Count + 96) )
        {
          if ( KeGetCurrentThread()->ApcStateIndex == 1 )
            v12 = -1073741816;
          else
            v12 = KeRaiseUserException(0xC0000008);
          goto LABEL_35;
        }
      }
      else if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 1) == 0 && v5[170].Count && (_BYTE)KdDebuggerEnabled )
      {
        KeBugCheckEx(0x93u, v4, 1uLL, 0LL, 0LL);
      }
    }
    v12 = -1073741816;
    if ( (unsigned __int64)v4 >= 0xFFFFFFFFFFFFFFFAuLL )
      v12 = 0;
    goto LABEL_35;
  }
  do
  {
    while ( 1 )
    {
      _m_prefetchw(v7);
      v8 = *v7;
      if ( (*v7 & 1) != 0 )
        break;
      if ( !v8 )
        goto LABEL_84;
      ExpBlockOnLockedHandleEntry(Count, v7, v8);
    }
  }
  while ( v8 != _InterlockedCompareExchange64(v7, v8 - 1, v8) );
  memset(&v52, 0, sizeof(v52));
  v42 = 0;
  HandlePointer = ExGetHandlePointer(v7);
  v51 = BYTE1(HandlePointer);
  v10 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)];
  if ( *(_QWORD *)(v10 + 168) )
  {
    if ( KeGetCurrentThread()->ApcState.Process != PROCESS )
    {
      KeStackAttachProcess(PROCESS, &v52);
      v42 = 1;
    }
    v20 = PROCESS;
    if ( !(*(unsigned __int8 (__fastcall **)(PRKPROCESS, unsigned __int64, __int64, _QWORD))(v10 + 168))(
            PROCESS,
            HandlePointer + 48,
            v4,
            a2) )
    {
      _InterlockedExchangeAdd64(v7, 1uLL);
      _InterlockedOr(v41, 0);
      if ( *(_QWORD *)(Count + 48) )
        ExfUnblockPushLock((volatile __int64 *)(Count + 48), 0LL);
      KeLeaveCriticalRegion();
      if ( v42 )
        KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&v52);
      v12 = -1073741259;
      goto LABEL_36;
    }
  }
  v11 = *v7 >> 17;
  if ( (v11 & 1) == 0 )
  {
    if ( (xmmword_140D1EAD0 & 0x40) != 0 )
    {
      v38 = v4;
      if ( PROCESS == PsInitialSystemProcess )
        v38 = v4 | 0x80000000LL;
      EtwpTraceHandle(4385LL, v38, HandlePointer + 48, v10);
    }
    if ( *(_QWORD *)(Count + 96) )
      ExpUpdateDebugInfo(Count, KeGetCurrentThread(), v4, 2LL);
    v12 = 0;
    v49 = (unsigned __int16)((unsigned __int64)*(unsigned int *)v7 >> 1);
    *v7 = 0LL;
    _InterlockedOr(v41, 0);
    if ( *(_QWORD *)(Count + 48) )
      ExfUnblockPushLock((volatile __int64 *)(Count + 48), 0LL);
    v50 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( *(_DWORD *)(Count + 4) )
    {
      HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(Count, v50);
      if ( HandleExtraInfo )
        *HandleExtraInfo = 0LL;
    }
    v7[1] = 0LL;
    if ( (*(_BYTE *)(Count + 44) & 1) != 0 )
    {
      v13 = Count + 64;
      ExAcquirePushLockExclusiveEx(Count + 64, 0LL);
      v40 = *(_QWORD *)(Count + 80);
      if ( v40 )
        *(_QWORD *)(v40 + 8) = v7;
      else
        *(_QWORD *)(Count + 72) = v7;
      *(_QWORD *)(Count + 80) = v7;
    }
    else
    {
      v13 = Count + ((KeGetPcr()->Prcb.Number + 1LL) << 6);
      ExAcquirePushLockExclusiveEx(v13, 0LL);
      v14 = *(_QWORD *)(v13 + 8);
      v7[1] = v14;
      if ( !v14 )
        *(_QWORD *)(v13 + 16) = v7;
      *(_QWORD *)(v13 + 8) = v7;
    }
    --*(_DWORD *)(v13 + 24);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v13, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v13);
    KeAbPostRelease(v13);
    KeLeaveCriticalRegion();
    if ( (v11 & 4) != 0 )
    {
      LOBYTE(v15) = 1;
      SeCloseObjectAuditAlarm(HandlePointer + 48, v4 & 0xFFFFFFFFFFFFFFFCuLL, v15);
    }
    v16 = 0LL;
    v17 = (unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v51 ^ (unsigned __int64)*(unsigned __int8 *)(HandlePointer + 24);
    memset(&ApcState, 0, sizeof(ApcState));
    v18 = ObTypeIndexTable[v17];
    if ( (*(_BYTE *)(v18 + 66) & 0x10) == 0 && (*(_BYTE *)(HandlePointer + 27) & 8) == 0 )
    {
      v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer + 8), 0xFFFFFFFFFFFFFFFFuLL);
LABEL_27:
      if ( *(_QWORD *)(v18 + 128) )
      {
        v22 = PROCESS;
        if ( KeGetCurrentThread()->ApcState.Process == PROCESS )
        {
          (*(void (__fastcall **)(PRKPROCESS, unsigned __int64, __int64, signed __int64))(v18 + 128))(
            PROCESS,
            HandlePointer + 48,
            v16,
            v19);
        }
        else
        {
          ProcessServerSilo = (struct _LIST_ENTRY *)PsGetProcessServerSilo((__int64)PROCESS);
          v27 = PsAttachSiloToCurrentThread(ProcessServerSilo);
          KeStackAttachProcess(v22, &ApcState);
          (*(void (__fastcall **)(struct _KPROCESS *, unsigned __int64, __int64, signed __int64))(v18 + 128))(
            v22,
            HandlePointer + 48,
            v16,
            v19);
          KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
          PsDetachSiloFromCurrentThread(v27);
        }
      }
      if ( v19 == 1 && (*(_BYTE *)(HandlePointer + 26) & 2) != 0 )
      {
        v28 = ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 3];
        v29 = HandlePointer - v28;
        if ( HandlePointer != v28 )
        {
          while ( 1 )
          {
            v30 = KeGetCurrentThread();
            --v30->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(HandlePointer + 16, 0LL);
            v31 = *(volatile signed __int32 **)v29;
            if ( !*(_QWORD *)v29 || (*(_BYTE *)(HandlePointer + 27) & 0x10) != 0 || *(_QWORD *)(HandlePointer + 8) )
            {
              ExReleasePushLockEx((__int64 *)(HandlePointer + 16), 0LL);
              KeLeaveCriticalRegion();
              goto LABEL_30;
            }
            v48 = 0x10000000000LL;
            v33 = KeGetCurrentThread();
            v47 = (unsigned __int64)v31;
            --v33->KernelApcDisable;
            v34 = KeAbPreAcquire((__int64)(v31 + 74), 0LL);
            if ( !_interlockedbittestandset64(v31 + 74, 0LL) )
              break;
            if ( v34 )
              KeAbPostReleaseEx((ULONG_PTR)(v31 + 74), v34);
            KeLeaveCriticalRegion();
            *(_QWORD *)&v47 = 0LL;
            BYTE5(v48) = 0;
            ObfReferenceObject((PVOID)v31);
            ExReleasePushLockEx((__int64 *)(HandlePointer + 16), 0LL);
            KeLeaveCriticalRegion();
            ObpLockDirectoryExclusive((__int64)&v47, (__int64)v31);
            v37 = KeGetCurrentThread();
            --v37->KernelApcDisable;
            ExAcquirePushLockExclusiveEx(HandlePointer + 16, 0LL);
            if ( *(volatile signed __int32 **)v29 == v31
              && (*(_BYTE *)(HandlePointer + 27) & 0x10) == 0
              && !*(_QWORD *)(HandlePointer + 8) )
            {
              PsDereferenceSiloContext((void *)v31);
              goto LABEL_73;
            }
            if ( (_QWORD)v47 )
              ObpUnlockDirectory((__int64)&v47);
            ExReleasePushLockEx((__int64 *)(HandlePointer + 16), 0LL);
            KeLeaveCriticalRegion();
            PsDereferenceSiloContext((void *)v31);
          }
          if ( v34 )
            *(_BYTE *)(v34 + 18) = 1;
LABEL_73:
          if ( *(_DWORD *)(v29 + 24) )
          {
            ExReleasePushLockEx((__int64 *)(HandlePointer + 16), 0LL);
            KeLeaveCriticalRegion();
          }
          else
          {
            if ( (POBJECT_TYPE)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)v51 ^ (unsigned __int64)*(unsigned __int8 *)(HandlePointer + 24)] == ObpSymbolicLinkObjectType )
              ObpDeleteSymbolicLinkName(HandlePointer + 48);
            ObpLookupDirectoryEntry((unsigned __int16 *)(v29 + 8), 0, (__int64 *)&v47);
            v35 = (_QWORD *)*((_QWORD *)&v47 + 1);
            v36 = (_QWORD *)**((_QWORD **)&v47 + 1);
            *(_QWORD *)(*(_QWORD *)(**((_QWORD **)&v47 + 1) + 8LL)
                      - 48LL
                      - ObpInfoMaskToOffset[*(_BYTE *)(*(_QWORD *)(**((_QWORD **)&v47 + 1) + 8LL) - 48LL + 26) & 3]) = 0LL;
            *v35 = *v36;
            *v36 = 0LL;
            ExReleasePushLockEx((__int64 *)(HandlePointer + 16), 0LL);
            KeLeaveCriticalRegion();
            if ( v36 )
              ObpDeleteDirectoryEntry(v36, (void **)&v47);
          }
          if ( (_QWORD)v47 )
            ObpUnlockDirectory((__int64)&v47);
        }
      }
LABEL_30:
      _InterlockedDecrement((volatile signed __int32 *)(v18 + 48));
      if ( v42 )
        KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&v52);
      if ( v49 )
        _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, -v49);
      ObfDereferenceObjectWithTag((PVOID)(HandlePointer + 48), 0x6E48624Fu);
      goto LABEL_35;
    }
    v23 = KeGetCurrentThread();
    --v23->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(HandlePointer + 16, 0LL);
    v19 = *(_QWORD *)(HandlePointer + 8);
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)(HandlePointer + 8), 0xFFFFFFFFFFFFFFFFuLL) == 1
      && (*(_BYTE *)(HandlePointer + 27) & 8) != 0 )
    {
      *(_QWORD *)(HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x1F]) = 0LL;
    }
    if ( (*(_BYTE *)(v18 + 66) & 0x10) == 0 )
    {
LABEL_57:
      ExReleasePushLockEx((__int64 *)(HandlePointer + 16), 0LL);
      KeLeaveCriticalRegion();
      goto LABEL_27;
    }
    if ( (*(_BYTE *)(HandlePointer + 26) & 4) != 0 )
      v24 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 7];
    else
      v24 = 0LL;
    if ( (*(_BYTE *)(HandlePointer + 27) & 0x40) != 0 )
    {
      v25 = *(_DWORD *)(v24 + 8);
      v16 = v25 & 0xFFFFFF;
    }
    else
    {
      v32 = **(_DWORD **)v24;
      v24 = *(_QWORD *)v24 + 8LL;
      if ( !v32 )
        goto LABEL_54;
      while ( 1 )
      {
        v25 = *(_DWORD *)(v24 + 8);
        if ( (v25 & 0xFFFFFF) != 0 && *(PRKPROCESS *)v24 == PROCESS )
          break;
        v24 += 16LL;
        if ( !--v32 )
          goto LABEL_54;
      }
      v16 = *(_DWORD *)(v24 + 8) & 0xFFFFFF;
    }
    *(_DWORD *)(v24 + 8) = v25 ^ (v25 ^ (v25 - 1)) & 0xFFFFFF;
LABEL_54:
    if ( !*(_BYTE *)(v24 + 11) && (*(_DWORD *)(v24 + 8) & 0xFFFFFF) == 0 )
      *(_QWORD *)v24 = 0LL;
    goto LABEL_57;
  }
  if ( !a2 )
    KeBugCheckEx(0x93u, v4, 0LL, 0LL, 0LL);
  _InterlockedExchangeAdd64(v7, 1uLL);
  _InterlockedOr(v41, 0);
  if ( *(_QWORD *)(Count + 48) )
    ExfUnblockPushLock((volatile __int64 *)(Count + 48), 0LL);
  KeLeaveCriticalRegion();
  if ( v42 )
    KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&v52);
  if ( KeGetCurrentThread()->ApcStateIndex != 1
    && ((NtGlobalFlag & 0x400000) != 0
     || KeGetCurrentThread()->ApcState.Process[1].Affinity.StaticBitmap[29]
     || *(_QWORD *)(Count + 96)) )
  {
    v12 = KeRaiseUserException(0xC0000235);
  }
  else
  {
    v12 = -1073741259;
  }
LABEL_35:
  v20 = PROCESS;
LABEL_36:
  if ( v44 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&v20[1].ProfileListHead.Blink);
  return v12;
}
