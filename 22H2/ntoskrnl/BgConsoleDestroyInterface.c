/*
 * XREFs of BgConsoleDestroyInterface @ 0x1409F3F5C
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B440 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkDestroy @ 0x1409F4B08 (BgkDestroy.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140A974F0 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039B660 (BgpFwFreeMemory.c)
 *     BgpFwReleaseLock @ 0x14039BBA8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BBF8 (BgpFwAcquireLock.c)
 *     BgpDisplayCharacterDestroyContext @ 0x1409F3FBC (BgpDisplayCharacterDestroyContext.c)
 */

void __fastcall BgConsoleDestroyInterface(__int64 (__fastcall **a1)())
{
  __int64 v2; // rcx

  BgpFwAcquireLock();
  if ( a1 == BgpConsoleInterface )
  {
    v2 = qword_140CDB158;
    if ( qword_140CDB158 )
    {
      if ( *(_QWORD *)(qword_140CDB158 + 40) )
      {
        BgpDisplayCharacterDestroyContext(*(_QWORD *)(qword_140CDB158 + 40));
        v2 = qword_140CDB158;
      }
      BgpFwFreeMemory(v2);
      qword_140CDB158 = 0LL;
    }
  }
  BgpFwReleaseLock();
}
