/*
 * XREFs of PopPowerActionWatchdog @ 0x14056F590
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x140382BA0 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140564F44 (PopInternalAddToDumpFile.c)
 */

void __noreturn PopPowerActionWatchdog()
{
  ULONG_PTR v0; // rbx
  struct _KTHREAD *BugCheckParameter4; // rcx

  if ( dword_140C235E4 == 1 )
  {
    v0 = 240LL;
  }
  else
  {
    v0 = 15LL;
    if ( dword_140C235E4 == 2 )
      v0 = 241LL;
  }
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  BugCheckParameter4 = (struct _KTHREAD *)::BugCheckParameter4;
  if ( !::BugCheckParameter4 )
  {
    BugCheckParameter4 = (struct _KTHREAD *)qword_140C235F0;
    if ( !qword_140C235F0 )
    {
      BugCheckParameter4 = (struct _KTHREAD *)qword_140C235F8;
      if ( !qword_140C235F8 )
      {
        BugCheckParameter4 = (struct _KTHREAD *)qword_140C23600;
        if ( !qword_140C23600 )
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
  KeBugCheckEx(0xA0u, v0, dword_140C23460, PopSleepCheckpoint, (ULONG_PTR)BugCheckParameter4);
}
