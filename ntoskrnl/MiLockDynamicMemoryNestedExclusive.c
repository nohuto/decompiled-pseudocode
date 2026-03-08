/*
 * XREFs of MiLockDynamicMemoryNestedExclusive @ 0x140619288
 * Callers:
 *     MiRemovePhysicalMemory @ 0x140A29F5C (MiRemovePhysicalMemory.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 MiLockDynamicMemoryNestedExclusive()
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v1; // rbx
  unsigned __int64 result; // rax
  unsigned int v3; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  int SessionId; // eax
  unsigned int v10; // [rsp+30h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v1 = 0LL;
  _disable();
  LODWORD(result) = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (result = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C6B198, (__int64)CurrentThread), (_DWORD)result) )
  {
    _BitScanForward(&v3, result);
    v10 = v3;
    CurrentThread->AbEntrySummary = result & ~(1 << v3);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v6 = *SchedulerAssist;
      do
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange(SchedulerAssist, v6 & 0xFFDFFFFF, v6);
      }
      while ( v7 != v6 );
      if ( (v6 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v1 = (__int64)(&CurrentThread[1].Process + 12 * v10);
    if ( (unsigned __int64)&qword_140C6B198 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v1 + 8) = SessionId;
    result = (unsigned __int64)&qword_140C6B198 & 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)v1 = (unsigned __int64)&qword_140C6B198 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C6B198, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140C6B198, v1, (__int64)&qword_140C6B198);
  if ( v1 )
    *(_BYTE *)(v1 + 18) = 1;
  return result;
}
