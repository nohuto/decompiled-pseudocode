/*
 * XREFs of InitTooltipDelay @ 0x1C00DB6A4
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00DB220 (xxxTooltipWndProc.c)
 *     _SetDoubleClickTime @ 0x1C00DB5F0 (_SetDoubleClickTime.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InitTooltipDelay(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    *(_DWORD *)(a1 + 8) = 3 * gdtDblClk;
    result = gdtDblClk;
    *(_DWORD *)(a1 + 12) = 8 * gdtDblClk;
  }
  return result;
}
