/*
 * XREFs of MiSetVadDeleted @ 0x140332ED8
 * Callers:
 *     MiDeleteVad @ 0x1407C82E0 (MiDeleteVad.c)
 *     MiCoalescePlaceholderAllocations @ 0x140A2F378 (MiCoalescePlaceholderAllocations.c)
 *     MiFinishPlaceholderVadReplacement @ 0x140A45098 (MiFinishPlaceholderVadReplacement.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MiSetVadFlags @ 0x140330D00 (MiSetVadFlags.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

char __fastcall MiSetVadDeleted(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rsi
  _KPROCESS *Process; // rbx
  ULONG_PTR v4; // rbx
  __int64 v5; // rdi
  struct _KTHREAD *v6; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  $C71981A45BEB2B45F82C232A7085991E *v12; // rax
  signed __int32 v14; // eax
  signed __int32 v15; // ett
  unsigned int v17; // [rsp+58h] [rbp+10h]

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  --CurrentThread->SpecialApcDisable;
  v4 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
  v5 = 0LL;
  v6 = KeGetCurrentThread();
  _disable();
  AbEntrySummary = v6->AbEntrySummary;
  if ( v6->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v4, v6)) != 0 )
  {
    _BitScanForward(&v8, AbEntrySummary);
    v17 = v8;
    v6->AbEntrySummary = AbEntrySummary & ~(1 << v8);
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v5 = (__int64)(&v6[1].Process + 12 * v17);
    if ( v4 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v6->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v5 + 8) = SessionId;
    *(_QWORD *)v5 = v4 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v5, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  MiSetVadFlags(a1, 2LL, 1);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  LOBYTE(v12) = KeAbPostRelease(v4);
  if ( CurrentThread->SpecialApcDisable++ == -1 )
  {
    v12 = &CurrentThread->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v12->ApcState.ApcListHead[0].Flink != v12 )
      LOBYTE(v12) = KiCheckForKernelApcDelivery();
  }
  return (char)v12;
}
