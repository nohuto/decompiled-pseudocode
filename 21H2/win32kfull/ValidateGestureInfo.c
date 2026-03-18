/*
 * XREFs of ValidateGestureInfo @ 0x1C02216CC
 * Callers:
 *     NtUserInjectGesture @ 0x1C01F7FF0 (NtUserInjectGesture.c)
 *     SendGestureMessage @ 0x1C02213C4 (SendGestureMessage.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall ValidateGestureInfo(_DWORD *a1, __int64 a2)
{
  if ( *a1 == 56 && a1[7] && a1[12] <= 0x400u )
    return 1LL;
  UserSetLastError(87LL, a2);
  return 0LL;
}
