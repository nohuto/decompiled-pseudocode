/*
 * XREFs of SetRITTimer @ 0x1C0078D60
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C00734A0 (zzzUpdateCursorImage.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00A3BCC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C00FF018 (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     ShowAutorunCursor @ 0x1C01CFBC0 (ShowAutorunCursor.c)
 *     EditionSetAccessibilityTimer @ 0x1C02120C0 (EditionSetAccessibilityTimer.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0253CE8 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0075120 (InternalSetTimer.c)
 */

__int64 __fastcall SetRITTimer(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  return InternalSetTimer(0LL, a1, a2, a3, 0, a4 != 0 ? 20 : 4);
}
