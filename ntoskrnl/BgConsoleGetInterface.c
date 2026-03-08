/*
 * XREFs of BgConsoleGetInterface @ 0x140AEB5EC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403A7F10 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140B99F84 (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140B9A59C (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140381C10 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x140381C60 (BgpFwAcquireLock.c)
 */

__int64 (__fastcall **BgConsoleGetInterface())()
{
  __int64 (__fastcall **v0)(); // rbx
  __int64 (__fastcall **v1)(); // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E3B0 & 1) != 0 )
  {
    v1 = BgpConsoleInterface;
    if ( !qword_140C0E458 )
      v1 = 0LL;
    v0 = v1;
  }
  BgpFwReleaseLock();
  return v0;
}
