/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x140309340
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x140308F28 (RtlpHpSegMgrRelease.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     RtlpHpQueryVA @ 0x140309578 (RtlpHpQueryVA.c)
 *     RtlpHpAcquireLockExclusive @ 0x14030ABA4 (RtlpHpAcquireLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v5; // r14
  unsigned __int16 *v7; // rdi
  unsigned __int64 v8; // rbx
  unsigned __int8 v9; // al
  __int16 *v10; // r10
  unsigned __int64 v11; // r15
  int v12; // r11d
  char v13; // al
  __int16 v14; // r9
  unsigned __int64 v15; // r8
  unsigned __int16 *v17; // rax
  unsigned __int16 *v18; // rcx
  unsigned __int16 *v19; // rax
  struct _KTHREAD *CurrentThread; // rcx
  bool v21; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v24; // eax
  _DWORD *SchedulerAssist; // r8
  __int16 *v26; // [rsp+50h] [rbp+8h] BYREF

  v5 = a2 & 0xFFFFFFFFFFE00000uLL;
  v26 = 0LL;
  v7 = 0LL;
  RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, a2, &v26, 0LL);
  v8 = (a2 - v5) / *a3;
  v9 = RtlpHpAcquireLockExclusive(a1 + 112, *(_DWORD *)(a1 + 40) & 1);
  v10 = v26;
  v11 = v9;
  v12 = (unsigned __int16)(v26[1] ^ (1 << v8));
  v13 = 0x200000uLL / *a3;
  v26[1] = v12;
  v14 = *v10;
  v15 = (unsigned __int64)(unsigned __int16)*v10 >> 15;
  if ( v12 == (1 << v13) - 1 )
  {
    if ( *((_QWORD *)v10 + 1) != -1LL )
    {
      if ( v14 >= 0 )
        *v10 = v14 ^ (v14 ^ (v14 - 1)) & 0x7FF;
      while ( 1 )
      {
        v17 = *(unsigned __int16 **)(a1 + 8 * v15 + 120);
        if ( !v17 )
          break;
        v18 = *(unsigned __int16 **)v17;
        *(_QWORD *)(a1 + 8 * v15 + 120) = *(_QWORD *)v17;
        if ( v17 == (unsigned __int16 *)(v10 + 4) )
          goto LABEL_16;
        *(_QWORD *)v17 = v7;
        v7 = v17;
      }
      v18 = 0LL;
      __int2c();
LABEL_16:
      while ( 1 )
      {
        v19 = v18;
        v18 = v7;
        if ( !v7 )
          break;
        v7 = *(unsigned __int16 **)v7;
        *(_QWORD *)v18 = v19;
        *(_QWORD *)(a1 + 8 * v15 + 120) = v18;
      }
    }
  }
  else
  {
    if ( ((v12 - 1) & v12) == 0 )
    {
      *((_QWORD *)v10 + 1) = *(_QWORD *)(a1 + 8 * v15 + 120);
      *(_QWORD *)(a1 + 8 * v15 + 120) = v10 + 4;
    }
    v5 = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v11 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v24 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v11 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v21 = (v24 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v24;
        if ( v21 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    __writecr8(v11);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 112));
    KeAbPostRelease(a1 + 112);
    CurrentThread = KeGetCurrentThread();
    v21 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v21 && ($C71981A45BEB2B45F82C232A7085991E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v5 )
    *a3 = 0x200000LL;
  return v5;
}
