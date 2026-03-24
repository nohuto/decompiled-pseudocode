/*
 * XREFs of CheckGrantedAccess @ 0x1C0103D34
 * Callers:
 *     CheckCursorClipAccess @ 0x1C003DCE0 (CheckCursorClipAccess.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01034BC (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C0103B88 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     NtUserGetCaretBlinkTime @ 0x1C0103CB0 (NtUserGetCaretBlinkTime.c)
 *     xxxInjectTouchInput @ 0x1C01DCDAC (xxxInjectTouchInput.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01EA3A0 (-_SwapMouseButton@@YAHH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5LL, v2, v3);
  return 0LL;
}
