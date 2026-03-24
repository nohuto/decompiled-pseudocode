/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x140580C6C
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x14069A960 (SleepstudyHelperBuildBlocker.c)
 *     SshpSendSessionData @ 0x1408FACF8 (SshpSendSessionData.c)
 *     SshpWnfCallback @ 0x1408FBBA0 (SshpWnfCallback.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
