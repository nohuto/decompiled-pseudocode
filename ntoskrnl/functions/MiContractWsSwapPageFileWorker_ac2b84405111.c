void __fastcall MiContractWsSwapPageFileWorker(__int64 a1)
{
  unsigned int v2; // eax
  struct _KTHREAD *CurrentThread; // r12
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // r14
  char v7; // al
  volatile signed __int32 *v8; // rdi
  struct _KTHREAD *v9; // r13
  unsigned int AbEntrySummary; // eax
  unsigned int v11; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  int SessionId; // eax
  bool v17; // zf
  _QWORD v18[18]; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v19; // [rsp+D0h] [rbp+67h]

  v2 = MiWsSwapPageFileNumber(a1);
  CurrentThread = KeGetCurrentThread();
  v5 = *(_QWORD *)(v4 + 8LL * v2 + 17056);
  memset(v18, 0, 0x58uLL);
  v18[3] = a1;
  v18[4] = -1LL;
  v6 = 0LL;
  v7 = *(_BYTE *)(v5 + 204);
  v8 = (volatile signed __int32 *)(a1 + 1168);
  v18[5] = 0x10000LL;
  BYTE4(v18[9]) = v7 & 0xF;
  LOWORD(v18[6]) = 0;
  v18[8] = &v18[7];
  v18[7] = &v18[7];
  BYTE2(v18[6]) = 6;
  HIDWORD(v18[6]) = 0;
  --CurrentThread->SpecialApcDisable;
  v9 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v9->AbEntrySummary;
  if ( v9->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1 + 1168, (__int64)v9)) != 0 )
  {
    _BitScanForward(&v11, AbEntrySummary);
    v19 = v11;
    v9->AbEntrySummary = AbEntrySummary & ~(1 << v11);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v14 = *SchedulerAssist;
      do
      {
        v15 = v14;
        v14 = _InterlockedCompareExchange(SchedulerAssist, v14 & 0xFFDFFFFF, v14);
      }
      while ( v15 != v14 );
      if ( (v14 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v6 = (__int64)(&v9[1].Process + 12 * v19);
    if ( (unsigned __int64)v8 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v6 + 8) = SessionId;
    *(_QWORD *)v6 = (unsigned __int64)v8 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64(v8, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 1168), v6, a1 + 1168);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  MiQueuePageFileExtension((__int64)v18, 1LL, 0x11u);
  KeWaitForSingleObject(&v18[6], Executive, 0, 0, 0LL);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 1168));
  KeAbPostRelease(a1 + 1168);
  v17 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v17 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  _InterlockedExchange((volatile __int32 *)(a1 + 1160), 0);
  PsDereferencePartition(*(_QWORD *)(a1 + 200));
}
