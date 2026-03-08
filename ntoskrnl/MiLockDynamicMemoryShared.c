/*
 * XREFs of MiLockDynamicMemoryShared @ 0x1402DAC90
 * Callers:
 *     MmPrefetchPagesEx @ 0x1406A387C (MmPrefetchPagesEx.c)
 *     MmQueryPfnList @ 0x1406E0A60 (MmQueryPfnList.c)
 *     MiPfPrepareSequentialReadList @ 0x1406EBE40 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x1407C42F0 (MiPfPrepareReadList.c)
 *     MiGetPhysicalMemoryRanges @ 0x140836318 (MiGetPhysicalMemoryRanges.c)
 *     MiAddPhysicalMemory @ 0x140A289D8 (MiAddPhysicalMemory.c)
 *     MiMapNewPfns @ 0x140A29C20 (MiMapNewPfns.c)
 *     MmRelocatePfnList @ 0x140A39D10 (MmRelocatePfnList.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

signed __int64 __fastcall MiLockDynamicMemoryShared(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v6; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int64 result; // rax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned int v13; // [rsp+30h] [rbp+8h]

  --*(_WORD *)(a2 + 486);
  v2 = a1 + 216;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1 + 216, CurrentThread)) != 0 )
  {
    _BitScanForward(&v6, AbEntrySummary);
    v13 = v6;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v6);
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v4 = (__int64)(&CurrentThread[1].Process + 12 * v13);
    if ( (unsigned __int64)(v2 - qword_140C65668) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v4 + 8) = SessionId;
    *(_QWORD *)v4 = v2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  result = _InterlockedCompareExchange64((volatile signed __int64 *)v2, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((signed __int64 *)v2, 0, v4, v2);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  return result;
}
