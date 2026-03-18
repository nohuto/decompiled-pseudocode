/*
 * XREFs of RtlpHpSegMgrVaCtxFree @ 0x140367E68
 * Callers:
 *     RtlpHpSegMgrRelease @ 0x14036843C (RtlpHpSegMgrRelease.c)
 * Callees:
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     RtlpHpQueryVA @ 0x140362864 (RtlpHpQueryVA.c)
 *     RtlpHpAcquireLockExclusive @ 0x140365AF4 (RtlpHpAcquireLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 */

unsigned __int64 __fastcall RtlpHpSegMgrVaCtxFree(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int128 v3; // xmm0
  unsigned __int64 v7; // r14
  unsigned __int16 *v8; // rdi
  unsigned __int64 v9; // rbx
  KIRQL v10; // al
  __int16 *v11; // r10
  unsigned __int64 v12; // r15
  int v13; // r11d
  char v14; // al
  __int16 v15; // r9
  unsigned __int64 v16; // r8
  unsigned __int16 *v17; // rcx
  unsigned __int16 *v18; // rcx
  struct _KTHREAD *CurrentThread; // rcx
  bool v20; // zf
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r9
  int v23; // eax
  _DWORD *SchedulerAssist; // r8
  __int128 v26[3]; // [rsp+20h] [rbp-38h] BYREF
  __int16 *v27; // [rsp+60h] [rbp+8h] BYREF

  v3 = *(_OWORD *)(a1 + 40);
  v7 = a2 & 0xFFFFFFFFFFE00000uLL;
  v27 = 0LL;
  v8 = 0LL;
  v26[0] = v3;
  RtlpHpQueryVA(a2 & 0xFFFFFFFFFFE00000uLL, v26, &v27, 0LL);
  v9 = (a2 - v7) / *a3;
  v10 = RtlpHpAcquireLockExclusive((volatile LONG *)(a1 + 112), *(_DWORD *)(a1 + 40) & 1);
  v11 = v27;
  v12 = v10;
  v13 = (unsigned __int16)(v27[1] ^ (1 << v9));
  v14 = 0x200000uLL / *a3;
  v27[1] = v13;
  v15 = *v11;
  v16 = (unsigned __int64)(unsigned __int16)*v11 >> 15;
  if ( v13 == (1 << v14) - 1 )
  {
    if ( *((_QWORD *)v11 + 1) != -1LL )
    {
      if ( v15 >= 0 )
        *v11 = v15 ^ (v15 ^ (v15 - 1)) & 0x7FF;
      while ( 1 )
      {
        v17 = *(unsigned __int16 **)(a1 + 8 * v16 + 120);
        if ( !v17 )
          NT_ASSERT("Link != ((void *)0)");
        *(_QWORD *)(a1 + 8 * v16 + 120) = *(_QWORD *)v17;
        if ( v17 == (unsigned __int16 *)(v11 + 4) )
          break;
        *(_QWORD *)v17 = v8;
        v8 = v17;
      }
      while ( 1 )
      {
        v18 = v8;
        if ( !v8 )
          break;
        v8 = *(unsigned __int16 **)v8;
        *(_QWORD *)v18 = *(_QWORD *)(a1 + 8 * v16 + 120);
        *(_QWORD *)(a1 + 8 * v16 + 120) = v18;
      }
    }
  }
  else
  {
    if ( ((v13 - 1) & v13) == 0 )
    {
      *((_QWORD *)v11 + 1) = *(_QWORD *)(a1 + 8 * v16 + 120);
      *(_QWORD *)(a1 + 8 * v16 + 120) = v11 + 4;
    }
    v7 = 0LL;
  }
  if ( (*(_DWORD *)(a1 + 40) & 1) != 0 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 112));
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        CurrentIrql = KeGetCurrentIrql();
        if ( CurrentIrql <= 0xFu && (unsigned __int8)v12 <= 0xFu && CurrentIrql >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v23 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v12 + 1));
          SchedulerAssist = CurrentPrcb->SchedulerAssist;
          v20 = (v23 & SchedulerAssist[5]) == 0;
          SchedulerAssist[5] &= v23;
          if ( v20 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(v12);
  }
  else
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 112), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 112);
    KeAbPostRelease(a1 + 112);
    CurrentThread = KeGetCurrentThread();
    v20 = CurrentThread->SpecialApcDisable++ == -1;
    if ( v20 && ($CEA84C04E3712D858E5667A507841A2A *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  if ( v7 )
    *a3 = 0x200000LL;
  return v7;
}
