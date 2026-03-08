/*
 * XREFs of MiTryLockVad @ 0x1403C0FF8
 * Callers:
 *     MiDeprioritizeVad @ 0x1403C0F1C (MiDeprioritizeVad.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiTryLockVad(__int64 a1, __int64 a2)
{
  ULONG_PTR v3; // rdi
  struct _KTHREAD *CurrentThread; // rsi
  ULONG_PTR v5; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v7; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  __int64 result; // rax
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  unsigned int v14; // [rsp+40h] [rbp+8h]

  if ( *(char *)(a1 + 1384) < 0 )
    return 0LL;
  v3 = a2 + 40;
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  _disable();
  AbEntrySummary = CurrentThread->AbEntrySummary;
  if ( CurrentThread->AbEntrySummary
    || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v3, (__int64)CurrentThread)) != 0 )
  {
    _BitScanForward(&v7, AbEntrySummary);
    v14 = v7;
    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v7);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v12 = *SchedulerAssist;
      do
      {
        v13 = v12;
        v12 = _InterlockedCompareExchange(SchedulerAssist, v12 & 0xFFDFFFFF, v12);
      }
      while ( v13 != v12 );
      if ( (v12 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v5 = (ULONG_PTR)(&CurrentThread[1].Process + 12 * v14);
    if ( v3 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v5 + 8) = SessionId;
    *(_QWORD *)v5 = v3 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
  {
    if ( v5 )
      KeAbPostReleaseEx(v3, v5);
    return 0LL;
  }
  result = 1LL;
  if ( v5 )
    *(_BYTE *)(v5 + 18) = 1;
  *(_BYTE *)(a1 + 1384) |= 0x80u;
  return result;
}
