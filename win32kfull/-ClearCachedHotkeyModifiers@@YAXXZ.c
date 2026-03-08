/*
 * XREFs of ?ClearCachedHotkeyModifiers@@YAXXZ @ 0x1C00201D8
 * Callers:
 *     ClearKeyboardStates @ 0x1C0020194 (ClearKeyboardStates.c)
 *     InitKeyboard @ 0x1C007B470 (InitKeyboard.c)
 *     InitKeyboardState @ 0x1C01299B0 (InitKeyboardState.c)
 * Callees:
 *     <none>
 */

void __fastcall ClearCachedHotkeyModifiers(__int64 a1)
{
  __int64 v1; // rcx
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_DWORD *)(SGDGetUserSessionState(a1) + 13824) = 0;
  *(_DWORD *)(SGDGetUserSessionState(v1) + 13828) = 0;
  *(_DWORD *)(SGDGetUserSessionState(v2) + 13796) = 0;
  *(_DWORD *)(SGDGetUserSessionState(v3) + 13792) = 0;
  WindowArrangementSequence::fWindowArrangementSequenceInProgress = 0;
}
