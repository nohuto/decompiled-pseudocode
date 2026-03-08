/*
 * XREFs of LOCK_PAGE_TABLE_COMMITMENT @ 0x14034CD5C
 * Callers:
 *     MiAllocateFromSubAllocatedRegion @ 0x1406A3620 (MiAllocateFromSubAllocatedRegion.c)
 *     MiFreeToSubAllocatedRegion @ 0x1406A5278 (MiFreeToSubAllocatedRegion.c)
 *     MmAssignProcessToJob @ 0x1407000C4 (MmAssignProcessToJob.c)
 *     MiAllocateNewSubAllocatedRegion @ 0x140756084 (MiAllocateNewSubAllocatedRegion.c)
 *     MiInsertVadCharges @ 0x1407D6A70 (MiInsertVadCharges.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall LOCK_PAGE_TABLE_COMMITMENT(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v4; // rbx
  __int64 result; // rax
  unsigned int v6; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  unsigned int v12; // [rsp+30h] [rbp+8h]

  --*(_WORD *)(a1 + 486);
  v2 = a2 + 1232;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  _disable();
  LODWORD(result) = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary || (result = KiAbTryReclaimOrphanedEntries(v2, CurrentThread), (_DWORD)result) )
  {
    _BitScanForward(&v6, result);
    v12 = v6;
    CurrentThread->AbEntrySummary = result & ~(1 << v6);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v10 = *SchedulerAssist;
      do
      {
        v11 = v10;
        v10 = _InterlockedCompareExchange(SchedulerAssist, v10 & 0xFFDFFFFF, v10);
      }
      while ( v11 != v10 );
      if ( (v10 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v4 = (__int64)(&CurrentThread[1].Process + 12 * v12);
    if ( (unsigned __int64)(v2 - qword_140C65668) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v4 + 8) = SessionId;
    result = v2 & 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)v4 = v2 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    result = ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v2, v4, v2);
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  return result;
}
