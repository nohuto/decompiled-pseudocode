/*
 * XREFs of MiActivateCombineBlock @ 0x14029D8F8
 * Callers:
 *     MiCombineInitialInstance @ 0x14029CD58 (MiCombineInitialInstance.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiActivateCombineBlock(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // r15
  unsigned __int64 v5; // r14
  __int64 v6; // r12
  __int64 v7; // rbp
  __int64 v8; // rbx
  unsigned __int64 v9; // rsi
  __int64 v10; // r8
  _QWORD **v11; // rbx
  _QWORD *v12; // rdx
  _QWORD *v13; // rax
  __int64 v14; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v18; // eax
  bool v19; // zf

  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 392), 1u);
  v4 = a2 + 8;
  v5 = a2[3];
  v6 = 16LL * (a2[3] & 0xF);
  v7 = (a2[6] >> 55) & 0x1FLL;
  v8 = a2[3] & 0xF;
  v9 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v6 + a1 + 104));
  LOBYTE(v10) = 0;
  v11 = (_QWORD **)(a1 + 16 * (v8 + 6));
  v12 = *v11;
  if ( *v11 )
  {
    while ( 1 )
    {
      if ( v5 <= v12[3]
        && (v5 < v12[3]
         || (v14 = (v12[6] >> 55) & 0x1FLL, (unsigned int)v7 < (unsigned int)v14)
         || (unsigned int)v7 <= (unsigned int)v14 && v4 && *v4 < v12[8]) )
      {
        v13 = (_QWORD *)*v12;
        if ( !*v12 )
          break;
      }
      else
      {
        v13 = (_QWORD *)v12[1];
        if ( !v13 )
        {
          LOBYTE(v10) = 1;
          break;
        }
      }
      v12 = v13;
    }
  }
  RtlAvlInsertNodeEx(v11, v12, v10, a2);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v6 + a1 + 104));
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v9 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v18 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v9 + 1));
      v19 = (v18 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v18;
      if ( v19 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v9);
}
