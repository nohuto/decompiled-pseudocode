/*
 * XREFs of MiGetPartitionNodeInformation @ 0x140657AE0
 * Callers:
 *     MmFillEtwNodeInformation @ 0x140463310 (MmFillEtwNodeInformation.c)
 *     MmManagePartitionNodeInformation @ 0x140A42D74 (MmManagePartitionNodeInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     MiSearchNumaNodeTable @ 0x140319DD0 (MiSearchNumaNodeTable.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140333520 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiGetPartitionNodeInformation(__int64 a1, unsigned int a2, _QWORD *a3)
{
  __int64 v5; // rsi
  __int64 v6; // r12
  struct _KTHREAD *CurrentThread; // r13
  __int64 v8; // r15
  struct _KTHREAD *v9; // rbp
  __int64 v10; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v12; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v15; // eax
  signed __int32 v16; // ett
  int SessionId; // eax
  volatile LONG *v18; // rbp
  unsigned __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rbp
  _QWORD *v24; // rsi
  _QWORD *v25; // rax
  __int64 v26; // r11
  __int64 v27; // r10
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rax
  unsigned __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v37; // r10
  _DWORD *v38; // r9
  int v39; // eax
  bool v40; // zf
  __int64 v41; // [rsp+28h] [rbp-40h]
  unsigned int v43; // [rsp+78h] [rbp+10h]
  __int64 v44; // [rsp+88h] [rbp+20h]

  v5 = a1;
  v6 = *(_QWORD *)(a1 + 16) + 25408LL * a2;
  memset(a3, 0, 0x48uLL);
  v44 = 0LL;
  if ( KeGetCurrentIrql() >= 2u )
  {
    CurrentThread = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v8 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v9 = KeGetCurrentThread();
    v10 = v5 + 216;
    _disable();
    AbEntrySummary = v9->AbEntrySummary;
    if ( v9->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v10, (__int64)v9)) != 0 )
    {
      _BitScanForward(&v12, AbEntrySummary);
      v43 = v12;
      v9->AbEntrySummary = AbEntrySummary & ~(1 << v12);
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
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
      _enable();
      v8 = (__int64)(&v9[1].Process + 12 * v43);
      if ( (unsigned __int64)(v10 - qword_140C65668) >= 0x8000000000LL )
        SessionId = -1;
      else
        SessionId = MmGetSessionIdEx((__int64)v9->ApcState.Process);
      *(_DWORD *)(v8 + 8) = SessionId;
      *(_QWORD *)v8 = v10 & 0x7FFFFFFFFFFFFFFCLL;
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, v8, v10);
    v5 = a1;
    if ( v8 )
      *(_BYTE *)(v8 + 18) = 1;
  }
  v18 = (volatile LONG *)(v6 + 23016);
  v19 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v6 + 23016));
  v20 = *(_QWORD *)(v6 + 22832);
  a3[2] = *(_QWORD *)(v6 + 22752);
  a3[1] = *(_QWORD *)(v6 + 22760);
  v41 = v20;
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v5 + 6752));
  if ( *(_QWORD *)(v5 + 6720) )
  {
    v21 = *(_QWORD *)(v5 + 6736);
    if ( v21 != 0x3FFFFFFFFFLL )
    {
      v22 = 0LL;
      do
      {
        v23 = v22;
        v24 = (_QWORD *)(48 * v21 - 0x220000000000LL);
        v25 = MiSearchNumaNodeTable(0xAAAAAAAAAAAAAAABuLL * ((48 * v21) >> 4));
        v22 = v23 + 1;
        if ( *((_DWORD *)v25 + 2) != a2 )
          v22 = v23;
        v21 = *v24 & 0xFFFFFFFFFFLL;
      }
      while ( v21 != 0x3FFFFFFFFFLL );
      v5 = a1;
      v18 = (volatile LONG *)(v6 + 23016);
      v44 = v22;
    }
  }
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v6 + 23104));
  v26 = *(_QWORD *)(v6 + 2144);
  a3[4] = v26;
  v27 = *(_QWORD *)(v6 + 2152);
  a3[3] = v27;
  v28 = *(_QWORD *)(v6 + 1072);
  a3[6] = v28;
  v29 = *(_QWORD *)(v6 + 1080);
  a3[5] = v29;
  v30 = *(_QWORD *)v6;
  a3[8] = *(_QWORD *)v6;
  v31 = *(_QWORD *)(v6 + 8);
  a3[7] = v31;
  v32 = v31 + v30;
  v33 = v29 + v28;
  v34 = a3[2];
  v35 = v41 - ((v32 << 18) + 16 * (v26 + v27 + 32 * v33)) - v44;
  if ( v34 + a3[1] > v35 )
  {
    if ( v34 < v35 )
    {
      a3[1] = v35 - v34;
    }
    else
    {
      a3[1] = 0LL;
      a3[2] = v35;
    }
  }
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + 23104));
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v5 + 6752));
  ExReleaseSpinLockSharedFromDpcLevel(v18);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v19 <= 0xFu && CurrentIrql >= 2u )
    {
      v37 = KeGetCurrentPrcb();
      v38 = v37->SchedulerAssist;
      v39 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v19 + 1));
      v40 = (v39 & v38[5]) == 0;
      v38[5] &= v39;
      if ( v40 )
        KiRemoveSystemWorkPriorityKick((__int64)v37);
    }
  }
  __writecr8(v19);
  if ( CurrentThread )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v5 + 216), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v5 + 216));
    KeAbPostRelease(v5 + 216);
    v40 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v40 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  *a3 = v41;
}
