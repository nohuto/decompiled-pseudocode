/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x1405710DC
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x1408FA0C4 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402295E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1402D89E0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     memset @ 0x140413800 (memset.c)
 *     PopIsRemoteDesktopEnabled @ 0x1408E12E4 (PopIsRemoteDesktopEnabled.c)
 */

__int64 __fastcall PopDiagTraceCsResiliencyEnter(__int64 a1, char a2, __int128 *a3)
{
  char IsRemoteDesktopEnabled; // bl
  unsigned __int64 v7; // r14
  int v8; // eax
  __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *SchedulerAssist; // r8
  bool v12; // zf

  IsRemoteDesktopEnabled = PopIsRemoteDesktopEnabled();
  v7 = KeAcquireSpinLockRaiseToDpc(&PopCsResiliencyStatsLock);
  memset(PopCsResiliencyStats, 0, 0x140uLL);
  byte_140C23703 = byte_140C233A5;
  byte_140C23701 = dword_140C2334C == 0;
  dword_140C2372C = PopNetStandbyReason;
  byte_140C23731 = PopNetBIRequestActive;
  dword_140C23720 = PopEsState;
  dword_140C23724 = PopEsReason;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140C23702 = byte_140C233A4;
  dword_140C23704 = v8;
  qword_140C23788 = -1LL;
  PopCsResiliencyStats[0] = 1;
  byte_140C23730 = IsRemoteDesktopEnabled;
  byte_140C23708 = a2;
  xmmword_140C23710 = *a3;
  KxReleaseSpinLock(&PopCsResiliencyStatsLock);
  result = (unsigned int)KiIrqlFlags;
  if ( KiIrqlFlags )
  {
    if ( (KiIrqlFlags & 1) != 0 )
    {
      result = KeGetCurrentIrql();
      if ( (unsigned __int8)result <= 0xFu && (unsigned __int8)v7 <= 0xFu && (unsigned __int8)result >= 2u )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        result = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
        SchedulerAssist = CurrentPrcb->SchedulerAssist;
        v12 = ((unsigned int)result & SchedulerAssist[5]) == 0;
        SchedulerAssist[5] &= result;
        if ( v12 )
          result = KiRemoveSystemWorkPriorityKick((__int64)CurrentPrcb);
      }
    }
  }
  __writecr8(v7);
  return result;
}
