/*
 * XREFs of VmpFaultEntryInsert @ 0x1405A2FF8
 * Callers:
 *     VmpAccessFaultBatch @ 0x1405A2AAC (VmpAccessFaultBatch.c)
 * Callees:
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140295410 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlRbInsertNodeEx @ 0x1402C0B10 (RtlRbInsertNodeEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall VmpFaultEntryInsert(__int64 a1, _RTL_BALANCED_NODE *a2, unsigned int a3)
{
  _RTL_BALANCED_NODE *v3; // rsi
  unsigned __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // di
  _DWORD *SchedulerAssist; // r9
  volatile LONG *v8; // r14
  __int64 v9; // rbx
  unsigned __int64 v10; // rdx
  BOOLEAN v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int8 v13; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v15; // r8
  int v16; // eax
  bool v17; // zf
  __int64 result; // rax

  v3 = a2;
  v5 = (unsigned __int64)&a2[2 * a3];
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 0xFFFC;
  }
  v8 = (volatile LONG *)(a1 + 64);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(a1 + 64));
  if ( (unsigned __int64)v3 < v5 )
  {
    v9 = a1 + 48;
    do
    {
      v10 = *(_QWORD *)v9;
      if ( (*(_BYTE *)(v9 + 8) & 1) != 0 && v10 )
        v10 ^= v9;
      v11 = 0;
      if ( v10 )
      {
        while ( 1 )
        {
          if ( ((unsigned __int64)v3[1].Children[0] & 0xFFFFFFFFFFFFFLL) >= (*(_QWORD *)(v10 + 24) & 0xFFFFFFFFFFFFFuLL) )
          {
            v12 = *(_QWORD *)(v10 + 8);
            if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
            {
              if ( !v12 )
                goto LABEL_22;
              v12 ^= v10;
            }
            if ( !v12 )
            {
LABEL_22:
              v11 = 1;
              break;
            }
          }
          else
          {
            v12 = *(_QWORD *)v10;
            if ( (*(_BYTE *)(v9 + 8) & 1) != 0 )
            {
              if ( !v12 )
                break;
              v12 ^= v10;
            }
            if ( !v12 )
              break;
          }
          v10 = v12;
        }
      }
      RtlRbInsertNodeEx((PRTL_RB_TREE)v9, (PRTL_BALANCED_NODE)v10, v11, v3);
      v3 += 2;
    }
    while ( (unsigned __int64)v3 < v5 );
  }
  ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      v13 = KeGetCurrentIrql();
      if ( v13 <= 0xFu && CurrentIrql <= 0xFu && v13 >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v15 = CurrentPrcb->SchedulerAssist;
        v16 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
        v17 = (v16 & v15[5]) == 0;
        v15[5] &= v16;
        if ( v17 )
          KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
