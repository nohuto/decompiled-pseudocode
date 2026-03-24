/*
 * XREFs of PopPowerActionWatchdog @ 0x14056F4D0
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x140382C90 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FD570 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140564E84 (PopInternalAddToDumpFile.c)
 */

void __noreturn PopPowerActionWatchdog()
{
  ULONG_PTR v0; // rbx
  struct _KTHREAD *BugCheckParameter4; // rcx

  if ( dword_140C23BE4 == 1 )
  {
    v0 = 240LL;
  }
  else
  {
    v0 = 15LL;
    if ( dword_140C23BE4 == 2 )
      v0 = 241LL;
  }
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  BugCheckParameter4 = (struct _KTHREAD *)::BugCheckParameter4;
  if ( !::BugCheckParameter4 )
  {
    BugCheckParameter4 = (struct _KTHREAD *)qword_140C23BF0;
    if ( !qword_140C23BF0 )
    {
      BugCheckParameter4 = (struct _KTHREAD *)qword_140C23BF8;
      if ( !qword_140C23BF8 )
      {
        BugCheckParameter4 = (struct _KTHREAD *)qword_140C23C00;
        if ( !qword_140C23C00 )
        {
          BugCheckParameter4 = (struct _KTHREAD *)PopTransitionLockOwnerThread;
          if ( !PopTransitionLockOwnerThread )
          {
            BugCheckParameter4 = (struct _KTHREAD *)PopPolicyLockThread;
            if ( !PopPolicyLockThread )
              BugCheckParameter4 = KeGetCurrentThread();
          }
        }
      }
    }
  }
  KeBugCheckEx(0xA0u, v0, dword_140C23A60, PopSleepCheckpoint, (ULONG_PTR)BugCheckParameter4);
}
