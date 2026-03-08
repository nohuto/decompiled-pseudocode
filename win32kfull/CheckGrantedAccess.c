/*
 * XREFs of CheckGrantedAccess @ 0x1C00D7810
 * Callers:
 *     CheckCursorClipAccess @ 0x1C0022250 (CheckCursorClipAccess.c)
 *     EditionAreAllAccessGranted @ 0x1C00D76A0 (EditionAreAllAccessGranted.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00D76B8 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     NtUserGetCaretBlinkTime @ 0x1C00D7770 (NtUserGetCaretBlinkTime.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01AC80C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x1C01B19B4 (xxxInjectTouchInput.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01C0578 (-_SwapMouseButton@@YAHH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5);
  return 0LL;
}
