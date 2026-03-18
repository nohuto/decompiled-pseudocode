/*
 * XREFs of NtUserHidePointerContactVisualization @ 0x1C01549E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 */

__int64 __fastcall NtUserHidePointerContactVisualization(int a1)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // ebx
  __int64 v7; // r8
  __int64 v8; // r9

  EnterCrit(0LL, 0LL);
  if ( (unsigned int)(a1 - 2) > 0xFFFD )
  {
    v6 = 0;
    UserSetLastError(87);
  }
  else
  {
    v3 = SGDGetUserSessionState(v2);
    v6 = CTouchProcessor::SetPointerVisualization(*(CTouchProcessor **)(v3 + 3424), a1, 0, 0LL, 1);
  }
  UserSessionSwitchLeaveCrit(v5, v4, v7, v8);
  return v6;
}
