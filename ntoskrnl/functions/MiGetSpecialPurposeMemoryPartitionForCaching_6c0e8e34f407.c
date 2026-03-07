__int64 __fastcall MiGetSpecialPurposeMemoryPartitionForCaching(__int64 a1, int a2)
{
  _QWORD *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rbp
  struct _KTHREAD *CurrentThread; // r14
  ULONG_PTR v6; // rbx
  __int64 v7; // rdi
  struct _KTHREAD *v8; // r15
  unsigned int AbEntrySummary; // eax
  unsigned int v10; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  int SessionId; // eax
  _QWORD *v16; // rdx
  unsigned int v19; // [rsp+60h] [rbp+8h]

  if ( (*(_DWORD *)(a1 + 4) & 0x80u) != 0 )
    return 0LL;
  v2 = (_QWORD *)(a1 + 16960);
  v3 = *(_QWORD *)(a1 + 16960);
  if ( v3 == a1 + 16960 )
    return 0LL;
  if ( a2 )
    return *(_QWORD *)(v3 - 8);
  CurrentThread = KeGetCurrentThread();
  v6 = a1 + 16992;
  v4 = 0LL;
  v7 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v8->AbEntrySummary;
  if ( v8->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1 + 16992, (__int64)v8)) != 0 )
  {
    _BitScanForward(&v10, AbEntrySummary);
    v19 = v10;
    v8->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v13 = *SchedulerAssist;
      do
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
      }
      while ( v14 != v13 );
      if ( (v13 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v7 = (__int64)(&v8[1].Process + 12 * v19);
    if ( v6 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v8->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = v6 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)v6, 0, v7, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v16 = (_QWORD *)*v2;
  if ( (_QWORD *)*v2 != v2 )
  {
    if ( _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(*(v16 - 1) + 200LL) + 32LL)) <= 1 )
      __fastfail(0xEu);
    v4 = *(v16 - 1);
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v6, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v6);
  KeAbPostRelease(v6);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  return v4;
}
