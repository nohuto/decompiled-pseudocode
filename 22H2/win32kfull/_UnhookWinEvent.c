/*
 * XREFs of _UnhookWinEvent @ 0x1C0024208
 * Callers:
 *     NtUserUnhookWinEvent @ 0x1C0024160 (NtUserUnhookWinEvent.c)
 * Callees:
 *     DestroyEventHook @ 0x1C0022770 (DestroyEventHook.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall UnhookWinEvent(__int64 a1)
{
  if ( (*(_BYTE *)(_HMPheFromObject() + 25) & 1) != 0 || *(_QWORD *)(a1 + 16) != gptiCurrent )
  {
    UserSetLastError(6LL);
    return 0LL;
  }
  else
  {
    DestroyEventHook(a1);
    return 1LL;
  }
}
