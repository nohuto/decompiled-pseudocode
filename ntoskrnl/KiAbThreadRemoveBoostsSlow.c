/*
 * XREFs of KiAbThreadRemoveBoostsSlow @ 0x1402D99E0
 * Callers:
 *     CcPinFileData @ 0x14021E620 (CcPinFileData.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14023A620 (ExReleaseAutoExpandPushLockExclusive.c)
 *     FsRtlCheckOplockEx2 @ 0x14023AE40 (FsRtlCheckOplockEx2.c)
 *     KiAbEntryFreeAndEnableInterrupts @ 0x140248730 (KiAbEntryFreeAndEnableInterrupts.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KiAbThreadRemoveBoosts @ 0x140262A80 (KiAbThreadRemoveBoosts.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     MiZeroPage @ 0x140275060 (MiZeroPage.c)
 *     NtCancelTimer @ 0x1402CD830 (NtCancelTimer.c)
 *     ExpSetTimerObject @ 0x1402CDE34 (ExpSetTimerObject.c)
 *     KiAbCrossThreadRelease @ 0x1403C582C (KiAbCrossThreadRelease.c)
 *     MiSetPagesModified @ 0x1406264CC (MiSetPagesModified.c)
 *     MiDecommitHardwareEnclavePages @ 0x140644F2C (MiDecommitHardwareEnclavePages.c)
 * Callees:
 *     PsBoostThreadIoQoS @ 0x14029176C (PsBoostThreadIoQoS.c)
 *     KiAbThreadUnboostCpuPriority @ 0x1402D9A60 (KiAbThreadUnboostCpuPriority.c)
 *     KiAbThreadUnboostIoPriority @ 0x1402D9F48 (KiAbThreadUnboostIoPriority.c)
 *     EtwTraceAutoBoostClearFloor @ 0x14045EA22 (EtwTraceAutoBoostClearFloor.c)
 */

__int64 __fastcall KiAbThreadRemoveBoostsSlow(ULONG_PTR BugCheckParameter1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    if ( (a3 & 0x40000000) != 0 )
      result = KiAbThreadUnboostIoPriority(BugCheckParameter1, 0LL);
    if ( a3 < 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter1 + 864));
      result = PsBoostThreadIoQoS(BugCheckParameter1, 1);
    }
    if ( (a3 & 0x3FFFFFFF) != 0 )
      result = KiAbThreadUnboostCpuPriority(BugCheckParameter1);
    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
      return EtwTraceAutoBoostClearFloor(BugCheckParameter1, a2, (unsigned int)a3);
  }
  return result;
}
