/*
 * XREFs of ValidateGestureInfo @ 0x1C0227BFC
 * Callers:
 *     NtUserInjectGesture @ 0x1C01FDA90 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C02278EC (SendGestureMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(_DWORD *a1, __int64 a2, __int64 a3)
{
  if ( *a1 == 56 && a1[7] && a1[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87LL, a2, a3);
  return 0LL;
}
