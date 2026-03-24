/*
 * XREFs of IopResetEvent @ 0x1402D2590
 * Callers:
 *     NtSetInformationFile @ 0x1402D2A20 (NtSetInformationFile.c)
 *     IopAllocateAndPopulateWriteIrp @ 0x1403F14CC (IopAllocateAndPopulateWriteIrp.c)
 *     IopReadFile @ 0x1405CE318 (IopReadFile.c)
 *     NtQueryInformationFile @ 0x1405FAEA0 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x14064A140 (IopCloseFile.c)
 *     IopXxxControlFile @ 0x14064B730 (IopXxxControlFile.c)
 *     NtLockFile @ 0x140655E20 (NtLockFile.c)
 *     NtUnlockFile @ 0x140674110 (NtUnlockFile.c)
 *     NtFlushBuffersFileEx @ 0x14067D120 (NtFlushBuffersFileEx.c)
 *     NtReadFileScatter @ 0x14067E2A0 (NtReadFileScatter.c)
 *     NtWriteFileGather @ 0x14067EA40 (NtWriteFileGather.c)
 *     NtQueryEaFile @ 0x14067F740 (NtQueryEaFile.c)
 *     NtNotifyChangeDirectoryFileEx @ 0x140691690 (NtNotifyChangeDirectoryFileEx.c)
 *     NtQueryVolumeInformationFile @ 0x1406C9680 (NtQueryVolumeInformationFile.c)
 *     NtSetEaFile @ 0x140731000 (NtSetEaFile.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1408923FC (IopSetEaOrQuotaInformationFile.c)
 *     NtQueryQuotaInformationFile @ 0x140895B90 (NtQueryQuotaInformationFile.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14024ABF0 (KeYieldProcessorEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 */

void __fastcall IopResetEvent(__int64 a1, __int64 a2, __int64 a3, _DWORD *SchedulerAssist)
{
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v6; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v8; // r8
  int v9; // eax
  bool v10; // zf
  int v11; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 80) & 0x4000000) == 0 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      a2 = (-1LL << (CurrentIrql + 1)) & 4;
      a3 = (unsigned int)a2 | SchedulerAssist[5];
      SchedulerAssist[5] = a3;
    }
    v11 = 0;
    while ( _interlockedbittestandset((volatile signed __int32 *)(a1 + 152), 7u) )
    {
      do
        KeYieldProcessorEx(&v11, a2, a3, (__int64)SchedulerAssist);
      while ( (*(_DWORD *)(a1 + 152) & 0x80u) != 0 );
    }
    *(_DWORD *)(a1 + 156) = 0;
    _InterlockedAnd((volatile signed __int32 *)(a1 + 152), 0xFFFFFF7F);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v6 = KeGetCurrentIrql();
        if ( v6 <= 0xFu && CurrentIrql <= 0xFu && v6 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v8 = CurrentPrcb->SchedulerAssist;
          v9 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v10 = (v9 & v8[5]) == 0;
          v8[5] &= v9;
          if ( v10 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
}
