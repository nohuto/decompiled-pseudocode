/*
 * XREFs of ValidateGestureInfo @ 0x1C0204B50
 * Callers:
 *     NtUserInjectGesture @ 0x1C01D52A0 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C0204854 (SendGestureMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(_DWORD *a1)
{
  if ( *a1 == 56 && a1[7] && a1[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87);
  return 0LL;
}
