/*
 * XREFs of MiCommitPageTableRangesForVad @ 0x1406413B4
 * Callers:
 *     MiInsertChildVads @ 0x140A4642C (MiInsertChildVads.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     MmGetSessionIdEx @ 0x140343570 (MmGetSessionIdEx.c)
 *     KiAbTryReclaimOrphanedEntries @ 0x1403585E8 (KiAbTryReclaimOrphanedEntries.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     MiCommitPageTablesForVad @ 0x1407C74B0 (MiCommitPageTablesForVad.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiCommitPageTableRangesForVad(__int64 a1)
{
  _QWORD *v1; // rdi
  int v2; // r12d
  _KPROCESS *Process; // rbx
  ULONG_PTR v6; // rbx
  struct _KTHREAD *v7; // rbp
  __int64 v8; // rsi
  unsigned int AbEntrySummary; // eax
  unsigned int v10; // ecx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  int SessionId; // eax
  _QWORD *v16; // rbp
  unsigned __int64 v17; // rsi
  _QWORD *v18; // r14
  unsigned int v20; // [rsp+60h] [rbp+8h]
  struct _KTHREAD *CurrentThread; // [rsp+70h] [rbp+18h]

  v1 = *(_QWORD **)(a1 + 8);
  v2 = 0;
  if ( !v1 )
    return 0LL;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  *(_QWORD *)(a1 + 16) = 1LL;
  v6 = (ULONG_PTR)&Process[1].Affinity.StaticBitmap[8];
  --CurrentThread->SpecialApcDisable;
  v7 = KeGetCurrentThread();
  v8 = 0LL;
  _disable();
  AbEntrySummary = v7->AbEntrySummary;
  if ( v7->AbEntrySummary || (AbEntrySummary = KiAbTryReclaimOrphanedEntries(v6, (__int64)v7)) != 0 )
  {
    _BitScanForward(&v10, AbEntrySummary);
    v20 = v10;
    v7->AbEntrySummary = AbEntrySummary & ~(1 << v10);
    CurrentPrcb = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)CurrentPrcb->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v13 = *SchedulerAssist;
      do
      {
        v14 = v13;
        v13 = _InterlockedCompareExchange(SchedulerAssist, v13 & 0xFFDFFFFF, v13);
      }
      while ( v14 != v13 );
      if ( (v13 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
    }
    _enable();
    v8 = (__int64)(&v7[1].Process + 12 * v20);
    if ( v6 - qword_140C65668 >= 0x8000000000LL )
      SessionId = -1;
    else
      SessionId = MmGetSessionIdEx((__int64)v7->ApcState.Process);
    *(_DWORD *)(v8 + 8) = SessionId;
    *(_QWORD *)v8 = v6 & 0x7FFFFFFFFFFFFFFCLL;
  }
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v6, v8, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  do
  {
    v16 = (_QWORD *)*v1;
    if ( v2 >= 0 )
    {
      v17 = 0LL;
      if ( v1[1] )
      {
        v18 = v1 + 2;
        do
        {
          v2 = MiCommitPageTablesForVad(a1, *v18 & 0xFFFFFFFFFFE00000uLL);
          if ( v2 < 0 )
            break;
          ++v17;
          ++v18;
        }
        while ( v17 < v1[1] );
      }
    }
    ExFreePoolWithTag(v1, 0);
    v1 = v16;
  }
  while ( v16 );
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease(v6);
  if ( CurrentThread->SpecialApcDisable++ == -1
    && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
  {
    KiCheckForKernelApcDelivery();
  }
  *(_QWORD *)(a1 + 16) = -2LL;
  return (unsigned int)v2;
}
