/*
 * XREFs of MiReferenceRemovePartition @ 0x140619970
 * Callers:
 *     MmRemovePhysicalMemory @ 0x140A2A520 (MmRemovePhysicalMemory.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiReferencePagePartition @ 0x1406271E4 (MiReferencePagePartition.c)
 */

__int64 __fastcall MiReferenceRemovePartition(unsigned __int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rsi
  struct _KTHREAD *v5; // rdi
  __int64 v6; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  int SessionId; // eax
  __int64 v14; // rax
  unsigned int v15; // ebx
  bool v16; // zf
  unsigned int v18; // [rsp+70h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeGetCurrentThread();
  v6 = 0LL;
  _disable();
  AbEntrySummary = v5->AbEntrySummary;
  if ( v5->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C6B198, (__int64)v5)) != 0 )
  {
    _BitScanForward(&v8, AbEntrySummary);
    v18 = v8;
    v5->AbEntrySummary = AbEntrySummary & ~(1 << v8);
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
    v6 = (__int64)(&v5[1].Process + 12 * v18);
    if ( (unsigned __int64)&qword_140C6B198 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v5->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v6 + 8) = SessionId;
    *(_QWORD *)v6 = (unsigned __int64)&qword_140C6B198 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)&qword_140C6B198, 0, v6, (__int64)&qword_140C6B198);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  if ( a1 <= qword_140C65820 && _bittest64((const signed __int64 *)(48 * a1 - 0x21FFFFFFFFD8LL), 0x36u) )
  {
    v14 = MiReferencePagePartition(48 * a1 - 0x220000000000LL, 0LL);
    if ( v14 )
    {
      *a2 = v14;
      v15 = 0;
    }
    else
    {
      v15 = -1073741558;
    }
  }
  else
  {
    v15 = -1073741811;
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)&qword_140C6B198, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)&qword_140C6B198);
  KeAbPostRelease((ULONG_PTR)&qword_140C6B198);
  v16 = CurrentThread->SpecialApcDisable++ == -1;
  if ( v16 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  return v15;
}
