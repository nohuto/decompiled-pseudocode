/*
 * XREFs of SetRITTimer @ 0x1C003CE70
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00188F0 (xxxTrackMouseMove.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0020C7C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C003CDCC (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     zzzUpdateCursorImage @ 0x1C00E6B60 (zzzUpdateCursorImage.c)
 *     ?xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z @ 0x1C013D4B0 (-xxxCreateTooltip2@@YAXPEAUtagDESKTOP@@PEAUtagWND@@H@Z.c)
 *     ShowAutorunCursor @ 0x1C01A90E0 (ShowAutorunCursor.c)
 *     EditionSetAccessibilityTimer @ 0x1C01F61F0 (EditionSetAccessibilityTimer.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0245374 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C00E6510 (InternalSetTimer.c)
 */

__int64 __fastcall SetRITTimer(int a1, int a2, int a3, int a4)
{
  return InternalSetTimer(0, a1, a2, a3, 0, a4 != 0 ? 20 : 4);
}
