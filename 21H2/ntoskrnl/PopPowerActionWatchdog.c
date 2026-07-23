/*
 * XREFs of PopPowerActionWatchdog @ 0x14056F7D0
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x140382D50 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x140565184 (PopInternalAddToDumpFile.c)
 */

void __noreturn PopPowerActionWatchdog()
{
  ULONG_PTR v0; // rbx
  struct _KTHREAD *BugCheckParameter4; // rcx

  if ( dword_140C23C04 == 1 )
  {
    v0 = 240LL;
  }
  else
  {
    v0 = 15LL;
    if ( dword_140C23C04 == 2 )
      v0 = 241LL;
  }
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  BugCheckParameter4 = (struct _KTHREAD *)::BugCheckParameter4;
  if ( !::BugCheckParameter4 )
  {
    BugCheckParameter4 = (struct _KTHREAD *)qword_140C23C10;
    if ( !qword_140C23C10 )
    {
      BugCheckParameter4 = (struct _KTHREAD *)qword_140C23C18;
      if ( !qword_140C23C18 )
      {
        BugCheckParameter4 = (struct _KTHREAD *)qword_140C23C20;
        if ( !qword_140C23C20 )
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
  KeBugCheckEx(0xA0u, v0, dword_140C23A80, PopSleepCheckpoint, (ULONG_PTR)BugCheckParameter4);
}
