__int64 __fastcall MiSplitReducedCommitClonePage(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  int v7; // r15d
  struct _KTHREAD *CurrentThread; // r14
  unsigned __int64 v9; // r12
  __int64 v10; // rsi
  __int64 v11; // rbx
  struct _KTHREAD *v12; // rbp
  __int64 v13; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v15; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v18; // eax
  signed __int32 v19; // ett
  int SessionId; // eax
  int v21; // esi
  __int64 v22; // rbp
  bool v23; // zf
  unsigned __int64 valid; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *CloneAddress; // rax
  __int64 v30; // rcx
  __int64 v31; // rbp
  unsigned int v32; // [rsp+70h] [rbp+8h]
  unsigned __int64 v33; // [rsp+78h] [rbp+10h] BYREF
  __int64 v34; // [rsp+88h] [rbp+20h] BYREF

  v5 = a1[1];
  v33 = 0LL;
  if ( !(unsigned int)MiProcessCommitIntact(v5, a2, a3, a4) )
    return 3221225477LL;
  MiUnlockProbePacketWorkingSet((__int64)a1);
  v7 = 1;
  CurrentThread = KeGetCurrentThread();
  v9 = ((a1[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v10 = a1[11];
  v11 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v12 = KeGetCurrentThread();
  v13 = v10 + 1232;
  _disable();
  AbEntrySummary = v12->AbEntrySummary;
  if ( v12->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v13, (__int64)v12)) != 0 )
  {
    _BitScanForward(&v15, AbEntrySummary);
    v32 = v15;
    v12->AbEntrySummary = AbEntrySummary & ~(1 << v15);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v18 = *SchedulerAssist;
      do
      {
        v19 = v18;
        v18 = _InterlockedCompareExchange(SchedulerAssist, v18 & 0xFFDFFFFF, v18);
      }
      while ( v19 != v18 );
      if ( (v18 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v11 = (__int64)(&v12[1].Process + 12 * v32);
    if ( (unsigned __int64)(v13 - qword_140C65668) < 0x8000000000LL )
      SessionId = MmGetSessionIdEx((__int64)v12->ApcState.Process);
    else
      SessionId = -1;
    *(_DWORD *)(v11 + 8) = SessionId;
    *(_QWORD *)v11 = v13 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v13, v11, v13);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v21 = MiChargeFullProcessCommitment(a1[11], 1LL);
  if ( v21 >= 0 )
  {
    MiLockProbePacketWorkingSet((__int64)a1);
    valid = MiLockLowestValidPageTable(a1[13], v9, &v33);
    v25 = v33;
    a1[5] = valid;
    if ( v25 == v9 )
    {
      v34 = MI_READ_PTE_LOCK_FREE(v25);
      if ( (v34 & 1) != 0 )
      {
        v26 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v34) >> 12) & 0xFFFFFFFFFFLL)
            - 0x220000000000LL;
        v27 = *(_QWORD *)(v26 + 40);
        if ( v27 < 0 )
        {
          v28 = *(_QWORD *)(v26 + 8);
          if ( v28 < 0 || (v27 & 0x10000000000LL) != 0 || !v28 )
          {
            CloneAddress = MiLocateCloneAddress(a1[11], v28 | 0x8000000000000000uLL);
            if ( CloneAddress )
            {
              if ( *(_QWORD *)(*(_QWORD *)(v30 + 1680) + 344LL) > CloneAddress[12] )
              {
                v21 = MiCopyOnWrite(a1[1], v9, 0xFFFFFFFFFFFFFFFFuLL, 0);
                if ( v21 >= 0 )
                  v7 = 0;
              }
            }
          }
        }
      }
    }
    MiUnlockProbePacketWorkingSet((__int64)a1);
    if ( v7 )
      MiReturnFullProcessCommitment(a1[11], 1LL);
    v31 = a1[11];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v31 + 1232));
    KeAbPostRelease(v31 + 1232);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
    if ( v21 < 0 )
      MiCopyOnWriteCheckConditions(a1[13], (unsigned int)v21);
    v21 = 0;
  }
  else
  {
    v22 = a1[11];
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + 1232), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v22 + 1232));
    KeAbPostRelease(v22 + 1232);
    v23 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v23 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  MiLockProbePacketWorkingSet((__int64)a1);
  return (unsigned int)v21;
}
