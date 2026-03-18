/*
 * XREFs of ?xxxTooltipDestroyCallback@@YAXXZ @ 0x1C013D708
 * Callers:
 *     xxxTrackMouseMove @ 0x1C00188F0 (xxxTrackMouseMove.c)
 *     xxxCancelMouseMoveTracking @ 0x1C00B6B88 (xxxCancelMouseMoveTracking.c)
 * Callees:
 *     ?xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z @ 0x1C013CFE4 (-xxxTooltipCallback@@YAXW4tagTOOLTIPID@@PEAUHFONT__@@PEAUHWND__@@@Z.c)
 */

void __fastcall xxxTooltipDestroyCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  xxxTooltipCallback(0, 0LL, 0LL, a4);
}
