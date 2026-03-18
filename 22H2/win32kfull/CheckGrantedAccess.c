/*
 * XREFs of CheckGrantedAccess @ 0x1C00A1770
 * Callers:
 *     CheckCursorClipAccess @ 0x1C005D510 (CheckCursorClipAccess.c)
 *     EditionAreAllAccessGranted @ 0x1C00A1600 (EditionAreAllAccessGranted.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00A1618 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     NtUserGetCaretBlinkTime @ 0x1C00A16D0 (NtUserGetCaretBlinkTime.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C01AB63C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     xxxInjectTouchInput @ 0x1C01B07F4 (xxxInjectTouchInput.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01BF3D8 (-_SwapMouseButton@@YAHH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5LL);
  return 0LL;
}
