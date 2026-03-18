/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x14036C1F4
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1407F1400 (SleepstudyHelperBuildBlocker.c)
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x140807E5C (SshpSessionManagerInterruptTimeToSystemTime.c)
 *     SshpWnfCallback @ 0x1408097A0 (SshpWnfCallback.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
