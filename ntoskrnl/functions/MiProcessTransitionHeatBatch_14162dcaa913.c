char __fastcall MiProcessTransitionHeatBatch(unsigned int *a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v3; // rdi
  ULONG_PTR v4; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v6; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  int SessionId; // eax
  $C71981A45BEB2B45F82C232A7085991E *v12; // rax
  unsigned int *i; // rdx
  unsigned __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r8
  unsigned __int64 v17; // r9
  const signed __int64 *v18; // r8
  unsigned int v21; // [rsp+58h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v3 = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  AbEntrySummary = v3->AbEntrySummary;
  if ( v3->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C6B198, (__int64)v3)) != 0 )
  {
    _BitScanForward(&v6, AbEntrySummary);
    v21 = v6;
    v3->AbEntrySummary = AbEntrySummary & ~(1 << v6);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v9 = *SchedulerAssist;
      do
      {
        v10 = v9;
        v9 = _InterlockedCompareExchange(SchedulerAssist, v9 & 0xFFDFFFFF, v9);
      }
      while ( v10 != v9 );
      if ( (v9 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v4 = (ULONG_PTR)(&v3[1].Process + 12 * v21);
    if ( (unsigned __int64)&qword_140C6B198 - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v3->ApcState.Process);
    *(_DWORD *)(v4 + 8) = SessionId;
    *(_QWORD *)v4 = (unsigned __int64)&qword_140C6B198 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( !_InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 17LL, 0LL)
    || (LOBYTE(v12) = ExfTryAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B198, 0), (_BYTE)v12) )
  {
    if ( v4 )
      *(_BYTE *)(v4 + 18) = 1;
    for ( i = a1 + 4; ; i += 2 )
    {
      if ( i >= &a1[2 * a1[1] + 4] )
      {
        MiNotifyPageHeat(a1);
        goto LABEL_29;
      }
      v14 = *(_QWORD *)i >> 12;
      v15 = (*(_QWORD *)i & 0x3FFLL) + 1;
      v16 = (*(_QWORD *)i >> 10) & 3LL;
      if ( ((*(_QWORD *)i >> 10) & 3) != 0 )
      {
        do
        {
          v15 <<= 9;
          v14 >>= 9;
          LODWORD(v16) = v16 - 1;
        }
        while ( (_DWORD)v16 );
      }
      v17 = v15 + v14;
      if ( v14 < v15 + v14 )
        break;
LABEL_26:
      ;
    }
    v18 = (const signed __int64 *)(48 * v14 - 0x21FFFFFFFFD8LL);
    while ( v14 <= qword_140C65820 && _bittest64(v18, 0x36u) )
    {
      ++v14;
      v18 += 6;
      if ( v14 >= v17 )
        goto LABEL_26;
    }
LABEL_29:
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
    LOBYTE(v12) = KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
  }
  else if ( v4 )
  {
    LOBYTE(v12) = KeAbPostReleaseEx((ULONG_PTR)&qword_140C6B198, v4);
  }
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v12 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != v12 )
      LOBYTE(v12) = KiCheckForKernelApcDelivery();
  }
  return (char)v12;
}
