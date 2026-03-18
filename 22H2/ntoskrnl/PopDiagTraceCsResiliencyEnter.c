/*
 * XREFs of PopDiagTraceCsResiliencyEnter @ 0x14059218C
 * Callers:
 *     PopSleepstudyCaptureResiliencyStatistics @ 0x140993304 (PopSleepstudyCaptureResiliencyStatistics.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x1402504E0 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140250D60 (KeAcquireSpinLockRaiseToDpc.c)
 *     memset @ 0x140435400 (memset.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056DF54 (KiRemoveSystemWorkPriorityKick.c)
 *     PopIsRemoteDesktopEnabled @ 0x140980C14 (PopIsRemoteDesktopEnabled.c)
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
  byte_140C3CAE3 = byte_140C3D965;
  byte_140C3CAE1 = dword_140C3D90C == 0;
  dword_140C3CB0C = PopNetStandbyReason;
  byte_140C3CB11 = PopNetBIRequestActive;
  dword_140C3CB00 = PopEsState;
  dword_140C3CB04 = PopEsReason;
  v8 = *(_DWORD *)(a1 + 12);
  byte_140C3CAE2 = byte_140C3D964;
  dword_140C3CAE4 = v8;
  qword_140C3CB68 = -1LL;
  PopCsResiliencyStats[0] = 1;
  byte_140C3CB10 = IsRemoteDesktopEnabled;
  byte_140C3CAE8 = a2;
  xmmword_140C3CAF0 = *a3;
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
