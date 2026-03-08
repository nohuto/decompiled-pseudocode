/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x1402A4AA4
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1407261A0 (SleepstudyHelperBuildBlocker.c)
 *     SshpWnfCallback @ 0x140879A40 (SshpWnfCallback.c)
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x14099ECA4 (SshpSessionManagerInterruptTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
