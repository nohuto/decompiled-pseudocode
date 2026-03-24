/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x140580D2C
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1406B78F0 (SleepstudyHelperBuildBlocker.c)
 *     SshpSendSessionData @ 0x1408FACA8 (SshpSendSessionData.c)
 *     SshpWnfCallback @ 0x1408FBB50 (SshpWnfCallback.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
