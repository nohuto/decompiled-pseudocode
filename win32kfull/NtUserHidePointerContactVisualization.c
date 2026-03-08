/*
 * XREFs of NtUserHidePointerContactVisualization @ 0x1C0147CC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserHidePointerContactVisualization(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rcx
  int v5; // ebx

  EnterCrit(0LL, 0LL);
  if ( (unsigned int)(a1 - 2) > 0xFFFD )
  {
    v5 = 0;
    UserSetLastError(87);
  }
  else
  {
    v3 = SGDGetUserSessionState(v2);
    v5 = CTouchProcessor::SetPointerVisualization(*(CTouchProcessor **)(v3 + 3424), a1, 0, 0LL, 1);
  }
  UserSessionSwitchLeaveCrit(v4);
  return v5;
}
