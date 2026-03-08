/*
 * XREFs of KiForceSymbolReferences @ 0x140B92408
 * Callers:
 *     KiInitSystem @ 0x140B5EFDC (KiInitSystem.c)
 * Callees:
 *     KeAbPostReleaseEx @ 0x140248520 (KeAbPostReleaseEx.c)
 *     ExTryAcquireSpinLockExclusiveAtDpcLevel @ 0x140305AB0 (ExTryAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 KiForceSymbolReferences()
{
  struct _KTHREAD *CurrentThread; // rdi
  ULONG_PTR v1; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v3; // ecx
  struct _KPRCB *CurrentPrcb; // r8
  signed __int32 *SchedulerAssist; // rdx
  signed __int32 v6; // eax
  signed __int32 v7; // ett
  int SessionId; // eax
  signed __int8 v9; // cf
  unsigned __int8 CurrentIrql; // bl
  _DWORD *v11; // r9
  int v12; // eax
  unsigned __int8 v13; // al
  struct _KPRCB *v14; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax
  unsigned int v19; // [rsp+40h] [rbp+8h]
  ULONG_PTR BugCheckParameter2; // [rsp+50h] [rbp+18h] BYREF

  BugCheckParameter2 = 0LL;
  if ( !KeGetPcr()->Prcb.Number )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = 0LL;
    _disable();
    AbEntrySummary = CurrentThread->AbEntrySummary;
    if ( CurrentThread->AbEntrySummary
      || (AbEntrySummary = KiAbTryReclaimOrphanedEntries((__int64)&BugCheckParameter2, (__int64)CurrentThread)) != 0 )
    {
      _BitScanForward(&v3, AbEntrySummary);
      v19 = v3;
      CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v3);
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
      v1 = (ULONG_PTR)(&CurrentThread[1].Process + 12 * v19);
      if ( (unsigned __int64)&BugCheckParameter2 - qword_140C65668 < 0x8000000000LL )
        SessionId = MmGetSessionIdEx((__int64)CurrentThread->ApcState.Process);
      else
        SessionId = -1;
      *(_DWORD *)(v1 + 8) = SessionId;
      *(_QWORD *)v1 = &BugCheckParameter2;
    }
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&BugCheckParameter2, 0LL);
    if ( v1 )
    {
      if ( v9 )
        KeAbPostReleaseEx((ULONG_PTR)&BugCheckParameter2, v1);
      else
        *(_BYTE *)(v1 + 18) = 1;
    }
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    v11 = KeGetCurrentPrcb()->SchedulerAssist;
    v12 = 4;
    if ( CurrentIrql != 2 )
      v12 = (-1LL << (CurrentIrql + 1)) & 4;
    v11[5] |= v12;
  }
  ExTryAcquireSpinLockExclusiveAtDpcLevel();
  if ( KiIrqlFlags )
  {
    v13 = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
    {
      v14 = KeGetCurrentPrcb();
      v15 = v14->SchedulerAssist;
      v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
      v17 = (v16 & v15[5]) == 0;
      v15[5] &= v16;
      if ( v17 )
        KiRemoveSystemWorkPriorityKick((__int64)v14);
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
