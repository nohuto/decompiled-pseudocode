/*
 * XREFs of xxxWaitMessageEx @ 0x1C01B84F0
 * Callers:
 *     xxxOldNextWindow @ 0x1C01CBDC8 (xxxOldNextWindow.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNLoop @ 0x1C021726C (xxxMNLoop.c)
 *     xxxHelpLoop @ 0x1C023C17C (xxxHelpLoop.c)
 * Callees:
 *     ClientWaitMessageExMPH @ 0x1C0006E60 (ClientWaitMessageExMPH.c)
 *     xxxSleepThread2 @ 0x1C006D200 (xxxSleepThread2.c)
 */

__int64 __fastcall xxxWaitMessageEx(unsigned int a1, unsigned int a2, enum SLEEP_STATUS *a3)
{
  if ( *(int *)(*(_QWORD *)(gptiCurrent + 448LL) + 28LL) <= 0 )
    return xxxSleepThread2(a1, a2, 1, 0, a3);
  else
    return ClientWaitMessageExMPH(a1, a2);
}
