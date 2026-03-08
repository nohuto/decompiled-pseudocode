/*
 * XREFs of MiClearPartitionPageBitMap @ 0x1406569F0
 * Callers:
 *     MiInsertPartitionPages @ 0x140657EB8 (MiInsertPartitionPages.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiUnlockDynamicMemoryExclusive @ 0x140619B70 (MiUnlockDynamicMemoryExclusive.c)
 *     MiActOnPartitionNodePages @ 0x140655AB0 (MiActOnPartitionNodePages.c)
 *     MiDeletePartitionPageNodes @ 0x140656E28 (MiDeletePartitionPageNodes.c)
 *     MiMakePartitionMemoryBlock @ 0x140A4242C (MiMakePartitionMemoryBlock.c)
 */

char __fastcall MiClearPartitionPageBitMap(__int64 a1, _QWORD **a2)
{
  __int64 v4; // rdi
  struct _KTHREAD *CurrentThread; // r12
  struct _KTHREAD *v6; // rsi
  __int64 v7; // rbx
  unsigned int AbEntrySummary; // eax
  unsigned int v9; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  int SessionId; // eax
  KIRQL v15; // al
  _QWORD *v16; // rcx
  _QWORD *v17; // rbx
  unsigned __int64 v18; // rdi
  _QWORD *v19; // rax
  __int64 v20; // r10
  _QWORD *v21; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v23; // r9
  int v24; // eax
  _DWORD *v25; // r8
  bool v26; // zf
  __int16 *v28[10]; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v29; // [rsp+A0h] [rbp+8h]

  memset(v28, 0, 0x48uLL);
  v28[4] = 0LL;
  v4 = a1 + 216;
  v28[0] = (__int16 *)a1;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v6 = KeGetCurrentThread();
  v7 = 0LL;
  _disable();
  AbEntrySummary = v6->AbEntrySummary;
  if ( v6->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(a1 + 216, (__int64)v6)) != 0 )
  {
    _BitScanForward(&v9, AbEntrySummary);
    v29 = v9;
    v6->AbEntrySummary = AbEntrySummary & ~(1 << v9);
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
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v7 = (__int64)(&v6[1].Process + 12 * v29);
    if ( (unsigned __int64)(v4 - qword_140C65668) >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v6->ApcState.Process);
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = v4 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v7, v4);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v15 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 224));
  v16 = *a2;
  v17 = 0LL;
  v18 = v15;
  while ( v16 )
  {
    v17 = v16;
    v16 = (_QWORD *)*v16;
  }
  while ( v17 )
  {
    v19 = (_QWORD *)v17[1];
    v20 = (__int64)v17;
    v21 = v17;
    if ( v19 )
    {
      do
      {
        v17 = v19;
        v19 = (_QWORD *)*v19;
      }
      while ( v19 );
    }
    else
    {
      while ( 1 )
      {
        v17 = (_QWORD *)(v17[2] & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v17 || (_QWORD *)*v17 == v21 )
          break;
        v21 = v17;
      }
    }
    MiActOnPartitionNodePages(v20, 9u, 0, v28);
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 224));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v18 <= 0xFu && CurrentIrql >= 2u )
    {
      v23 = KeGetCurrentPrcb();
      v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v18 + 1));
      v25 = v23->SchedulerAssist;
      v26 = (v24 & v25[5]) == 0;
      v25[5] &= v24;
      if ( v26 )
        KiRemoveSystemWorkPriorityKick((__int64)v23);
    }
  }
  __writecr8(v18);
  MiDeletePartitionPageNodes(&v28[4]);
  if ( (unsigned __int16 *)a1 != MiSystemPartition )
    MiMakePartitionMemoryBlock(a1);
  return MiUnlockDynamicMemoryExclusive(a1, (__int64)CurrentThread);
}
