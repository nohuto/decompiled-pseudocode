/*
 * XREFs of BgConsoleDestroyInterface @ 0x140AEC504
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A7F10 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140AEBA68 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140B9A59C (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x140382650 (BgpFwFreeMemory.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140AEC564 (BgpDisplayCharacterDestroyContext.c)
 */

char __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_140CF7760;
    if ( qword_140CF7760 )
    {
      if ( *(_QWORD *)(qword_140CF7760 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140CF7760 + 40));
        v2 = qword_140CF7760;
      }
      BgpFwFreeMemory(v2);
      qword_140CF7760 = 0LL;
    }
  }
  return BgpFwReleaseLock();
}
