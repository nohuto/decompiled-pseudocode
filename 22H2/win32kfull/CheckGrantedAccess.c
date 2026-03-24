/*
 * XREFs of CheckGrantedAccess @ 0x1C01039E4
 * Callers:
 *     CheckCursorClipAccess @ 0x1C003DC40 (CheckCursorClipAccess.c)
 *     ?xxxMouseEventDirect@@YAHKKKK_K00H@Z @ 0x1C010316C (-xxxMouseEventDirect@@YAHKKKK_K00H@Z.c)
 *     ?InternalCreateMenu@@YAPEAUtagMENU@@H@Z @ 0x1C0103838 (-InternalCreateMenu@@YAPEAUtagMENU@@H@Z.c)
 *     NtUserGetCaretBlinkTime @ 0x1C0103960 (NtUserGetCaretBlinkTime.c)
 *     xxxInjectTouchInput @ 0x1C01DC7EC (xxxInjectTouchInput.c)
 *     ?_SwapMouseButton@@YAHH@Z @ 0x1C01E9DE0 (-_SwapMouseButton@@YAHH@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
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
