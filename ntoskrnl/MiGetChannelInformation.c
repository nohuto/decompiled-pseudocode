/*
 * XREFs of MiGetChannelInformation @ 0x140295C20
 * Callers:
 *     MmManagePartitionMemoryInformation @ 0x1407059DC (MmManagePartitionMemoryInformation.c)
 *     MmGetChannelInformation @ 0x14084FA60 (MmGetChannelInformation.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiGetNodeChannelPageCounts @ 0x140295EF0 (MiGetNodeChannelPageCounts.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ExAcquireSpinLockShared @ 0x140308060 (ExAcquireSpinLockShared.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

int __fastcall MiGetChannelInformation(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4)
{
  ULONG_PTR v4; // rsi
  __int64 v6; // r15
  __int64 v7; // rbx
  struct _KTHREAD *CurrentThread; // rcx
  struct _KTHREAD *v9; // r14
  unsigned int AbEntrySummary; // eax
  unsigned int v11; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  int SessionId; // eax
  volatile LONG *v15; // r13
  KIRQL v16; // al
  unsigned int v17; // edx
  __int64 v18; // r15
  KIRQL v19; // r12
  __int64 v20; // rsi
  __int64 v21; // r14
  __int64 v22; // rax
  $C71981A45BEB2B45F82C232A7085991E *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  struct _KTHREAD *v27; // rcx
  bool v28; // zf
  signed __int32 v29; // eax
  signed __int32 v30; // ett
  unsigned int v31; // ecx
  unsigned __int8 *v32; // r8
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *v34; // r10
  _DWORD *v35; // r9
  int v36; // eax
  __int64 v38; // [rsp+30h] [rbp-48h] BYREF
  __int64 v39; // [rsp+38h] [rbp-40h] BYREF
  __int64 v40; // [rsp+40h] [rbp-38h] BYREF
  __int64 v41; // [rsp+50h] [rbp-28h]
  ULONG_PTR v42; // [rsp+58h] [rbp-20h]
  struct _KTHREAD *v43; // [rsp+60h] [rbp-18h]
  int v44; // [rsp+C0h] [rbp+48h]
  KIRQL v45; // [rsp+C8h] [rbp+50h]
  unsigned int v47; // [rsp+D8h] [rbp+60h]

  v44 = a1;
  v4 = a1 + 216;
  v38 = 0LL;
  v6 = *(_QWORD *)(a1 + 16) + 25408LL * a2;
  v7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  *a4 = 40LL * (unsigned int)MmNumberOfChannels;
  v39 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v9 = KeGetCurrentThread();
  v40 = 0LL;
  v41 = v6;
  v43 = CurrentThread;
  v42 = v4;
  _disable();
  AbEntrySummary = v9->AbEntrySummary;
  if ( v9->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v4, v9)) != 0 )
  {
    _BitScanForward(&v11, AbEntrySummary);
    v47 = v11;
    v9->AbEntrySummary = AbEntrySummary & ~(1 << v11);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v29 = *SchedulerAssist;
      do
      {
        v30 = v29;
        v29 = _InterlockedCompareExchange(SchedulerAssist, v29 & 0xFFDFFFFF, v29);
      }
      while ( v30 != v29 );
      if ( (v29 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
    _enable();
    v7 = (__int64)(&v9[1].Process + 12 * v47);
    if ( v4 - qword_140C65668 < 0x8000000000LL )
      SessionId = MmGetSessionIdEx(v9->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v7 + 8) = SessionId;
    *(_QWORD *)v7 = v4 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v4, v7, v4);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v15 = (volatile LONG *)(v6 + 23016);
  v16 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)(v6 + 23016));
  v17 = MmNumberOfChannels;
  v18 = 0LL;
  v45 = v16;
  v19 = v16;
  if ( MmNumberOfChannels )
  {
    v20 = v41;
    v21 = a3 + 4;
    do
    {
      *(_DWORD *)(v21 - 4) = v18;
      if ( (*(_DWORD *)(v20 + 23000) & 1) != 0 )
      {
        v31 = 0;
        if ( v17 )
        {
          v32 = (unsigned __int8 *)(v20 + 23033);
          while ( *v32 != (_DWORD)v18 )
          {
            ++v31;
            ++v32;
            if ( v31 >= v17 )
              goto LABEL_14;
          }
          *(_DWORD *)v21 = v31;
        }
      }
      else
      {
        *(_DWORD *)v21 = -1;
      }
LABEL_14:
      *(_QWORD *)(v21 + 4) = *(_QWORD *)(v20 + 8 * v18 + 22800);
      MiGetNodeChannelPageCounts(v44, a2, v18, (unsigned int)&v38, (__int64)&v39, (__int64)&v40);
      *(_QWORD *)(v21 + 12) = v38;
      *(_QWORD *)(v21 + 20) = v39;
      v22 = v40;
      *(_QWORD *)(v21 + 28) = v40;
      if ( v22 == -1 )
        *(_QWORD *)(v21 + 28) = -1LL;
      v17 = MmNumberOfChannels;
      v18 = (unsigned int)(v18 + 1);
      v21 += 40LL;
    }
    while ( (unsigned int)v18 < MmNumberOfChannels );
    v4 = v42;
    v19 = v45;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v15);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v19 <= 0xFu && CurrentIrql >= 2u )
    {
      v34 = KeGetCurrentPrcb();
      v35 = v34->SchedulerAssist;
      v36 = ~(unsigned __int16)(-1LL << (v19 + 1));
      v28 = (v36 & v35[5]) == 0;
      v35[5] &= v36;
      if ( v28 )
        KiRemoveSystemWorkPriorityKick(v34);
    }
  }
  __writecr8(v19);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  LODWORD(v23) = KeAbPostRelease(v4);
  v27 = v43;
  v28 = v43->SpecialApcDisable++ == -1;
  if ( v28 )
  {
    v23 = &v27->152;
    if ( ($C71981A45BEB2B45F82C232A7085991E *)v23->ApcState.ApcListHead[0].Flink != v23 )
      LODWORD(v23) = KiCheckForKernelApcDelivery(v27, v24, v25, v26);
  }
  return (int)v23;
}
