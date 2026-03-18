/*
 * XREFs of CheckGrantedAccess @ 0x1C00F5C8C
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     CheckCursorClipAccess @ 0x1C00A8870 (CheckCursorClipAccess.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C00F575C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C00F5AF4 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     NtUserGetCaretBlinkTime @ 0x1C00F5C10 (NtUserGetCaretBlinkTime.c)
 *     EditionAreAllAccessGranted @ 0x1C0159D20 (EditionAreAllAccessGranted.c)
 *     xxxInjectTouchInput @ 0x1C01D73EC (xxxInjectTouchInput.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01E4B28 (-_SwapMouseButton@@YAHH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall CheckGrantedAccess(ACCESS_MASK a1, ACCESS_MASK a2)
{
  __int64 v2; // rdx

  if ( RtlAreAllAccessesGranted(a1, a2) )
    return 1LL;
  UserSetLastError(5LL, v2);
  return 0LL;
}
