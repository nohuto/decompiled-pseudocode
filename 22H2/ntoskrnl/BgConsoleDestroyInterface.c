/*
 * XREFs of BgConsoleDestroyInterface @ 0x140AF0254
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403AD4F0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x140AEFA28 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140B9E7AC (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140384860 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403848B0 (BgpFwAcquireLock.c)
 *     BgpFwFreeMemory @ 0x1403852A0 (BgpFwFreeMemory.c)
 *     BgpDisplayCharacterDestroyContext @ 0x140AF02B4 (BgpDisplayCharacterDestroyContext.c)
 */

char __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_140CF7BA0;
    if ( qword_140CF7BA0 )
    {
      if ( *(_QWORD *)(qword_140CF7BA0 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140CF7BA0 + 40));
        v2 = qword_140CF7BA0;
      }
      BgpFwFreeMemory(v2);
      qword_140CF7BA0 = 0LL;
    }
  }
  return BgpFwReleaseLock();
}
