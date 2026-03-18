/*
 * XREFs of MiInitializePagedPoolEvents @ 0x140B73D5C
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14081E318 (MiInitializeMemoryEvents.c)
 * Callees:
 *     MiFreePoolPagesLeft @ 0x14021DC80 (MiFreePoolPagesLeft.c)
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     KeSetEvent @ 0x14023C5C0 (KeSetEvent.c)
 *     MmGetSessionIdEx @ 0x1402A1600 (MmGetSessionIdEx.c)
 *     KeResetEvent @ 0x1402AFB70 (KeResetEvent.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FCE10 (ExfAcquirePushLockExclusiveEx.c)
 *     KiCheckForKernelApcDelivery @ 0x14030F640 (KiCheckForKernelApcDelivery.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x14032F8C8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiInitializePagedPoolEvents(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v2; // rdi
  __int64 v3; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v5; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  unsigned __int64 v10; // rbx
  char v11; // al
  $C71981A45BEB2B45F82C232A7085991E *v12; // rax
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  unsigned int v17; // [rsp+40h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v2 = KeGetCurrentThread();
  v3 = 0LL;
  _disable();
  AbEntrySummary = v2->AbEntrySummary;
  if ( v2->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1, (__int64)v2)) != 0 )
  {
    _BitScanForward(&v5, AbEntrySummary);
    v17 = v5;
    v2->AbEntrySummary = AbEntrySummary & ~(1 << v5);
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
    v3 = (__int64)(&v2[1].Process + 12 * v17);
    if ( (unsigned __int64)&qword_140C69A18 - qword_140C65AE8 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v2->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v3 + 8) = SessionId;
    *(_QWORD *)v3 = (unsigned __int64)&qword_140C69A18 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C69A18, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_140C69A18, v3, (__int64)&qword_140C69A18);
  if ( v3 )
    *(_BYTE *)(v3 + 18) = 1;
  v10 = MiFreePoolPagesLeft(6);
  if ( v10 < qword_140C655A8 )
    KeResetEvent(qword_140C6B618);
  else
    KeSetEvent(qword_140C6B618, 0, 0);
  if ( v10 <= qword_140C655A0 )
    KeSetEvent(qword_140C6B610, 0, 0);
  else
    KeResetEvent(qword_140C6B610);
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C69A18, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C69A18);
  LOBYTE(v12) = KeAbPostRelease((ULONG_PTR)&qword_140C69A18);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v12 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != v12 )
      LOBYTE(v12) = KiCheckForKernelApcDelivery();
  }
  return (char)v12;
}
