/*
 * XREFs of ?ResetTooltipTimer@@YAXPEAUtagDESKTOP@@@Z @ 0x1C013D3A4
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00188F0 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00B6B88 (xxxCancelMouseMoveTracking.c)
 * Callees:
 *     FindTimer @ 0x1C003BF24 (FindTimer.c)
 */

void __fastcall ResetTooltipTimer(struct tagDESKTOP *a1)
{
  FindTimer(0LL, *((_QWORD *)a1 + 15), 4u, 1, 0LL);
  *((_QWORD *)a1 + 15) = 0LL;
}
