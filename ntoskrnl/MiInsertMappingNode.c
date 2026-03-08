/*
 * XREFs of MiInsertMappingNode @ 0x1403BC7E4
 * Callers:
 *     MmAllocateMappingAddressEx @ 0x140869D20 (MmAllocateMappingAddressEx.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x140331710 (RtlAvlInsertNodeEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall MiInsertMappingNode(unsigned __int64 a1)
{
  unsigned __int64 v1; // rdi
  KIRQL v3; // al
  _QWORD *v4; // rdx
  bool v5; // r8
  unsigned __int64 v6; // rbx
  _QWORD *v7; // rcx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf

  v1 = *(_QWORD *)(a1 + 24);
  v3 = ExAcquireSpinLockExclusive(&dword_140C68140);
  v4 = (_QWORD *)qword_140C68148;
  v5 = 0;
  v6 = v3;
  if ( qword_140C68148 )
  {
    while ( 1 )
    {
      if ( v1 >= v4[3] )
      {
        v7 = (_QWORD *)v4[1];
        if ( !v7 )
        {
          v5 = 1;
          break;
        }
      }
      else
      {
        v7 = (_QWORD *)*v4;
        if ( !*v4 )
          break;
      }
      v4 = v7;
    }
  }
  RtlAvlInsertNodeEx((unsigned __int64 *)&qword_140C68148, (unsigned __int64)v4, v5, a1);
  ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140C68140);
  if ( KiIrqlFlags )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v6 <= 0xFu && CurrentIrql >= 2u )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      SchedulerAssist = CurrentPrcb->SchedulerAssist;
      v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v6 + 1));
      v12 = (v11 & SchedulerAssist[5]) == 0;
      SchedulerAssist[5] &= v11;
      if ( v12 )
        KiRemoveSystemWorkPriorityKick(CurrentPrcb);
    }
  }
  __writecr8(v6);
}
