void __fastcall MiDereferenceExtendInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rdi
  void *v3; // rsi
  struct _KTHREAD *v6; // rbp
  __int64 v7; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v9; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  bool v14; // zf
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  unsigned int v17; // [rsp+60h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v6 = KeGetCurrentThread();
  v7 = 0LL;
  _disable();
  AbEntrySummary = v6->AbEntrySummary;
  if ( v6->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(&qword_140C651D0, v6)) != 0 )
  {
    _BitScanForward(&v9, AbEntrySummary);
    v17 = v9;
    v6->AbEntrySummary = AbEntrySummary & ~(1 << v9);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v15 = *SchedulerAssist;
      do
      {
        v16 = v15;
        v15 = _InterlockedCompareExchange(SchedulerAssist, v15 & 0xFFDFFFFF, v15);
      }
      while ( v16 != v15 );
      if ( (v15 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v7 = (__int64)(&v6[1].Process + 12 * v17);
    if ( (unsigned __int64)&qword_140C651D0 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v6->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = (unsigned __int64)&qword_140C651D0 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C651D0, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C651D0, v7, (__int64)&qword_140C651D0);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  if ( !--*(_DWORD *)(*(_QWORD *)(a1 + 120) + 8LL) )
  {
    v3 = *(void **)(a1 + 120);
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C651D0, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C651D0);
  KeAbPostRelease((ULONG_PTR)&qword_140C651D0);
  v14 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
