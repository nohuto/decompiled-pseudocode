/*
 * XREFs of SSHSupportReleasePushLockExclusive @ 0x14032D18C
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1407A8670 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateLibrary @ 0x140849A10 (SleepstudyHelperCreateLibrary.c)
 *     SshpAlpcOpenGracePeriodWorker @ 0x14084D560 (SshpAlpcOpenGracePeriodWorker.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084D7DC (SshpAlpcProcessAlpcMessage.c)
 *     SshpAlpcProcessMessage @ 0x14084D968 (SshpAlpcProcessMessage.c)
 *     SshpSessionManagerControlSessionCallback @ 0x14085BA60 (SshpSessionManagerControlSessionCallback.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x14085BA90 (SshpSessionManagerFlushControlEventBuffer.c)
 *     SshpSessionManagerSendControlEvent @ 0x140874678 (SshpSessionManagerSendControlEvent.c)
 *     SshpSendSessionData @ 0x1408786FC (SshpSendSessionData.c)
 *     SshpFreeDataEntry @ 0x1409A17B8 (SshpFreeDataEntry.c)
 *     SleepstudyHelperCreateBlockerData @ 0x1409A1D80 (SleepstudyHelperCreateBlockerData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x1409A1F40 (SleepstudyHelperDestroyLibrary.c)
 *     SshpAlpcShutdownTraceSessions @ 0x1409A25B4 (SshpAlpcShutdownTraceSessions.c)
 * Callees:
 *     KeAbPostRelease @ 0x140231260 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1402BD930 (ExfTryToWakePushLock.c)
 */

signed __int32 __fastcall SSHSupportReleasePushLockExclusive(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
