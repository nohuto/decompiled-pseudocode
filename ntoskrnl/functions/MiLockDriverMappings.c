unsigned __int64 __fastcall MiLockDriverMappings(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // rbx
  unsigned __int64 result; // rax
  unsigned int v4; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  signed __int32 v9; // eax
  signed __int32 v10; // ett
  unsigned int v11; // [rsp+30h] [rbp+8h]

  --*(_WORD *)(a1 + 486);
  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  _disable();
  LODWORD(result) = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (result = KiAbTryReclaimOrphanedEntries((__int64)&qword_140C655B8, (__int64)CurrentThread), (_DWORD)result) )
  {
    _BitScanForward(&v4, result);
    v11 = v4;
    CurrentThread->AbEntrySummary = result & ~(1 << v4);
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
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v2 = (__int64)(&CurrentThread[1].Process + 12 * v11);
    if ( (unsigned __int64)&qword_140C655B8 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v2 + 8) = SessionId;
    result = (unsigned __int64)&qword_140C655B8 & 0x7FFFFFFFFFFFFFFCLL;
    *(_QWORD *)v2 = (unsigned __int64)&qword_140C655B8 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C655B8, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140C655B8, v2, (__int64)&qword_140C655B8);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
