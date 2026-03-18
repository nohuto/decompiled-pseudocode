/*
 * XREFs of ?IsRightSemiMaximized@@YA_NPEBUtagWND@@@Z @ 0x1C00C3E5C
 * Callers:
 *     CitGetWindowInfo @ 0x1C00C3C30 (CitGetWindowInfo.c)
 *     ?xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z @ 0x1C00C4E00 (-xxxMinMaximizeEx@@YAXPEAUtagWND@@IW4MinMaxOptions@@PEAVCMinMaxParams@@@Z.c)
 *     ?xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z @ 0x1C00F188C (-xxxDWP_SetCursor@@YAHPEAUtagWND@@PEAUHWND__@@HI@Z.c)
 *     ?EvaluateArrangeState@@YA?AW4_WARR_STATES@@PEAUtagWND@@@Z @ 0x1C01E988C (-EvaluateArrangeState@@YA-AW4_WARR_STATES@@PEAUtagWND@@@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x1C01ED858 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsRightSemiMaximized(const struct tagWND *a1)
{
  int v1; // eax

  v1 = *((_DWORD *)a1 + 80);
  return (v1 & 0x8000000) != 0 && (v1 & 0x4000000) == 0;
}
