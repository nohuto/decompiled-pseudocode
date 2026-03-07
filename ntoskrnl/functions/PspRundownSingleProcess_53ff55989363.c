bool __fastcall PspRundownSingleProcess(PRKPROCESS PROCESS, bool a2)
{
  bool v2; // bp
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx
  _QWORD *v7; // rax
  __int64 v8; // rbx
  unsigned __int64 v9; // rbx
  _QWORD *v10; // rcx
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  void *UserCetLogging; // rcx
  void *v16; // rcx
  struct _SINGLE_LIST_ENTRY *Next; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  __int64 v20; // r11
  volatile signed __int64 *p_Lock; // rdi
  __int64 v22; // rax
  __int64 v23; // r8
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-68h] BYREF

  v2 = a2;
  memset(&ApcState, 0, sizeof(ApcState));
  CurrentThread = KeGetCurrentThread();
  if ( a2 )
    goto LABEL_2;
  --CurrentThread->KernelApcDisable;
  p_Lock = (volatile signed __int64 *)&PROCESS[1].Header.Lock;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&PROCESS[1], 0LL);
  if ( !LODWORD(PROCESS[1].ActiveProcessors.StaticBitmap[8]) )
  {
    _m_prefetchw((char *)&PROCESS[1].DirectoryTableBase + 4);
    v2 = (_InterlockedOr((volatile signed __int32 *)&PROCESS[1].DirectoryTableBase + 1, 0x2000008u) & 0x2000000) == 0;
  }
  if ( (_InterlockedExchangeAdd64(p_Lock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(p_Lock);
  KeAbPostRelease((ULONG_PTR)p_Lock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v2 )
  {
LABEL_2:
    ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
    ExRundownCompleted((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
    if ( PROCESS[1].Affinity.StaticBitmap[16] && (PROCESS[1].DirectoryTableBase & 1) == 0 )
    {
      RtlInterlockedSetClearBits((volatile signed __int32 *)&PROCESS[1].DirectoryTableBase, 8, 32);
      PspSendProcessNotificationToJobChain(PROCESS, v20, PROCESS[1].Header.WaitListHead.Flink);
    }
    if ( PROCESS->SecureState.SecureHandle )
      KeRundownSecureProcess((__int64)PROCESS);
    if ( _bittest((const signed __int32 *)&PROCESS[1].DirectoryTableBase + 1, 0x12u) )
    {
      KeStackAttachProcess(PROCESS, &ApcState);
      if ( PROCESS[1].Affinity.StaticBitmap[28] )
        ObKillProcess((__int64)PROCESS);
      MmCleanProcessAddressSpace(PROCESS);
      KiUnstackDetachProcess(($115DCDF994C6370D29323EAB0E0C9502 *)&ApcState);
    }
    if ( PROCESS[2].Affinity.Bitmap[0] )
    {
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&PROCESS[2].Affinity.StaticBitmap[2], 0LL);
      ExFreePoolWithTag(*(PVOID *)(PROCESS[2].Affinity.Bitmap[0] + 8), 0);
      ExFreePoolWithTag((PVOID)PROCESS[2].Affinity.Bitmap[0], 0);
      PROCESS[2].Affinity.Bitmap[0] = 0LL;
      if ( (_InterlockedExchangeAdd64(
              (volatile signed __int64 *)&PROCESS[2].Affinity.StaticBitmap[2],
              0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&PROCESS[2].Affinity.StaticBitmap[2]);
      KeAbPostRelease((ULONG_PTR)&PROCESS[2].Affinity.StaticBitmap[2]);
      KeLeaveCriticalRegionThread((__int64)CurrentThread);
    }
    v5 = *(_QWORD **)&PROCESS[2].ThreadSeed[18];
    if ( v5 )
    {
      while ( 1 )
      {
        v6 = (_QWORD *)*v5;
        if ( *v5 )
          break;
        v7 = v5 + 1;
        v6 = (_QWORD *)v5[1];
        if ( v6 )
        {
LABEL_13:
          v5 = v6;
          *v7 = 0LL;
        }
        else
        {
          v8 = v5[2];
          SC_ENV::Free(v5);
          v9 = v8 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v9 )
            goto LABEL_17;
          v5 = (_QWORD *)v9;
        }
      }
      v7 = v5;
      goto LABEL_13;
    }
LABEL_17:
    *(_QWORD *)&PROCESS[2].ThreadSeed[18] = 0LL;
    v10 = *(_QWORD **)&PROCESS[2].ThreadSeed[26];
    if ( !v10 )
    {
LABEL_24:
      *(_QWORD *)&PROCESS[2].ThreadSeed[26] = 0LL;
      UserCetLogging = PROCESS->UserCetLogging;
      if ( UserCetLogging )
      {
        ExFreePoolWithTag(UserCetLogging, 0);
        PROCESS->UserCetLogging = 0LL;
      }
      if ( *(_QWORD *)&PROCESS[2].IdealProcessor[10] )
      {
        ExFreePoolWithTag(*(PVOID *)&PROCESS[2].IdealProcessor[10], 0);
        *(_QWORD *)&PROCESS[2].IdealProcessor[10] = 0LL;
      }
      v16 = (void *)PROCESS[1].Affinity.StaticBitmap[17];
      if ( v16 )
      {
        PROCESS[1].Affinity.StaticBitmap[17] = 0LL;
        ObfDereferenceObject(v16);
      }
      Next = PROCESS[1].SwapListEntry.Next;
      if ( Next )
      {
        ObfDereferenceObjectWithTag(Next, 0x72437350u);
        PROCESS[1].SwapListEntry.Next = 0LL;
      }
      if ( _bittest((const signed __int32 *)&PROCESS[1].DirectoryTableBase + 1, 0x12u) )
        KeSetProcess((__int64)PROCESS);
      if ( PROCESS[1].Affinity.StaticBitmap[16] )
      {
        PspRemoveProcessFromJobChain(PROCESS);
        PspNotifyEmptyJobsInJobChain(PROCESS);
      }
      Flink = PROCESS[1].Header.WaitListHead.Flink;
      if ( Flink )
        PspClearProcessThreadCidRefs(CurrentThread, Flink, PROCESS);
      return v2;
    }
    while ( 1 )
    {
      v11 = (_QWORD *)*v10;
      if ( *v10 )
        break;
      v12 = v10 + 1;
      v11 = (_QWORD *)v10[1];
      if ( v11 )
      {
LABEL_20:
        v10 = v11;
        *v12 = 0LL;
      }
      else
      {
        v13 = v10[2];
        SC_ENV::Free(v10);
        v14 = v13 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v14 )
          goto LABEL_24;
        v10 = (_QWORD *)v14;
      }
    }
    v12 = v10;
    goto LABEL_20;
  }
  v22 = ObReferenceProcessHandleTable(PROCESS);
  if ( v22 )
  {
    LOBYTE(v23) = 1;
    ExSweepHandleTable(PROCESS, v22, v23);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)&PROCESS[1].ProfileListHead.Blink);
  }
  return v2;
}
