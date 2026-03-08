/*
 * XREFs of ExAcquireAutoExpandPushLockExclusive @ 0x14023A860
 * Callers:
 *     FsRtlRemovePerFileObjectContext @ 0x14023A530 (FsRtlRemovePerFileObjectContext.c)
 *     FsRtlInsertPerFileObjectContext @ 0x14023A9B0 (FsRtlInsertPerFileObjectContext.c)
 *     MiLockLoaderEntry @ 0x1402A6B58 (MiLockLoaderEntry.c)
 *     FsRtlInsertPerFileContext @ 0x1402F8610 (FsRtlInsertPerFileContext.c)
 *     FsRtlRemovePerFileContext @ 0x14053ABC0 (FsRtlRemovePerFileContext.c)
 *     FsRtlRemovePerStreamContext @ 0x14053ACC0 (FsRtlRemovePerStreamContext.c)
 *     MiFreePhysicalPages @ 0x140647F94 (MiFreePhysicalPages.c)
 *     MiLockAwePagesExclusive @ 0x140648A44 (MiLockAwePagesExclusive.c)
 *     MiLockAweVadsExclusive @ 0x140648A8C (MiLockAweVadsExclusive.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1406F3F30 (FsRtlTeardownPerStreamContexts.c)
 *     FsRtlTeardownPerFileContexts @ 0x140769590 (FsRtlTeardownPerFileContexts.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x1403CA3BC (ExpAcquireFannedOutPushLockExclusive.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall ExAcquireAutoExpandPushLockExclusive(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  __int64 v2; // rbx
  struct _KTHREAD *CurrentThread; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v6; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 result; // rax
  signed __int32 v11; // eax
  signed __int32 v12; // ett
  unsigned int v13; // [rsp+58h] [rbp+10h]

  v2 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, CurrentThread)) != 0 )
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
      v2 = (__int64)(&CurrentThread[1].Process + 12 * v13);
      if ( BugCheckParameter2 - qword_140C65668 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v2 + 8) = SessionId;
      *(_QWORD *)v2 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
    ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v2, BugCheckParameter2);
  result = *(unsigned int *)(BugCheckParameter2 + 8);
  if ( (result & 1) != 0 )
    result = ExpAcquireFannedOutPushLockExclusive((unsigned int)result & 0xFFFFFFF8, v2, BugCheckParameter2);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
