/*
 * XREFs of MiApplyCommitDelay @ 0x140653B74
 * Callers:
 *     MiChargeCommit @ 0x140320800 (MiChargeCommit.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiApplyCommitDelay(__int64 a1, char a2, __int64 a3)
{
  volatile LONG *v4; // rbp
  unsigned __int64 v5; // r14
  int v6; // eax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v10; // eax
  bool v11; // zf
  KIRQL v12; // al
  unsigned __int64 v13; // rdi
  unsigned __int8 v14; // al
  struct _KPRCB *v15; // r9
  int v16; // eax
  _DWORD *v17; // r8
  LARGE_INTEGER Timeout; // [rsp+68h] [rbp+20h] BYREF

  if ( (a2 & 4) == 0
    && (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0
    && KeGetCurrentIrql() < 2u
    && a3 != *(_QWORD *)(a1 + 16392)
    && *(_DWORD *)(a1 + 2092) )
  {
    v4 = (volatile LONG *)(a1 + 1408);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 1408));
    v6 = *(_DWORD *)(a1 + 2088);
    if ( v6 )
    {
      *(_DWORD *)(a1 + 2088) = v6 + 1;
    }
    else
    {
      *(_WORD *)(a1 + 2096) = 0;
      *(_DWORD *)(a1 + 2100) = 0;
      *(_QWORD *)(a1 + 2112) = a1 + 2104;
      *(_QWORD *)(a1 + 2104) = a1 + 2104;
      *(_BYTE *)(a1 + 2098) = 6;
      *(_DWORD *)(a1 + 2088) = 1;
    }
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v10 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
        v11 = (v10 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v10;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
    __writecr8(v5);
    Timeout = Mi10Milliseconds;
    KeWaitForSingleObject((PVOID)(a1 + 2096), Executive, 0, 0, &Timeout);
    v12 = ExAcquireSpinLockExclusive(v4);
    --*(_DWORD *)(a1 + 2088);
    v13 = v12;
    ExReleaseSpinLockExclusiveFromDpcLevel(v4);
    if ( KiIrqlFlags )
    {
      v14 = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && v14 <= 0xFu && (unsigned __int8)v13 <= 0xFu && v14 >= 2u )
      {
        v15 = KeGetCurrentPrcb();
        v16 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v13 + 1));
        v17 = v15->SchedulerAssist;
        v11 = (v16 & v17[5]) == 0;
        v17[5] &= v16;
        if ( v11 )
          KiRemoveSystemWorkPriorityKick((__int64)v15);
      }
    }
    __writecr8(v13);
  }
}
