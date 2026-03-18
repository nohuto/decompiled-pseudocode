/*
 * XREFs of xxxWaitMessageEx @ 0x1C01DD5A8
 * Callers:
 *     xxxOldNextWindow @ 0x1C01EF0A8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNLoop @ 0x1C022E038 (xxxMNLoop.c)
 *     xxxHelpLoop @ 0x1C024A384 (xxxHelpLoop.c)
 * Callees:
 *     xxxSleepThread2 @ 0x1C0052D3C (xxxSleepThread2.c)
 *     ClientWaitMessageExMPH @ 0x1C00A4BFC (ClientWaitMessageExMPH.c)
 */

__int64 __fastcall xxxWaitMessageEx(unsigned int a1, unsigned int a2, enum SLEEP_STATUS *a3)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL) <= 0 )
    return xxxSleepThread2(a1, a2, 1, 0, a3);
  else
    return ClientWaitMessageExMPH(a1, a2);
}
