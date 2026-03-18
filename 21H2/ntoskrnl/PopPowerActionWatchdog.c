/*
 * XREFs of PopPowerActionWatchdog @ 0x1405D01F0
 * Callers:
 *     PopSetPowerActionWatchdogState @ 0x14038B9A0 (PopSetPowerActionWatchdogState.c)
 * Callees:
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     PopInternalAddToDumpFile @ 0x1405C6658 (PopInternalAddToDumpFile.c)
 */

void __noreturn PopPowerActionWatchdog()
{
  ULONG_PTR v0; // rbx
  struct _KTHREAD *BugCheckParameter4; // rcx

  if ( dword_140C22964 == 1 )
  {
    v0 = 240LL;
  }
  else
  {
    v0 = 15LL;
    if ( dword_140C22964 == 2 )
      v0 = 241LL;
  }
  PopInternalAddToDumpFile(0LL, 0, 0LL);
  BugCheckParameter4 = (struct _KTHREAD *)::BugCheckParameter4;
  if ( !::BugCheckParameter4 )
  {
    BugCheckParameter4 = (struct _KTHREAD *)qword_140C22970;
    if ( !qword_140C22970 )
    {
      BugCheckParameter4 = (struct _KTHREAD *)qword_140C22978;
      if ( !qword_140C22978 )
      {
        BugCheckParameter4 = (struct _KTHREAD *)qword_140C22980;
        if ( !qword_140C22980 )
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
  KeBugCheckEx(0xA0u, v0, dword_140C227E0, PopSleepCheckpoint, (ULONG_PTR)BugCheckParameter4);
}
