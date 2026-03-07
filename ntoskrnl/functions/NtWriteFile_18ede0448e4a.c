NTSTATUS __stdcall NtWriteFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  unsigned __int64 HandlePointer; // r15
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v11; // r13
  _KPROCESS *Process; // rax
  __int64 v13; // rbx
  signed __int64 *v14; // rax
  volatile signed __int64 *v15; // r14
  signed __int64 v16; // r12
  __int64 v17; // rsi
  unsigned __int64 v18; // rax
  __int128 v19; // rt0
  unsigned __int8 v20; // tt
  bool v21; // zf
  __int64 v22; // rsi
  int v23; // edx
  unsigned __int64 v24; // rcx
  _DWORD *v25; // rax
  int v27; // eax
  NTSTATUS v28; // ebx
  int v29; // ecx
  signed __int32 v31[8]; // [rsp+0h] [rbp-A1h] BYREF
  __int64 v32; // [rsp+80h] [rbp-21h]
  signed __int64 v33[11]; // [rsp+88h] [rbp-19h] BYREF
  char PreviousMode; // [rsp+F0h] [rbp+4Fh]

  HandlePointer = 0LL;
  CurrentThread = KeGetCurrentThread();
  v11 = (ULONG_PTR)FileHandle;
  *(_OWORD *)v33 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  if ( (int)FileHandle < 0 )
  {
    if ( !CurrentThread->PreviousMode && (unsigned __int64)FileHandle <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v13 = ObpKernelHandleTable;
      v11 = (unsigned __int64)FileHandle ^ 0xFFFFFFFF80000000uLL;
      v32 = ObpKernelHandleTable;
      goto LABEL_3;
    }
    return -1073741816;
  }
  Process = CurrentThread->ApcState.Process;
  v13 = Process[1].Affinity.StaticBitmap[28];
  LODWORD(Process) = HIDWORD(Process[1].DirectoryTableBase);
  v32 = v13;
  if ( ((unsigned int)Process & 0x4000000) == 0 )
    return -1073741816;
LABEL_3:
  --CurrentThread->KernelApcDisable;
  if ( (v11 & 0x3FC) != 0 && (v14 = (signed __int64 *)ExpLookupHandleTableEntry(v13, v11), (v15 = v14) != 0LL) )
  {
    _m_prefetchw(v14);
    v16 = v14[1];
    v33[0] = *v14;
    v17 = v33[0];
    v33[1] = v16;
    while ( (v17 & 0x1FFFE) != 0 )
    {
      if ( (v17 & 1) != 0 )
      {
        *(_QWORD *)&v19 = v17;
        *((_QWORD *)&v19 + 1) = v16;
        v20 = _InterlockedCompareExchange128(v15, v16, v17 - 2, (signed __int64 *)&v19);
        v18 = v19;
        v17 = v19;
        *(_OWORD *)v33 = v19;
        v16 = *((_QWORD *)&v19 + 1);
        if ( v20 )
        {
          if ( (unsigned __int16)(v18 >> 1) != 16 )
          {
            HandlePointer = ExGetHandlePointer(v33);
            goto LABEL_10;
          }
          v33[0] = ((unsigned int)v17 ^ (2 * (unsigned int)(v18 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v17;
          HandlePointer = ExGetHandlePointer(v33);
          ObpIncrPointerCountEx((volatile signed __int64 *)HandlePointer, 32752);
          v29 = ExFastReplenishHandleTableEntry(v15, v33, 32752);
          if ( v29 )
            _InterlockedExchangeAdd64((volatile signed __int64 *)HandlePointer, -v29);
LABEL_31:
          LODWORD(v16) = v33[1];
          v17 = v33[0];
          goto LABEL_10;
        }
        v13 = v32;
      }
      else
      {
        ExpBlockOnLockedHandleEntry(v13, v15, v17);
        _m_prefetchw((const void *)v15);
        v16 = *((_QWORD *)v15 + 1);
        v33[0] = *v15;
        v17 = v33[0];
        v33[1] = v16;
      }
    }
    if ( ExLockHandleTableEntry(v13, v15) )
    {
      HandlePointer = ExGetHandlePointer((__int64 *)v15);
      *(_OWORD *)v33 = *(_OWORD *)v15;
      v27 = ExSlowReplenishHandleTableEntry((unsigned __int64 *)v15);
      ObpIncrPointerCountEx((volatile signed __int64 *)HandlePointer, v27 + 1);
      _InterlockedExchangeAdd64(v15, 1uLL);
      _InterlockedOr(v31, 0);
      if ( *(_QWORD *)(v13 + 48) )
      {
        ExfUnblockPushLock((volatile __int64 *)(v13 + 48), 0LL);
        LODWORD(v16) = v33[1];
        v17 = v33[0];
        goto LABEL_10;
      }
      goto LABEL_31;
    }
  }
  else
  {
    LODWORD(v16) = v33[1];
    v17 = v33[0];
  }
  if ( v11 )
  {
    ExHandleLogBadReference(v13, v11, KeGetCurrentThread()->PreviousMode);
    LODWORD(v16) = v33[1];
    v17 = v33[0];
  }
  v15 = 0LL;
LABEL_10:
  v21 = CurrentThread->KernelApcDisable++ == -1;
  if ( v21
    && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( !v15 )
    return -1073741816;
  if ( ObpTraceFlags )
    ObpPushStackInfo(HandlePointer, 1, 1u, 0x746C6644u);
  if ( (POBJECT_TYPE *)ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(HandlePointer + 24) ^ (unsigned __int64)BYTE1(HandlePointer)] != IoFileObjectType )
  {
    v28 = -1073741788;
    goto LABEL_55;
  }
  v22 = (v17 >> 17) & 7;
  v23 = ~(unsigned __int8)(*(_DWORD *)(HandlePointer + 128) >> 5) & 4 | 2;
  if ( (v16 & 0x1FFFFFF & (unsigned int)v23) == 0 )
  {
    v28 = -1073741790;
    goto LABEL_55;
  }
  if ( PreviousMode )
  {
    if ( (*(_BYTE *)(HandlePointer + 26) & 0x40) != 0 )
    {
      v24 = HandlePointer - ObpInfoMaskToOffset[*(_BYTE *)(HandlePointer + 26) & 0x7F];
      if ( *(_BYTE *)(*(_QWORD *)v24 + 24LL) )
      {
        if ( *(_QWORD *)(*(_QWORD *)v24 + 16LL) == 1LL )
        {
          v28 = -1073700858;
LABEL_55:
          PsDereferenceSiloContext((void *)(HandlePointer + 48));
          return v28;
        }
      }
    }
  }
  if ( (v22 & 4) != 0
    && PreviousMode
    && !(unsigned __int8)ObpAuditObjectAccess(v32, v11, (_DWORD)v15, HandlePointer, v23) )
  {
    v28 = -1073741816;
    goto LABEL_55;
  }
  v25 = *(_DWORD **)(HandlePointer + 256);
  if ( !v25 )
    return IopWriteFile(
             (PVOID)(HandlePointer + 48),
             (__int64)IoStatusBlock,
             (__int64)Buffer,
             Length,
             (__int64)ByteOffset,
             (__int64)Key,
             v16 & 0x1FFFFFF,
             0LL,
             0LL,
             0,
             0LL);
  if ( (*v25 & 4) == 0 )
    return IopWriteFile(
             (PVOID)(HandlePointer + 48),
             (__int64)IoStatusBlock,
             (__int64)Buffer,
             Length,
             (__int64)ByteOffset,
             (__int64)Key,
             v16 & 0x1FFFFFF,
             0LL,
             0LL,
             0,
             0LL);
  if ( !(unsigned __int8)PsIsProcessAppContainer(KeGetCurrentThread()->ApcState.Process) )
    return IopWriteFile(
             (PVOID)(HandlePointer + 48),
             (__int64)IoStatusBlock,
             (__int64)Buffer,
             Length,
             (__int64)ByteOffset,
             (__int64)Key,
             v16 & 0x1FFFFFF,
             0LL,
             0LL,
             0,
             0LL);
  ObfDereferenceObject((PVOID)(HandlePointer + 48));
  return -1073739504;
}
