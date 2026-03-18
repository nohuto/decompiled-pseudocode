/*
 * XREFs of SSHSupportQueryInterruptTime @ 0x14032D1E0
 * Callers:
 *     SleepstudyHelperBuildBlocker @ 0x1407A8670 (SleepstudyHelperBuildBlocker.c)
 *     SshpWnfCallback @ 0x140878D70 (SshpWnfCallback.c)
 *     SshpSessionManagerInterruptTimeToSystemTime @ 0x1409A1D34 (SshpSessionManagerInterruptTimeToSystemTime.c)
 * Callees:
 *     <none>
 */

__int64 SSHSupportQueryInterruptTime()
{
  return MEMORY[0xFFFFF78000000008];
}
