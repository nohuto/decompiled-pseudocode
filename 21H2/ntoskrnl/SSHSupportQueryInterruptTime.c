/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x140580F6C
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x140616E00 (SleepstudyHelperBuildBlocker.c)
 *     SshpSendSessionData @ 0x1408FAE08 (SshpSendSessionData.c)
 *     SshpWnfCallback @ 0x1408FBCB0 (SshpWnfCallback.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
