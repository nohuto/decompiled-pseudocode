/*
 * XREFs of SetRITTimer @ 0x1C00793E0
 * Callers:
 *     zzzUpdateCursorImage @ 0x1C0061E20 (zzzUpdateCursorImage.c)
 *     ?ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z @ 0x1C007933C (-ConfigureRITDelayableTimers@@YAXW4RitTimerRate@@@Z.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00FA1BC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ShowAutorunCursor @ 0x1C01AA2E0 (ShowAutorunCursor.c)
 *     EditionSetAccessibilityTimer @ 0x1C01F73C0 (EditionSetAccessibilityTimer.c)
 *     ?DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z @ 0x1C0248044 (-DetectPressAndHoldGesture@InteractiveControlDevice@@QEAAXPEAVInteractiveControlInput@@I@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C0061830 (InternalSetTimer.c)
 */

__int64 __fastcall SetRITTimer(__int64 a1, unsigned int a2, __int64 a3, int a4)
{
  return InternalSetTimer(0LL, a1, a2, a3, 0, a4 != 0 ? 20 : 4);
}
