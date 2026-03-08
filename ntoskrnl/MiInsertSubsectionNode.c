/*
 * XREFs of MiInsertSubsectionNode @ 0x140214E00
 * Callers:
 *     MiAppendSubsectionChain @ 0x1402A5090 (MiAppendSubsectionChain.c)
 *     MiCreateDataFileMap @ 0x1406A6C30 (MiCreateDataFileMap.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall MiInsertSubsectionNode(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // rdi
  KIRQL v6; // bl
  _QWORD *v7; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rax
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v15; // eax
  bool v16; // zf

  v3 = a1 + 280;
  if ( (_DWORD)a3 )
    v6 = 17;
  else
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 72));
  v7 = *(_QWORD **)v3;
  LOBYTE(a3) = 0;
  if ( *(_QWORD *)v3 )
  {
    a3 = *(unsigned int *)(a2 + 36) | ((unsigned __int64)(*(_WORD *)(a2 + 32) & 0xFFC0) << 26);
    while ( 1 )
    {
      v8 = *((unsigned int *)v7 - 5) | ((unsigned __int64)(*(_WORD *)(v7 - 3) & 0xFFC0) << 26);
      v9 = v8 + *((unsigned int *)v7 - 4);
      if ( *((_WORD *)v7 - 11) < 0x10u )
        --v9;
      if ( a3 <= v9 && a3 < v8 )
      {
        v10 = (_QWORD *)*v7;
        if ( !*v7 )
        {
          LOBYTE(a3) = 0;
          break;
        }
      }
      else
      {
        v10 = (_QWORD *)v7[1];
        if ( !v10 )
        {
          LOBYTE(a3) = 1;
          break;
        }
      }
      v7 = v10;
    }
  }
  result = RtlAvlInsertNodeEx(v3, v7, a3, a2 + 56);
  ++*(_QWORD *)(v3 + 8);
  *(_QWORD *)(v3 + 16) = a2;
  if ( v6 != 17 )
  {
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(a1 + 72));
    if ( KiIrqlFlags )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && v6 <= 0xFu && CurrentIrql >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v15 = ~(unsigned __int16)(-1LL << (v6 + 1));
        v16 = (v15 & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= v15;
        if ( v16 )
          KiRemoveSystemWorkPriorityKick(CurrentPrcb);
      }
    }
    result = v6;
    __writecr8(v6);
  }
  return result;
}
