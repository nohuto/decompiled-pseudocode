/*
 * XREFs of MiUpdatePageFileList @ 0x140392600
 * Callers:
 *     MiIncreaseCommitLimits @ 0x140392864 (MiIncreaseCommitLimits.c)
 *     MiInsertPageFileInList @ 0x140835F30 (MiInsertPageFileInList.c)
 *     MiDeletePagefile @ 0x140A2FB40 (MiDeletePagefile.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x140333B40 (RtlAvlRemoveNode.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiUpdatePageFileList(__int64 a1, int a2)
{
  unsigned __int64 *v4; // rbp
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rcx
  bool v7; // r8
  _QWORD *v8; // rdx
  _QWORD *v9; // rax
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v13; // eax
  bool v14; // zf

  if ( !*(_QWORD *)(a1 + 56) )
    return;
  v4 = (unsigned __int64 *)(a1 + 256);
  v5 = ExAcquireSpinLockExclusive(&dword_140C692C8);
  if ( !a2 )
  {
    RtlAvlRemoveNode((unsigned __int64 *)&qword_140C692C0, v4);
    goto LABEL_8;
  }
  v6 = *(_QWORD *)(a1 + 56);
  *(_WORD *)(a1 + 204) |= 0x100u;
  v7 = 0;
  v8 = (_QWORD *)qword_140C692C0;
  if ( !qword_140C692C0 )
    goto LABEL_7;
  while ( v6 < *(v8 - 25) )
  {
    v9 = (_QWORD *)*v8;
    if ( !*v8 )
      goto LABEL_7;
LABEL_6:
    v8 = v9;
  }
  v9 = (_QWORD *)v8[1];
  if ( v9 )
    goto LABEL_6;
  v7 = 1;
LABEL_7:
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C692C0, (unsigned __int64)v8, v7, (unsigned __int64)v4);
LABEL_8:
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C692C8);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v13 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
      v14 = (v13 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v13;
      if ( v14 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v5);
}
