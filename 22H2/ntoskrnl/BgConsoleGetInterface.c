/*
 * XREFs of BgConsoleGetInterface @ 0x1409F1664
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x14039B440 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140A96F04 (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140A974F0 (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x14039BBA8 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x14039BBF8 (BgpFwAcquireLock.c)
 */

__int64 (__fastcall **BgConsoleGetInterface())()
{
  __int64 (__fastcall **v0)(); // rbx
  __int64 (__fastcall **v1)(); // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140C134F0 & 1) != 0 )
  {
    v1 = BgpConsoleInterface;
    if ( !qword_140C13598 )
      v1 = 0LL;
    v0 = v1;
  }
  BgpFwReleaseLock();
  return v0;
}
