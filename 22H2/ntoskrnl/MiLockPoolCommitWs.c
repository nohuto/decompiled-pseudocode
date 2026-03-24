/*
 * XREFs of MiLockPoolCommitWs @ 0x14028BED8
 * Callers:
 *     MiCommitPoolMemory @ 0x14028B8AC (MiCommitPoolMemory.c)
 *     MiFillPoolCommitPageTable @ 0x14028C060 (MiFillPoolCommitPageTable.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140219C70 (MiLockWorkingSetShared.c)
 */

__int64 __fastcall MiLockPoolCommitWs(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // r10
  __int64 v6; // rcx

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    a3 = (unsigned int)SchedulerAssist[5];
    a2 = (unsigned int)a3 | ~((unsigned __int8)(1LL << (CurrentIrql + 1)) - 1) & 4;
    SchedulerAssist[5] = a2;
  }
  v6 = *(_QWORD *)(a1 + 48);
  *(_BYTE *)(a1 + 76) = CurrentIrql;
  return MiLockWorkingSetShared(v6, a2, a3, SchedulerAssist);
}
