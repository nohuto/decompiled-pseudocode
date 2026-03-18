/*
 * XREFs of BgConsoleGetInterface @ 0x140AEF5AC
 * Callers:
 *     BgkNotifyDisplayOwnershipChange @ 0x1403AD4F0 (BgkNotifyDisplayOwnershipChange.c)
 *     BgkInitialize @ 0x140B9E198 (BgkInitialize.c)
 *     BcpDisplayEarlyBugCheckScreen @ 0x140B9E7AC (BcpDisplayEarlyBugCheckScreen.c)
 * Callees:
 *     BgpFwReleaseLock @ 0x140384860 (BgpFwReleaseLock.c)
 *     BgpFwAcquireLock @ 0x1403848B0 (BgpFwAcquireLock.c)
 */

__int64 (__fastcall **BgConsoleGetInterface())()
{
  __int64 (__fastcall **v0)(); // rbx
  __int64 (__fastcall **v1)(); // rcx

  v0 = 0LL;
  BgpFwAcquireLock();
  if ( (dword_140C0E4B0 & 1) != 0 )
  {
    v1 = BgpConsoleInterface;
    if ( !qword_140C0E558 )
      v1 = 0LL;
    v0 = v1;
  }
  BgpFwReleaseLock();
  return v0;
}
