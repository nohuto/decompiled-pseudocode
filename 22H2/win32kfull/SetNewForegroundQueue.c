/*
 * XREFs of SetNewForegroundQueue @ 0x1C003DB70
 * Callers:
 *     zzzReattachThreads @ 0x1C001194C (zzzReattachThreads.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C003D1EC (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     EditionHandleAltTab @ 0x1C0131C10 (EditionHandleAltTab.c)
 *     xxxNextWindow @ 0x1C01F3B6C (xxxNextWindow.c)
 * Callees:
 *     UpdateRawMouseMode @ 0x1C0052508 (UpdateRawMouseMode.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetNewForegroundQueue(__int64 a1)
{
  __int64 result; // rax

  result = gpqForeground;
  gpqForeground = a1;
  if ( a1 )
    return UpdateRawMouseMode(a1);
  *(&WPP_MAIN_CB.AlignmentRequirement + 1) = 0;
  return result;
}
