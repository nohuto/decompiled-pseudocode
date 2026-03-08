/*
 * XREFs of ExAcquireAutoExpandPushLockShared @ 0x1402621D0
 * Callers:
 *     FsRtlLookupPerFileContext @ 0x1402FD1B0 (FsRtlLookupPerFileContext.c)
 *     MiDeletePagablePteRange @ 0x1403244A0 (MiDeletePagablePteRange.c)
 *     MiFreePhysicalPages @ 0x140647F94 (MiFreePhysicalPages.c)
 *     MiLockAwePagesShared @ 0x140648A68 (MiLockAwePagesShared.c)
 *     MiLockAweVadsShared @ 0x140648AC4 (MiLockAweVadsShared.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

ULONG_PTR __fastcall ExAcquireAutoExpandPushLockShared(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1)
{
  char v2; // r14
  __int64 v4; // rdi
  int v5; // esi
  struct _KTHREAD *CurrentThread; // rbp
  unsigned int AbEntrySummary; // eax
  unsigned int v8; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  int SessionId; // eax
  unsigned int v12; // eax
  ULONG_PTR v13; // rbx
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  unsigned __int64 v17; // r9
  unsigned int v18; // eax
  unsigned int v19; // ecx
  signed __int64 *v20; // rbp
  unsigned int v21; // [rsp+68h] [rbp+10h]

  v2 = BugCheckParameter1;
  v4 = 0LL;
  if ( (BugCheckParameter1 & 0xFFFFFFF8) != 0 )
    KeBugCheckEx(0x152u, (unsigned int)BugCheckParameter1, BugCheckParameter2, 0LL, 0LL);
  v5 = BugCheckParameter1 & 2;
  if ( (BugCheckParameter1 & 2) == 0 )
  {
    CurrentThread = KeGetCurrentThread();
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(BugCheckParameter2, CurrentThread)) != 0 )
    {
      _BitScanForward(&v8, AbEntrySummary);
      v21 = v8;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v8);
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
      v4 = (__int64)(&CurrentThread[1].Process + 12 * v21);
      if ( BugCheckParameter2 - qword_140C65668 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v4 + 8) = SessionId;
      *(_QWORD *)v4 = BugCheckParameter2 & 0x7FFFFFFFFFFFFFFCLL;
    }
  }
  v12 = *(_DWORD *)(BugCheckParameter2 + 8);
  if ( (v12 & 1) != 0 )
  {
    v17 = v12;
    v18 = (v12 >> 13) & 0x3FFFF;
    _BitScanReverse(&v19, v18);
    v20 = (signed __int64 *)(*(_QWORD *)(*((_QWORD *)KeGetCurrentPrcb()->ExSaPageArray + v19 - 2)
                                       + 8LL * (v18 ^ (1 << v19))
                                       + 8)
                           + 8 * ((v17 >> 4) & 0x1FF));
    if ( _InterlockedCompareExchange64(v20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v20, v2, v4, BugCheckParameter2);
    v13 = (ULONG_PTR)v20;
  }
  else
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx((signed __int64 *)BugCheckParameter2, v2, v4, BugCheckParameter2);
    v13 = BugCheckParameter2 | 1;
  }
  if ( !v5 )
    v13 |= 2uLL;
  if ( v4 )
    *(_BYTE *)(v4 + 18) = 1;
  return v13;
}
