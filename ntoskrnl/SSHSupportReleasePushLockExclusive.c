/*
 * XREFs of SSHSupportReleasePushLockExclusive @ 0x1402A4AB8
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1407261A0 (SleepstudyHelperBuildBlocker.c)
 *     SleepstudyHelperCreateLibrary @ 0x140847520 (SleepstudyHelperCreateLibrary.c)
 *     SshpAlpcOpenGracePeriodWorker @ 0x140849DD0 (SshpAlpcOpenGracePeriodWorker.c)
 *     SshpAlpcProcessAlpcMessage @ 0x14084A04C (SshpAlpcProcessAlpcMessage.c)
 *     SshpAlpcProcessMessage @ 0x14084A1D8 (SshpAlpcProcessMessage.c)
 *     SshpSessionManagerControlSessionCallback @ 0x140857D80 (SshpSessionManagerControlSessionCallback.c)
 *     SshpSessionManagerFlushControlEventBuffer @ 0x140857DB0 (SshpSessionManagerFlushControlEventBuffer.c)
 *     SshpSessionManagerSendControlEvent @ 0x1408717B8 (SshpSessionManagerSendControlEvent.c)
 *     SshpSendSessionData @ 0x140879EBC (SshpSendSessionData.c)
 *     SshpFreeDataEntry @ 0x14099E728 (SshpFreeDataEntry.c)
 *     SleepstudyHelperCreateBlockerData @ 0x14099ECF0 (SleepstudyHelperCreateBlockerData.c)
 *     SleepstudyHelperDestroyLibrary @ 0x14099EEB0 (SleepstudyHelperDestroyLibrary.c)
 *     SshpAlpcShutdownTraceSessions @ 0x14099F524 (SshpAlpcShutdownTraceSessions.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 */

signed __int32 __fastcall SSHSupportReleasePushLockExclusive(volatile signed __int64 *BugCheckParameter2)
{
  if ( (_InterlockedExchangeAdd64(BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  return KeAbPostRelease((ULONG_PTR)BugCheckParameter2);
}
