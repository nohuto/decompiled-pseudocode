void __fastcall MiTrimUnusedPageFileRegionsWorker(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v3; // rsi
  ULONG_PTR v4; // r14
  __int64 v5; // rdi
  struct _KTHREAD *v6; // r15
  unsigned int AbEntrySummary; // eax
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  int SessionId; // eax
  bool v14; // zf
  unsigned int v15; // eax
  unsigned int LockNV; // edi
  __int64 *v17; // r15
  unsigned int v18; // r13d
  __int64 v19; // r14
  unsigned int v20; // eax
  unsigned __int64 updated; // rdi
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r15
  int v24; // ebx
  signed __int32 v25[8]; // [rsp+8h] [rbp-100h] BYREF
  NTSTATUS Status; // [rsp+58h] [rbp-B0h]
  unsigned int v27; // [rsp+5Ch] [rbp-ACh]
  struct _KEVENT Event; // [rsp+60h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+78h] [rbp-90h]
  __int128 v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+A0h] [rbp-68h]
  struct _KTHREAD *v32; // [rsp+B0h] [rbp-58h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B8h] [rbp-50h] BYREF
  int v34[24]; // [rsp+C8h] [rbp-40h] BYREF
  __int128 InputBuffer; // [rsp+128h] [rbp+20h] BYREF
  unsigned __int64 v36; // [rsp+138h] [rbp+30h]

  memset(v34, 0, 0x58uLL);
  v36 = 0LL;
  Event.Header.WaitListHead = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  InputBuffer = 0LL;
  IoStatusBlock = 0LL;
  CurrentThread = KeGetCurrentThread();
  v32 = CurrentThread;
  v3 = MiSwizzleInvalidPte(0LL);
  if ( ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 992)) )
  {
    v27 = 0;
    --CurrentThread->SpecialApcDisable;
    v4 = a1 + 1168;
    v5 = 0LL;
    v6 = KeGetCurrentThread();
    _disable();
    AbEntrySummary = v6->AbEntrySummary;
    if ( v6->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1 + 1168, (__int64)v6)) != 0 )
    {
      _BitScanForward(&v8, AbEntrySummary);
      v27 = v8;
      v6->AbEntrySummary = AbEntrySummary & ~(1 << v8);
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
      if ( SchedulerAssist )
      {
        _m_prefetchw(SchedulerAssist);
        v11 = *SchedulerAssist;
        do
        {
          v12 = v11;
          v11 = _InterlockedCompareExchange(SchedulerAssist, v11 & 0xFFDFFFFF, v11);
        }
        while ( v12 != v11 );
        if ( (v11 & 0x200000) != 0 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v5 = (__int64)(&v6[1].Process + 12 * v27);
      if ( v4 - qword_140C65668 >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
      *(_DWORD *)(v5 + 8) = SessionId;
      *(_QWORD *)v5 = v4 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1168), v5, a1 + 1168);
    if ( v5 )
      *(_BYTE *)(v5 + 18) = 1;
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    v15 = *(_DWORD *)(a1 + 17048);
    LockNV = 0;
    Event.Header.LockNV = 0;
    if ( v15 )
    {
      v17 = (__int64 *)(a1 + 17056);
      v18 = v15;
      v31 = a1 + 17056;
      do
      {
        v19 = *v17;
        if ( (*(_WORD *)(*v17 + 204) & 0x850) == 0x10 )
        {
          Event.Header.WaitListHead.Flink = (struct _LIST_ENTRY *)393216;
          *(_QWORD *)&v29 = &Event.Header.WaitListHead.Blink;
          Event.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&Event.Header.WaitListHead.Blink;
          v30 = LockNV | 0x200000000000uLL;
          *((_QWORD *)&v29 + 1) = a1;
          v20 = MiPageFileLargestBitmapsRun(v19);
          if ( v20 >= DWORD1(v30) )
          {
            do
            {
              MiQueueSyncModifiedWriterApc(
                a1,
                (__int64)v34,
                (__int64)MiTrimUnusedPageFileRegionsApc,
                (__int64)&Event.Header.WaitListHead,
                &Event.Header.WaitListHead);
              if ( !HIDWORD(v30) )
                break;
              *((_QWORD *)&InputBuffer + 1) = (unsigned __int64)DWORD2(v30) << 12;
              v36 = (unsigned __int64)HIDWORD(v30) << 12;
              *(_QWORD *)&InputBuffer = 0x100000000LL;
              KeResetEvent((PRKEVENT)&Event.Header.WaitListHead);
              Status = ZwFsControlFile(
                         *(HANDLE *)(v19 + 224),
                         0LL,
                         (PIO_APC_ROUTINE)MiIrpCompletionApcRoutine,
                         &Event.Header.WaitListHead,
                         &IoStatusBlock,
                         0x98208u,
                         &InputBuffer,
                         0x18u,
                         0LL,
                         0);
              if ( Status == 259 )
              {
                KeWaitForSingleObject(&Event.Header.WaitListHead, Executive, 0, 0, 0LL);
                Status = IoStatusBlock.Status;
              }
              updated = MiTransferSoftwarePte(v3, v19, DWORD2(v30), 3);
              v22 = updated;
              if ( qword_140C657C0 )
              {
                if ( (updated & 0x10) != 0 )
                  v22 = updated & 0xFFFFFFFFFFFFFFEFuLL;
                else
                  v22 = updated & ~qword_140C657C0;
              }
              v23 = HIDWORD(v22);
              if ( HIDWORD(v30) )
              {
                v24 = HIDWORD(v30);
                do
                {
                  MiReleasePageFileInfo(a1, updated, 2);
                  updated = MiUpdatePageFileHighInPte(updated, ++v23);
                  --v24;
                }
                while ( v24 );
              }
              if ( Status < 0 )
                break;
              KeResetEvent((PRKEVENT)&Event.Header.WaitListHead);
              *((_QWORD *)&v30 + 1) = (unsigned int)(HIDWORD(v30) + DWORD2(v30));
            }
            while ( (unsigned __int64)DWORD2(v30) < *(_QWORD *)v19 );
            LockNV = Event.Header.LockNV;
            v17 = (__int64 *)v31;
          }
        }
        ++LockNV;
        ++v17;
        Event.Header.LockNV = LockNV;
        v31 = (__int64)v17;
      }
      while ( LockNV < v18 );
      CurrentThread = v32;
      v4 = a1 + 1168;
    }
    --CurrentThread->SpecialApcDisable;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v4);
    KeAbPostRelease(v4);
    v14 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    MiContractWsSwapPageFile(a1);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(a1 + 992));
    *(_QWORD *)(a1 + 1120) = KiQueryUnbiasedInterruptTime();
    _InterlockedOr(v25, 0);
    *(_QWORD *)(a1 + 1112) = 0LL;
  }
  PsDereferencePartition(*(_QWORD *)(a1 + 200));
}
