__int64 MmCheckProcessShadow()
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbp
  struct _KTHREAD *v2; // rdi
  __int64 v3; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v5; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  unsigned __int8 v9; // bl
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rbp
  bool v13; // zf
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  unsigned int v17; // [rsp+60h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v2 = KeGetCurrentThread();
  v3 = 0LL;
  _disable();
  AbEntrySummary = v2->AbEntrySummary;
  if ( v2->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C65660, (__int64)v2)) != 0 )
  {
    _BitScanForward(&v5, AbEntrySummary);
    v17 = v5;
    v2->AbEntrySummary = AbEntrySummary & ~(1 << v5);
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
    v3 = (__int64)(&v2[1].Process + 12 * v17);
    if ( (unsigned __int64)&qword_140C65660 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v2->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v3 + 8) = SessionId;
    *(_QWORD *)v3 = (unsigned __int64)&qword_140C65660 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C65660, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C65660, 0, v3, (__int64)&qword_140C65660);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  v9 = MiLockWorkingSetShared((__int64)&Process[1].ActiveProcessors.StaticBitmap[26]);
  v10 = MiCheckProcessShadow((__int64)&Process[1].ActiveProcessors.StaticBitmap[26], 0x1Du);
  v11 = (__int64)&Process[1].ActiveProcessors.StaticBitmap[26];
  v12 = v10;
  MiUnlockWorkingSetShared(v11, v9);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C65660, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C65660);
  KeAbPostRelease((ULONG_PTR)&qword_140C65660);
  v13 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v13 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v12;
}
