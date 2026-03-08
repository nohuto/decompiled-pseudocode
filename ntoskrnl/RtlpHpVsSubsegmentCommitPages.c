/*
 * XREFs of RtlpHpVsSubsegmentCommitPages @ 0x1402CB850
 * Callers:
 *     RtlpHpVsChunkSplit @ 0x14024AB60 (RtlpHpVsChunkSplit.c)
 *     RtlpHpFreeHeap @ 0x140313CC0 (RtlpHpFreeHeap.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140262940 (ExAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x140350400 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140462ED8 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140608CDC (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpHpVsSubsegmentCommitPages(__int64 a1, __int64 a2, unsigned __int64 a3, unsigned int a4, int a5)
{
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rcx
  volatile signed __int32 *v10; // rdi
  __int64 v11; // r15
  unsigned __int8 CurrentIrql; // si
  __int64 v13; // rcx
  unsigned __int64 v14; // rax
  unsigned int v15; // r14d
  struct _KTHREAD *v17; // rcx
  bool v18; // zf
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *SchedulerAssist; // r9
  __int64 v21; // rdx
  unsigned __int8 v22; // cl
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v24; // r8
  int v25; // eax
  __int64 v26; // [rsp+28h] [rbp-60h]
  unsigned __int8 v27; // [rsp+40h] [rbp-48h]
  void *retaddr; // [rsp+88h] [rbp+0h]
  int v29; // [rsp+90h] [rbp+8h] BYREF
  unsigned int v30; // [rsp+98h] [rbp+10h]
  unsigned int v31; // [rsp+A8h] [rbp+20h]

  v31 = a4;
  _BitScanForward64(&v8, a3);
  _BitScanReverse64(&v9, a3);
  v10 = (volatile signed __int32 *)(a2 + 24);
  v26 = a2 + (unsigned int)((_DWORD)v8 << 12);
  v11 = ((1LL << ((unsigned __int8)v9 - (unsigned __int8)v8 + 1)) - 1) << v8;
  v30 = ((_DWORD)v9 - (_DWORD)v8 + 1) << 12;
  if ( *(_DWORD *)(a1 + 8) )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      if ( CurrentIrql == 2 )
        LODWORD(v21) = 4;
      else
        v21 = (-1LL << (CurrentIrql + 1)) & 4;
      SchedulerAssist[5] |= v21;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a2 + 24, CurrentIrql);
    }
    else
    {
      v29 = 0;
      if ( _interlockedbittestandset(v10, 0x1Fu) )
        v29 = ExpWaitForSpinLockExclusiveAndAcquire(a2 + 24);
      while ( (*v10 & 0xBFFFFFFF) != 0x80000000 )
      {
        if ( (*v10 & 0x40000000) == 0 )
          _InterlockedOr(v10, 0x40000000u);
        KeYieldProcessorEx(&v29);
      }
    }
    v27 = CurrentIrql;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v27 = 0;
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx(a2 + 24, 0LL);
    CurrentIrql = 0;
  }
  v13 = a1 ^ *(_QWORD *)(a1 + 128);
  if ( !a5 )
  {
    ((void (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 160)))(v13, v26, v30);
    *(_QWORD *)(a2 + 16) &= ~v11;
    v14 = -a4;
LABEL_10:
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 48), v14);
    CurrentIrql = v27;
    v15 = 0;
    goto LABEL_11;
  }
  v15 = ((__int64 (__fastcall *)(__int64, __int64, _QWORD))(a1 ^ RtlpHpHeapGlobals ^ *(_QWORD *)(a1 + 152)))(
          v13,
          v26,
          v30);
  if ( (v15 & 0x80000000) == 0 )
  {
    *(_QWORD *)(a2 + 16) |= v11;
    v14 = v31;
    goto LABEL_10;
  }
LABEL_11:
  if ( *(_DWORD *)(a1 + 8) )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v10, retaddr);
    else
      *v10 = 0;
    if ( KiIrqlFlags )
    {
      v22 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v22 <= 0xFu && CurrentIrql <= 0xFu && v22 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v24 = CurrentPrcb->SchedulerAssist;
        CurrentIrql = v27;
        v25 = ~(unsigned __int16)(-1LL << (v27 + 1));
        v18 = (v25 & v24[5]) == 0;
        v24[5] &= v25;
        if ( v18 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(CurrentIrql);
    return v15;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  v17 = KeGetCurrentThread();
  v18 = v17->SpecialApcDisable++ == -1;
  if ( !v18 || ($C71981A45BEB2B45F82C232A7085991E *)v17->ApcState.ApcListHead[0].Flink == &v17->152 )
    return v15;
  KiCheckForKernelApcDelivery();
  return v15;
}
