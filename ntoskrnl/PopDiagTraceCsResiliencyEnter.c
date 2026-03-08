/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x14058FC5C
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140990254 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x14024EEB0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x14024F730 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     PopIsRemoteDesktopEnabled @ 0x14097DB64 (PopIsRemoteDesktopEnabled.c)
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
  memset(PopCsResiliencyStats, 0, 0x150uLL);
  byte_140C3C723 = byte_140C3D4E5;
  byte_140C3C721 = dword_140C3D48C == 0;
  dword_140C3C74C = PopNetStandbyReason;
  byte_140C3C751 = PopNetBIRequestActive;
  dword_140C3C740 = PopEsState;
  dword_140C3C744 = PopEsReason;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140C3C722 = byte_140C3D4E4;
  dword_140C3C724 = v8;
  qword_140C3C7A8 = -1LL;
  PopCsResiliencyStats[0] = 1;
  byte_140C3C750 = IsRemoteDesktopEnabled;
  byte_140C3C728 = a2;
  xmmword_140C3C730 = *a3;
  result = KxReleaseSpinLock((volatile signed __int64 *)&PopCsResiliencyStatsLock);
  if ( KiIrqlFlags )
  {
    result = KeGetCurrentIrql();
    if ( (KiIrqlFlags & 1) != 0
      && (unsigned __int8)result <= 0xFu
      && (unsigned __int8)v7 <= 0xFu
      && (unsigned __int8)result >= 2u )
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
  __writecr8(v7);
  return result;
}
