/*
 * XREFs of MiInitializePagedPoolEvents @ 0x140B6FC8C
 * Callers:
 *     MiInitializeMemoryEvents @ 0x1408096D8 (MiInitializeMemoryEvents.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeResetEvent @ 0x14023EC60 (KeResetEvent.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiFreePoolPagesLeft @ 0x140299A08 (MiFreePoolPagesLeft.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char MiInitializePagedPoolEvents()
{
  struct _KTHREAD *CurrentThread; // rdi
  struct _KTHREAD *v1; // rsi
  __int64 v2; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v4; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  unsigned __int64 v9; // rbx
  char v10; // al
  $C71981A45BEB2B45F82C232A7085991E *v11; // rax
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  unsigned int v16; // [rsp+40h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v1 = KeGetCurrentThread();
  v2 = 0LL;
  _disable();
  AbEntrySummary = v1->AbEntrySummary;
  if ( v1->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C69598, (__int64)v1)) != 0 )
  {
    _BitScanForward(&v4, AbEntrySummary);
    v16 = v4;
    v1->AbEntrySummary = AbEntrySummary & ~(1 << v4);
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
    v2 = (__int64)(&v1[1].Process + 12 * v16);
    if ( (unsigned __int64)&qword_140C69598 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v1->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v2 + 8) = SessionId;
    *(_QWORD *)v2 = (unsigned __int64)&qword_140C69598 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C69598, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C69598, v2, (__int64)&qword_140C69598);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  v9 = MiFreePoolPagesLeft(6);
  if ( v9 < qword_140C65128 )
    KeResetEvent(qword_140C6B1D8);
  else
    KeSetEvent(qword_140C6B1D8, 0, 0);
  if ( v9 <= qword_140C65120 )
    KeSetEvent(qword_140C6B1D0, 0, 0);
  else
    KeResetEvent(qword_140C6B1D0);
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C69598, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C69598);
  LOBYTE(v11) = KeAbPostRelease((ULONG_PTR)&qword_140C69598);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v11 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v11->ApcState.ApcListHead[0].Flink != v11 )
      LOBYTE(v11) = KiCheckForKernelApcDelivery();
  }
  return (char)v11;
}
